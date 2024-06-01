/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2014-2018, The Linux Foundation. All rights reserved.
 */

#ifndef __QTI_LMH_H__
#define __QTI_LMH_H__

#include <linux/platform_device.h>

#ifdef CONFIG_DEBUG_KERNEL
int lmh_debug_register(struct platform_device *pdev);
#else
static inline int lmh_debug_register(struct platform_device *pdev)
{
	return 0;
}
#endif

#endif /* __QTI_LMH_H__ */
