/*
* Copyright (c) 2022 NXP.
* All rights reserved.
*/
#ifndef _GT_PF_H
#define _GT_PF_H

#include <stdint.h>

void profiler_init(void);
uint32_t profiler_get_cnt();
uint32_t gt_pf(uint32_t ticks1, uint32_t ticks2);
void overhead(void);

#endif /* _GT_PF_H  */
