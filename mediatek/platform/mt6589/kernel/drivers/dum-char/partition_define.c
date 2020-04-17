#include <linux/module.h>
#include "partition_define.h"
struct excel_info PartInfo[PART_NUM]={
			{"preloader",12582912,0x0, EMMC, 0,BOOT_1},
			{"mbr",524288,0xC00000, EMMC, 0,USER},
			{"ebr1",524288,0xC80000, EMMC, 1,USER},
			{"pmt",4194304,0xD00000, EMMC, 0,USER},
			{"pro_info",3145728,0x1100000, EMMC, 0,USER},
			{"nvram",5242880,0x1400000, EMMC, 0,USER},
			{"protect_f",10485760,0x1900000, EMMC, 2,USER},
			{"protect_s",10485760,0x2300000, EMMC, 3,USER},
			{"seccfg",131072,0x2D00000, EMMC, 0,USER},
			{"uboot",524288,0x2D20000, EMMC, 0,USER},
			{"bootimg",6291456,0x2DA0000, EMMC, 0,USER},
			{"recovery",6291456,0x33A0000, EMMC, 0,USER},
			{"sec_ro",6291456,0x39A0000, EMMC, 4,USER},
			{"misc",524288,0x3FA0000, EMMC, 0,USER},
			{"logo",3145728,0x4020000, EMMC, 0,USER},
			{"expdb",10485760,0x4320000, EMMC, 0,USER},
			{"android",786432000,0x4D20000, EMMC, 5,USER},
			{"cache",536870912,0x33B20000, EMMC, 6,USER},
			{"usrdata",15775694848,0x53B20000, EMMC, 7,USER},
			{"bmtpool",22020096,0xFFFF00a8, EMMC, 0,USER},
 };
EXPORT_SYMBOL(PartInfo);

#ifdef  MTK_EMMC_SUPPORT
struct MBR_EBR_struct MBR_EBR_px[MBR_COUNT]={
	{"mbr", {1, 2, 3, 4, }},
	{"ebr1", {5, 6, 7, }},
};

EXPORT_SYMBOL(MBR_EBR_px);
#endif

