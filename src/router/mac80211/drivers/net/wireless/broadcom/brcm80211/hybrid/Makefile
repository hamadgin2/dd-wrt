#
# Makefile fragment for Broadcom 802.11n Networking Device Driver
#
# Copyright (c) 2010 Broadcom Corporation
#
# Permission to use, copy, modify, and/or distribute this software for any
# purpose with or without fee is hereby granted, provided that the above
# copyright notice and this permission notice appear in all copies.
#
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
# WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
# SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
# OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
# CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

ccflags-y := \
	-I$(backport_srctree)/drivers/net/wireless/broadcom/brcm80211/hybrid/include \
	-I$(backport_srctree)/drivers/net/wireless/broadcom/brcm80211/hybrid/include/proto \
	-I$(backport_srctree)/drivers/net/wireless/broadcom/brcm80211/hybrid/ \
	-DWL_CFG80211_NIC -DROUTER_CFG -DWL_CFG80211 -DBCMDRIVER

wl_hook_cfg80211-y := wl_cfg80211.o wl_cfgp2p.o wldev_common.o wl_core.o bcmutils.o


obj-$(CPTCFG_BRCMSMAC)	+= wl_hook_cfg80211.o
