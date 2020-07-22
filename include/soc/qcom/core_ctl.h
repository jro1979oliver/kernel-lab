/*
<<<<<<< HEAD
 * Copyright (c) 2014, The Linux Foundation. All rights reserved.
=======
 * Copyright (c) 2014-2015, The Linux Foundation. All rights reserved.
>>>>>>> b8722a2853752c400da2b5f42d4dc7b82e15cd45
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
<<<<<<< HEAD
<<<<<<< HEAD:include/soc/qcom/core_ctl.h
=======
>>>>>>> b8722a2853752c400da2b5f42d4dc7b82e15cd45

#ifndef __SOC_QCOM_CORE_CTL_H
#define __SOC_QCOM_CORE_CTL_H

extern void core_ctl_block_hotplug(void);
extern void core_ctl_unblock_hotplug(void);
extern s64 core_ctl_get_time(void);
extern struct cpufreq_policy *core_ctl_get_policy(int cpu);
extern void core_ctl_put_policy(struct cpufreq_policy *policy);
extern struct device *core_ctl_find_cpu_device(unsigned cpu);
extern int core_ctl_online_core(unsigned int cpu);
<<<<<<< HEAD
=======

/dts-v1/;

#include "msm8909-cdp.dtsi"
#include "msm8909-pm8909.dtsi"
#include "msm8909-pm8909-cdp.dtsi"
#include "msm8208.dtsi"

/ {
	model = "Qualcomm Technologies, Inc. MSM8208 1GB CDP";
	compatible = "qcom,msm8909-cdp", "qcom,msm8909", "qcom,cdp";
	qcom,board-id= <1 0>;
};
>>>>>>> b8722a2853752c400da2b5f42d4dc7b82e15cd45:arch/arm/boot/dts/qcom/msm8208-1gb-cdp.dts

=======
extern int core_ctl_offline_core(unsigned int cpu);

#endif
>>>>>>> b8722a2853752c400da2b5f42d4dc7b82e15cd45
