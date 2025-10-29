/*
* Copyright (c) 2022 NXP.
* All rights reserved.
*/
#include "gt_pf.h"

#pragma GCC optimize ("O0")

#define RELOAD_VALUE 0xFFFFFFFFU

uint32_t overhead_cnt;

void profiler_init(void)
{
  // PMUSERENR = 1
  __asm__ __volatile__ ("mcr p15, 0, %0, c9, c14, 0" :: "r"(1));

  // PMCR.E (bit 0) = 1
  __asm__ __volatile__ ("mcr p15, 0, %0, c9, c12, 0" :: "r"(1));

  // PMCNTENSET.C (bit 31) = 1
  __asm__ __volatile__ ("mcr p15, 0, %0, c9, c12, 1" :: "r"(1 << 31));
}


uint32_t profiler_get_cnt()
{
  volatile unsigned cc;
  __asm__ __volatile__ ("mrc p15, 0, %0, c9, c13, 0" : "=r" (cc));
  return cc;
}

uint32_t gt_pf(uint32_t ticks1, uint32_t ticks2)
{
    uint32_t ticks;

    if (ticks1  >  ticks2) {
        ticks = (RELOAD_VALUE - ticks1) + ticks2;
    } else {
        ticks = ticks2 - ticks1;
    }
    ticks = (ticks > overhead_cnt) ? (ticks - overhead_cnt) : 0;
    return ticks;
}

void overhead(void)
{   
    uint32_t t2;
    uint32_t t1;
    uint32_t prof_sum = 0;
                                          
    for (int i=1; i<=100; i++)
    {   t1 = profiler_get_cnt(); 
        t2 = profiler_get_cnt();
        /*
        ignoring the first and the last five profiler counts 
        that have higher values than normal
        */
        if(i >5 && i < 95) 
        {   prof_sum = prof_sum + gt_pf(t1, t2);
        }
    }
    overhead_cnt = prof_sum / 90;
}
