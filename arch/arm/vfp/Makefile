#
# linux/arch/arm/vfp/Makefile
#
# Copyright (C) 2001 ARM Limited
#

# ccflags-y := -DDEBUG
# asflags-y := -DDEBUG

ifeq ($(CONFIG_ARCH_MT6589),y)
KBUILD_AFLAGS	:=$(KBUILD_AFLAGS:-mhard-hard=-Wa,-mfpu=neon-vfpv4 -mfloat-abi=hard)
else
KBUILD_AFLAGS	:=$(KBUILD_AFLAGS:-msoft-float=-Wa,-mfpu=softvfp-vfpv4 -mfloat-abi=soft)
endif
LDFLAGS		+=--no-warn-mismatch

obj-y			+= vfp.o

vfp-$(CONFIG_VFP)	+= vfpmodule.o entry.o vfphw.o vfpsingle.o vfpdouble.o
