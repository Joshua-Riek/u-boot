/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#ifndef __TURINGRK1_RK3588_H
#define __TURINGRK1_RK3588_H

#define ROCKCHIP_DEVICE_SETTINGS \
		"stdout=serial,vidconsole\0" \
		"stderr=serial,vidconsole\0"

#include <configs/rk3588_common.h>

#ifdef BOOT_TARGETS
#undef BOOT_TARGETS
#endif

#define BOOT_TARGETS	"mmc1 nvme scsi usb mmc0 pxe dhcp spi"

#endif /* __TURINGRK1_RK3588_H */
