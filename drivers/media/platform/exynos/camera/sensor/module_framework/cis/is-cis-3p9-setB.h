/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2016 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_3P9_SET_B_H
#define IS_CIS_3P9_SET_B_H

#include "is-cis.h"
#include "is-cis-3p9.h"

/* S5K3P9SN_REV0.1_Ver0.6_20180806 */
const u32 sensor_3p9_setfile_B_Global[] = {
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0085,	0x02,
	0x6018,	0x0001,	0x02,
	0x7004,	0x1A00,	0x02,
	0x70D8,	0x18E2,	0x02,
	0x6014,	0x0001,	0x02,
	IXC_MODE_DELAY,        3000,        0x00,
	0x6214,	0x7970,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x6000,	0x0005,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x3F3C,	0x0000,	0x02,
	0x3F3E,	0x0000,	0x02,
	0x3F40,	0x0649,	0x02,
	0x3F42,	0x0548,	0x02,
	0x3F44,	0xC1F8,	0x02,
	0x3F46,	0xD405,	0x02,
	0x3F48,	0x0549,	0x02,
	0x3F4A,	0x081A,	0x02,
	0x3F4C,	0x0349,	0x02,
	0x3F4E,	0xA1F8,	0x02,
	0x3F50,	0xD805,	0x02,
	0x3F52,	0x00F0,	0x02,
	0x3F54,	0xBDB8,	0x02,
	0x3F56,	0x0000,	0x02,
	0x3F58,	0x2000,	0x02,
	0x3F5A,	0x4182,	0x02,
	0x3F5C,	0x2000,	0x02,
	0x3F5E,	0x2E90,	0x02,
	0x3F60,	0x2000,	0x02,
	0x3F62,	0x6C00,	0x02,
	0x3F64,	0x0000,	0x02,
	0x3F66,	0x0000,	0x02,
	0x3F68,	0x0000,	0x02,
	0x3F6A,	0x0000,	0x02,
	0x3F6C,	0x0000,	0x02,
	0x3F6E,	0x0000,	0x02,
	0x3F70,	0x2DE9,	0x02,
	0x3F72,	0xF041,	0x02,
	0x3F74,	0x0746,	0x02,
	0x3F76,	0x6548,	0x02,
	0x3F78,	0x0E46,	0x02,
	0x3F7A,	0x0022,	0x02,
	0x3F7C,	0x0068,	0x02,
	0x3F7E,	0x85B2,	0x02,
	0x3F80,	0x040C,	0x02,
	0x3F82,	0x2946,	0x02,
	0x3F84,	0x2046,	0x02,
	0x3F86,	0x00F0,	0x02,
	0x3F88,	0xD7F8,	0x02,
	0x3F8A,	0x3146,	0x02,
	0x3F8C,	0x3846,	0x02,
	0x3F8E,	0x00F0,	0x02,
	0x3F90,	0xD8F8,	0x02,
	0x3F92,	0x5E4F,	0x02,
	0x3F94,	0x4DF2,	0x02,
	0x3F96,	0x0C26,	0x02,
	0x3F98,	0x0C37,	0x02,
	0x3F9A,	0x4FF4,	0x02,
	0x3F9C,	0x8061,	0x02,
	0x3F9E,	0x3A78,	0x02,
	0x3FA0,	0x3046,	0x02,
	0x3FA2,	0x00F0,	0x02,
	0x3FA4,	0xC9F8,	0x02,
	0x3FA6,	0x7878,	0x02,
	0x3FA8,	0xD8B3,	0x02,
	0x3FAA,	0x0022,	0x02,
	0x3FAC,	0x4FF4,	0x02,
	0x3FAE,	0x0071,	0x02,
	0x3FB0,	0x3046,	0x02,
	0x3FB2,	0x00F0,	0x02,
	0x3FB4,	0xC1F8,	0x02,
	0x3FB6,	0x5648,	0x02,
	0x3FB8,	0x0088,	0x02,
	0x3FBA,	0x5649,	0x02,
	0x3FBC,	0xA1F8,	0x02,
	0x3FBE,	0x4402,	0x02,
	0x3FC0,	0x5348,	0x02,
	0x3FC2,	0x001D,	0x02,
	0x3FC4,	0x0088,	0x02,
	0x3FC6,	0xA1F8,	0x02,
	0x3FC8,	0x4602,	0x02,
	0x3FCA,	0xB1F8,	0x02,
	0x3FCC,	0x4402,	0x02,
	0x3FCE,	0xB1F8,	0x02,
	0x3FD0,	0x4622,	0x02,
	0x3FD2,	0x0244,	0x02,
	0x3FD4,	0x1204,	0x02,
	0x3FD6,	0x120C,	0x02,
	0x3FD8,	0x03D0,	0x02,
	0x3FDA,	0x8002,	0x02,
	0x3FDC,	0xB0FB,	0x02,
	0x3FDE,	0xF2F0,	0x02,
	0x3FE0,	0x82B2,	0x02,
	0x3FE2,	0xA1F8,	0x02,
	0x3FE4,	0x4822,	0x02,
	0x3FE6,	0x4C49,	0x02,
	0x3FE8,	0x4888,	0x02,
	0x3FEA,	0x0B88,	0x02,
	0x3FEC,	0x4949,	0x02,
	0x3FEE,	0xA1F8,	0x02,
	0x3FF0,	0xA605,	0x02,
	0x3FF2,	0xA1F8,	0x02,
	0x3FF4,	0xA835,	0x02,
	0x3FF6,	0xC018,	0x02,
	0x3FF8,	0x05D0,	0x02,
	0x3FFA,	0x9902,	0x02,
	0x3FFC,	0xB1FB,	0x02,
	0x3FFE,	0xF0F0,	0x02,
	0x4000,	0x4449,	0x02,
	0x4002,	0xA1F8,	0x02,
	0x4004,	0xAA05,	0x02,
	0x4006,	0x4348,	0x02,
	0x4008,	0xB0F8,	0x02,
	0x400A,	0xAA05,	0x02,
	0x400C,	0x1118,	0x02,
	0x400E,	0x02FB,	0x02,
	0x4010,	0x1010,	0x02,
	0x4012,	0x40F3,	0x02,
	0x4014,	0x9510,	0x02,
	0x4016,	0x1028,	0x02,
	0x4018,	0x06DC,	0x02,
	0x401A,	0x0028,	0x02,
	0x401C,	0x05DA,	0x02,
	0x401E,	0x0020,	0x02,
	0x4020,	0x03E0,	0x02,
	0x4022,	0xFFE7,	0x02,
	0x4024,	0x0122,	0x02,
	0x4026,	0xC1E7,	0x02,
	0x4028,	0x1020,	0x02,
	0x402A,	0x3C49,	0x02,
	0x402C,	0x0880,	0x02,
	0x402E,	0x2946,	0x02,
	0x4030,	0x2046,	0x02,
	0x4032,	0xBDE8,	0x02,
	0x4034,	0xF041,	0x02,
	0x4036,	0x0122,	0x02,
	0x4038,	0x00F0,	0x02,
	0x403A,	0x7EB8,	0x02,
	0x403C,	0x70B5,	0x02,
	0x403E,	0x3348,	0x02,
	0x4040,	0x0022,	0x02,
	0x4042,	0x4168,	0x02,
	0x4044,	0x0C0C,	0x02,
	0x4046,	0x8DB2,	0x02,
	0x4048,	0x2946,	0x02,
	0x404A,	0x2046,	0x02,
	0x404C,	0x00F0,	0x02,
	0x404E,	0x74F8,	0x02,
	0x4050,	0x3348,	0x02,
	0x4052,	0x0268,	0x02,
	0x4054,	0xB2F8,	0x02,
	0x4056,	0x6202,	0x02,
	0x4058,	0x8301,	0x02,
	0x405A,	0x92F8,	0x02,
	0x405C,	0x6002,	0x02,
	0x405E,	0x10F0,	0x02,
	0x4060,	0x020F,	0x02,
	0x4062,	0x09D0,	0x02,
	0x4064,	0x2948,	0x02,
	0x4066,	0x0C30,	0x02,
	0x4068,	0x8188,	0x02,
	0x406A,	0x9942,	0x02,
	0x406C,	0x06D8,	0x02,
	0x406E,	0x4088,	0x02,
	0x4070,	0xA0F5,	0x02,
	0x4072,	0x5141,	0x02,
	0x4074,	0x2339,	0x02,
	0x4076,	0x01D1,	0x02,
	0x4078,	0x00F0,	0x02,
	0x407A,	0x68F8,	0x02,
	0x407C,	0x2946,	0x02,
	0x407E,	0x2046,	0x02,
	0x4080,	0xBDE8,	0x02,
	0x4082,	0x7040,	0x02,
	0x4084,	0x0122,	0x02,
	0x4086,	0x00F0,	0x02,
	0x4088,	0x57B8,	0x02,
	0x408A,	0x70B5,	0x02,
	0x408C,	0x1F48,	0x02,
	0x408E,	0x0022,	0x02,
	0x4090,	0x8168,	0x02,
	0x4092,	0x0C0C,	0x02,
	0x4094,	0x8DB2,	0x02,
	0x4096,	0x2946,	0x02,
	0x4098,	0x2046,	0x02,
	0x409A,	0x00F0,	0x02,
	0x409C,	0x4DF8,	0x02,
	0x409E,	0x00F0,	0x02,
	0x40A0,	0x5AF8,	0x02,
	0x40A2,	0x2048,	0x02,
	0x40A4,	0x90F8,	0x02,
	0x40A6,	0x9410,	0x02,
	0x40A8,	0x11B1,	0x02,
	0x40AA,	0x0021,	0x02,
	0x40AC,	0x80F8,	0x02,
	0x40AE,	0x9010,	0x02,
	0x40B0,	0x1D48,	0x02,
	0x40B2,	0x4FF4,	0x02,
	0x40B4,	0x8071,	0x02,
	0x40B6,	0x90F8,	0x02,
	0x40B8,	0x6F20,	0x02,
	0x40BA,	0x4FF4,	0x02,
	0x40BC,	0x3040,	0x02,
	0x40BE,	0x00F0,	0x02,
	0x40C0,	0x3BF8,	0x02,
	0x40C2,	0x2946,	0x02,
	0x40C4,	0x2046,	0x02,
	0x40C6,	0xBDE8,	0x02,
	0x40C8,	0x7040,	0x02,
	0x40CA,	0x0122,	0x02,
	0x40CC,	0x00F0,	0x02,
	0x40CE,	0x34B8,	0x02,
	0x40D0,	0x10B5,	0x02,
	0x40D2,	0x0022,	0x02,
	0x40D4,	0xAFF2,	0x02,
	0x40D6,	0x6711,	0x02,
	0x40D8,	0x1448,	0x02,
	0x40DA,	0x00F0,	0x02,
	0x40DC,	0x41F8,	0x02,
	0x40DE,	0x0B4C,	0x02,
	0x40E0,	0x0022,	0x02,
	0x40E2,	0xAFF2,	0x02,
	0x40E4,	0xA701,	0x02,
	0x40E6,	0x2060,	0x02,
	0x40E8,	0x1148,	0x02,
	0x40EA,	0x00F0,	0x02,
	0x40EC,	0x39F8,	0x02,
	0x40EE,	0x0022,	0x02,
	0x40F0,	0xAFF2,	0x02,
	0x40F2,	0x6901,	0x02,
	0x40F4,	0x6060,	0x02,
	0x40F6,	0x0F48,	0x02,
	0x40F8,	0x00F0,	0x02,
	0x40FA,	0x32F8,	0x02,
	0x40FC,	0x0849,	0x02,
	0x40FE,	0xA060,	0x02,
	0x4100,	0x40F6,	0x02,
	0x4102,	0xFA00,	0x02,
	0x4104,	0x0968,	0x02,
	0x4106,	0x4883,	0x02,
	0x4108,	0x10BD,	0x02,
	0x410A,	0x0000,	0x02,
	0x410C,	0x2000,	0x02,
	0x410E,	0x4170,	0x02,
	0x4110,	0x4000,	0x02,
	0x4112,	0x9404,	0x02,
	0x4114,	0x2000,	0x02,
	0x4116,	0x38B0,	0x02,
	0x4118,	0x4000,	0x02,
	0x411A,	0xD214,	0x02,
	0x411C,	0x4000,	0x02,
	0x411E,	0xA410,	0x02,
	0x4120,	0x2000,	0x02,
	0x4122,	0x08D0,	0x02,
	0x4124,	0x2000,	0x02,
	0x4126,	0x2800,	0x02,
	0x4128,	0x2000,	0x02,
	0x412A,	0x0E30,	0x02,
	0x412C,	0x0001,	0x02,
	0x412E,	0x1929,	0x02,
	0x4130,	0x0000,	0x02,
	0x4132,	0x8DA3,	0x02,
	0x4134,	0x0000,	0x02,
	0x4136,	0x3A93,	0x02,
	0x4138,	0x4AF2,	0x02,
	0x413A,	0x692C,	0x02,
	0x413C,	0xC0F2,	0x02,
	0x413E,	0x000C,	0x02,
	0x4140,	0x6047,	0x02,
	0x4142,	0x41F6,	0x02,
	0x4144,	0x291C,	0x02,
	0x4146,	0xC0F2,	0x02,
	0x4148,	0x010C,	0x02,
	0x414A,	0x6047,	0x02,
	0x414C,	0x48F6,	0x02,
	0x414E,	0xA35C,	0x02,
	0x4150,	0xC0F2,	0x02,
	0x4152,	0x000C,	0x02,
	0x4154,	0x6047,	0x02,
	0x4156,	0x43F6,	0x02,
	0x4158,	0x932C,	0x02,
	0x415A,	0xC0F2,	0x02,
	0x415C,	0x000C,	0x02,
	0x415E,	0x6047,	0x02,
	0x4160,	0x4BF2,	0x02,
	0x4162,	0x757C,	0x02,
	0x4164,	0xC0F2,	0x02,
	0x4166,	0x000C,	0x02,
	0x4168,	0x6047,	0x02,
	0x416A,	0x0000,	0x02,
	0x10AC,	0x0003,	0x02,
	0x10EC,	0x0008,	0x02,
	0x10C8,	0x000E,	0x02,
	0x11B8,	0x002B,	0x02,
	0x6000,	0x0085,	0x02,
	0xFCFC,	0x4000,	0x02,
	0xF44A,	0x0007,	0x02,
	0xF456,	0x000A,	0x02,
	0x6000,	0x0005,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x16B8,	0x0D05,	0x02,
	0x1022,	0x0020,	0x02,
	0x1E6A,	0x0000,	0x02,
	0x1E6C,	0x0000,	0x02,
	0x1E6E,	0x0000,	0x02,
	0x1E70,	0x0000,	0x02,
	0x1E72,	0x0000,	0x02,
	0x1E74,	0x0000,	0x02,
	0x1E76,	0x0000,	0x02,
	0x1E78,	0x0000,	0x02,
	0x1E7A,	0x0000,	0x02,
	0x1E7C,	0x0000,	0x02,
	0x1E7E,	0x0000,	0x02,
	0x1E80,	0x0000,	0x02,
	0x1E82,	0x0000,	0x02,
	0x1E84,	0x0000,	0x02,
	0x1E86,	0x0000,	0x02,
	0x1E88,	0x0000,	0x02,
};

/*
 * [Mode Information]
 *	0: 4608 x 3456 @30,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1365, MIPI Mclk(Mhz): 26
 *	1: 4608 x 2592 @30,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1365, MIPI Mclk(Mhz): 26
 *	2: 4608 x 2240 @30,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1365, MIPI Mclk(Mhz): 26
 *	3: 3456 x 3456 @30,  MIPI lane: 4, MIPI data rate(Mbps/lane) Sensor: 1365, MIPI Mclk(Mhz): 26
 */
const u32 sensor_3p9_setfile_B_4608x3456_30fps[] = {
	0x6000,	0x0085,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0110,	0x1002,	0x02,
	0x0114,	0x0300,	0x02,
	0x0344,	0x0010,	0x02,
	0x0346,	0x0018,	0x02,
	0x0348,	0x121F,	0x02,
	0x034A,	0x0D97,	0x02,
	0x034C,	0x1200,	0x02,
	0x034E,	0x0D80,	0x02,
	0x0350,	0x0008,	0x02,
	0x0352,	0x0000,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0001,	0x02,
	0x0900,	0x0011,	0x02,
	0x0404,	0x1000,	0x02,
	0x0402,	0x1010,	0x02,
	0x0400,	0x1010,	0x02,
	0x0304,	0x0006,	0x02,
	0x030C,	0x0000,	0x02,
	0x0306,	0x00E2,	0x02,
	0x0302,	0x0001,	0x02,
	0x0300,	0x0007,	0x02,
	0x030E,	0x0004,	0x02,
	0x0312,	0x0000,	0x02,
	0x0310,	0x009E,	0x02,
	0x030A,	0x0001,	0x02,
	0x0308,	0x0008,	0x02,
	0x0342,	0x13E0,	0x02,
	0x0340,	0x0E52,	0x02,
	0x021E,	0x0000,	0x02,
	0x0D00,	0x0000,	0x02,
	0x0D02,	0x0001,	0x02,
	0x0FEA,	0x1440,	0x02,
	0x0B06,	0x0101,	0x02,
	0x6000,	0x0005,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x2642,	0x0055,	0x02,
	0x0F62,	0x0100,	0x02,
	0x417C,	0x0101,	0x02,
	0x417E,	0xD123,	0x02,
	0x4180,	0x1E00,	0x02,
	0x21B6,	0x0100,	0x02,
	0x0DF8,	0x1001,	0x02,
	0x1F0E,	0x0100,	0x02,
	0x1F1A,	0x00CC,	0x02,
	0x1F24,	0x0133,	0x02,
	0x1F2E,	0x0133,	0x02,
	0x1F38,	0x0133,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0085,	0x02,
};

const u32 sensor_3p9_setfile_B_4608x2592_30fps[] = {
	0x6000,	0x0085,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0110,	0x1002,	0x02,
	0x0114,	0x0300,	0x02,
	0x0344,	0x0010,	0x02,
	0x0346,	0x01C8,	0x02,
	0x0348,	0x121F,	0x02,
	0x034A,	0x0BE7,	0x02,
	0x034C,	0x1200,	0x02,
	0x034E,	0x0A20,	0x02,
	0x0350,	0x0008,	0x02,
	0x0352,	0x0000,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0001,	0x02,
	0x0900,	0x0011,	0x02,
	0x0404,	0x1000,	0x02,
	0x0402,	0x1010,	0x02,
	0x0400,	0x1010,	0x02,
	0x0304,	0x0006,	0x02,
	0x030C,	0x0000,	0x02,
	0x0306,	0x00E2,	0x02,
	0x0302,	0x0001,	0x02,
	0x0300,	0x0007,	0x02,
	0x030E,	0x0004,	0x02,
	0x0312,	0x0000,	0x02,
	0x0310,	0x009E,	0x02,
	0x030A,	0x0001,	0x02,
	0x0308,	0x0008,	0x02,
	0x0342,	0x13E0,	0x02,
	0x0340,	0x0E52,	0x02,
	0x021E,	0x0000,	0x02,
	0x0D00,	0x0000,	0x02,
	0x0D02,	0x0001,	0x02,
	0x0FEA,	0x1440,	0x02,
	0x0B06,	0x0101,	0x02,
	0x6000,	0x0005,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x2642,	0x0055,	0x02,
	0x0F62,	0x0100,	0x02,
	0x417C,	0x0101,	0x02,
	0x417E,	0xD123,	0x02,
	0x4180,	0x1E00,	0x02,
	0x21B6,	0x0100,	0x02,
	0x0DF8,	0x1001,	0x02,
	0x1F0E,	0x0100,	0x02,
	0x1F1A,	0x00CC,	0x02,
	0x1F24,	0x0133,	0x02,
	0x1F2E,	0x0133,	0x02,
	0x1F38,	0x0133,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0085,	0x02,
};

const u32 sensor_3p9_setfile_B_4608x2240_30fps[] = {
	0x6000,	0x0085,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0110,	0x1002,	0x02,
	0x0114,	0x0300,	0x02,
	0x0344,	0x0010,	0x02,
	0x0346,	0x0278,	0x02,
	0x0348,	0x121F,	0x02,
	0x034A,	0x0B37,	0x02,
	0x034C,	0x1200,	0x02,
	0x034E,	0x08C0,	0x02,
	0x0350,	0x0008,	0x02,
	0x0352,	0x0000,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0001,	0x02,
	0x0900,	0x0011,	0x02,
	0x0404,	0x1000,	0x02,
	0x0402,	0x1010,	0x02,
	0x0400,	0x1010,	0x02,
	0x0304,	0x0006,	0x02,
	0x030C,	0x0000,	0x02,
	0x0306,	0x00E2,	0x02,
	0x0302,	0x0001,	0x02,
	0x0300,	0x0007,	0x02,
	0x030E,	0x0004,	0x02,
	0x0312,	0x0000,	0x02,
	0x0310,	0x009E,	0x02,
	0x030A,	0x0001,	0x02,
	0x0308,	0x0008,	0x02,
	0x0342,	0x13E0,	0x02,
	0x0340,	0x0E52,	0x02,
	0x021E,	0x0000,	0x02,
	0x0D00,	0x0000,	0x02,
	0x0D02,	0x0001,	0x02,
	0x0FEA,	0x1440,	0x02,
	0x0B06,	0x0101,	0x02,
	0x6000,	0x0005,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x2642,	0x0055,	0x02,
	0x0F62,	0x0100,	0x02,
	0x417C,	0x0101,	0x02,
	0x417E,	0xD123,	0x02,
	0x4180,	0x1E00,	0x02,
	0x21B6,	0x0100,	0x02,
	0x0DF8,	0x1001,	0x02,
	0x1F0E,	0x0100,	0x02,
	0x1F1A,	0x00CC,	0x02,
	0x1F24,	0x0133,	0x02,
	0x1F2E,	0x0133,	0x02,
	0x1F38,	0x0133,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0085,	0x02,
};

const u32 sensor_3p9_setfile_B_4608x2184_30fps[] = {
	0x6000,	0x0085,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0110,	0x1002,	0x02,
	0x0114,	0x0300,	0x02,
	0x0344,	0x0010,	0x02,
	0x0346,	0x0290,	0x02,
	0x0348,	0x121F,	0x02,
	0x034A,	0x0B1F,	0x02,
	0x034C,	0x1200,	0x02,
	0x034E,	0x0888,	0x02,
	0x0350,	0x0008,	0x02,
	0x0352,	0x0004,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0001,	0x02,
	0x0900,	0x0011,	0x02,
	0x0404,	0x1000,	0x02,
	0x0402,	0x1010,	0x02,
	0x0400,	0x1010,	0x02,
	0x0304,	0x0006,	0x02,
	0x030C,	0x0000,	0x02,
	0x0306,	0x00E2,	0x02,
	0x0302,	0x0001,	0x02,
	0x0300,	0x0007,	0x02,
	0x030E,	0x0004,	0x02,
	0x0312,	0x0000,	0x02,
	0x0310,	0x009E,	0x02,
	0x030A,	0x0001,	0x02,
	0x0308,	0x0008,	0x02,
	0x0342,	0x13E0,	0x02,
	0x0340,	0x0E52,	0x02,
	0x021E,	0x0000,	0x02,
	0x0D00,	0x0000,	0x02,
	0x0D02,	0x0001,	0x02,
	0x0FEA,	0x1440,	0x02,
	0x0B06,	0x0101,	0x02,
	0x6000,	0x0005,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x2642,	0x0055,	0x02,
	0x0F62,	0x0100,	0x02,
	0x417C,	0x0101,	0x02,
	0x417E,	0xD123,	0x02,
	0x4180,	0x1E00,	0x02,
	0x21B6,	0x0100,	0x02,
	0x0DF8,	0x1001,	0x02,
	0x1F0E,	0x0100,	0x02,
	0x1F1A,	0x00CC,	0x02,
	0x1F24,	0x0133,	0x02,
	0x1F2E,	0x0133,	0x02,
	0x1F38,	0x0133,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0085,	0x02,
};

const u32 sensor_3p9_setfile_B_3456x3456_30fps[] = {
	0x6000,	0x0085,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0110,	0x1002,	0x02,
	0x0114,	0x0300,	0x02,
	0x0344,	0x0250,	0x02,
	0x0346,	0x0018,	0x02,
	0x0348,	0x0FDF,	0x02,
	0x034A,	0x0D97,	0x02,
	0x034C,	0x0D80,	0x02,
	0x034E,	0x0D80,	0x02,
	0x0350,	0x0008,	0x02,
	0x0352,	0x0000,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0001,	0x02,
	0x0900,	0x0011,	0x02,
	0x0404,	0x1000,	0x02,
	0x0402,	0x1010,	0x02,
	0x0400,	0x1010,	0x02,
	0x0304,	0x0006,	0x02,
	0x030C,	0x0000,	0x02,
	0x0306,	0x00E2,	0x02,
	0x0302,	0x0001,	0x02,
	0x0300,	0x0007,	0x02,
	0x030E,	0x0004,	0x02,
	0x0312,	0x0000,	0x02,
	0x0310,	0x009E,	0x02,
	0x030A,	0x0001,	0x02,
	0x0308,	0x0008,	0x02,
	0x0342,	0x13E0,	0x02,
	0x0340,	0x0E52,	0x02,
	0x021E,	0x0000,	0x02,
	0x0D00,	0x0000,	0x02,
	0x0D02,	0x0001,	0x02,
	0x0FEA,	0x1440,	0x02,
	0x0B06,	0x0101,	0x02,
	0x6000,	0x0005,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x2642,	0x0055,	0x02,
	0x0F62,	0x0100,	0x02,
	0x417C,	0x0101,	0x02,
	0x417E,	0xD123,	0x02,
	0x4180,	0x1E00,	0x02,
	0x21B6,	0x0100,	0x02,
	0x0DF8,	0x1001,	0x02,
	0x1F0E,	0x0100,	0x02,
	0x1F1A,	0x00CC,	0x02,
	0x1F24,	0x0133,	0x02,
	0x1F2E,	0x0133,	0x02,
	0x1F38,	0x0133,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0085,	0x02,
};

const u32 sensor_3p9_setfile_B_2304x1728_60fps[] = {
	0x6000,	0x0085,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0110,	0x1002,	0x02,
	0x0114,	0x0300,	0x02,
	0x0344,	0x0010,	0x02,
	0x0346,	0x0018,	0x02,
	0x0348,	0x121F,	0x02,
	0x034A,	0x0D97,	0x02,
	0x034C,	0x0900,	0x02,
	0x034E,	0x06C0,	0x02,
	0x0350,	0x0004,	0x02,
	0x0352,	0x0000,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0003,	0x02,
	0x0900,	0x0112,	0x02,
	0x0404,	0x2000,	0x02,
	0x0402,	0x1010,	0x02,
	0x0400,	0x1010,	0x02,
	0x0304,	0x0006,	0x02,
	0x030C,	0x0000,	0x02,
	0x0306,	0x00E2,	0x02,
	0x0302,	0x0001,	0x02,
	0x0300,	0x0007,	0x02,
	0x030E,	0x0004,	0x02,
	0x0312,	0x0000,	0x02,
	0x0310,	0x009E,	0x02,
	0x030A,	0x0001,	0x02,
	0x0308,	0x0008,	0x02,
	0x0342,	0x13E0,	0x02,
	0x0340,	0x0728,	0x02,
	0x021E,	0x0000,	0x02,
	0x0D00,	0x0000,	0x02,
	0x0D02,	0x0001,	0x02,
	0x0FEA,	0x1440,	0x02,
	0x0B06,	0x0101,	0x02,
	0x6000,	0x0005,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x2642,	0x004A,	0x02,
	0x0F62,	0x0100,	0x02,
	0x417C,	0x0101,	0x02,
	0x417E,	0xD123,	0x02,
	0x4180,	0x1E00,	0x02,
	0x21B6,	0x0100,	0x02,
	0x0DF8,	0x1001,	0x02,
	0x1F0E,	0x0100,	0x02,
	0x1F1A,	0x00CC,	0x02,
	0x1F24,	0x0133,	0x02,
	0x1F2E,	0x0133,	0x02,
	0x1F38,	0x0133,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0085,	0x02,
};

const u32 sensor_3p9_setfile_B_2304x1296_60fps[] = {
	0x6000,	0x0085,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0110,	0x1002,	0x02,
	0x0114,	0x0300,	0x02,
	0x0344,	0x0010,	0x02,
	0x0346,	0x01C8,	0x02,
	0x0348,	0x121F,	0x02,
	0x034A,	0x0BE7,	0x02,
	0x034C,	0x0900,	0x02,
	0x034E,	0x0510,	0x02,
	0x0350,	0x0004,	0x02,
	0x0352,	0x0000,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0003,	0x02,
	0x0900,	0x0112,	0x02,
	0x0404,	0x2000,	0x02,
	0x0402,	0x1010,	0x02,
	0x0400,	0x1010,	0x02,
	0x0304,	0x0006,	0x02,
	0x030C,	0x0000,	0x02,
	0x0306,	0x00E2,	0x02,
	0x0302,	0x0001,	0x02,
	0x0300,	0x0007,	0x02,
	0x030E,	0x0004,	0x02,
	0x0312,	0x0000,	0x02,
	0x0310,	0x009E,	0x02,
	0x030A,	0x0001,	0x02,
	0x0308,	0x0008,	0x02,
	0x0342,	0x13E0,	0x02,
	0x0340,	0x0728,	0x02,
	0x021E,	0x0000,	0x02,
	0x0D00,	0x0000,	0x02,
	0x0D02,	0x0001,	0x02,
	0x0FEA,	0x1440,	0x02,
	0x0B06,	0x0101,	0x02,
	0x6000,	0x0005,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x2642,	0x004A,	0x02,
	0x0F62,	0x0100,	0x02,
	0x417C,	0x0101,	0x02,
	0x417E,	0xD123,	0x02,
	0x4180,	0x1E00,	0x02,
	0x21B6,	0x0100,	0x02,
	0x0DF8,	0x1001,	0x02,
	0x1F0E,	0x0100,	0x02,
	0x1F1A,	0x00CC,	0x02,
	0x1F24,	0x0133,	0x02,
	0x1F2E,	0x0133,	0x02,
	0x1F38,	0x0133,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0085,	0x02,
};

const u32 sensor_3p9_setfile_B_1728x1728_60fps[] = {
	0x6000,	0x0085,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0110,	0x1002,	0x02,
	0x0114,	0x0300,	0x02,
	0x0344,	0x0250,	0x02,
	0x0346,	0x0018,	0x02,
	0x0348,	0x0FDF,	0x02,
	0x034A,	0x0D97,	0x02,
	0x034C,	0x06C0,	0x02,
	0x034E,	0x06C0,	0x02,
	0x0350,	0x0004,	0x02,
	0x0352,	0x0000,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0003,	0x02,
	0x0900,	0x0112,	0x02,
	0x0404,	0x2000,	0x02,
	0x0402,	0x1010,	0x02,
	0x0400,	0x1010,	0x02,
	0x0304,	0x0006,	0x02,
	0x030C,	0x0000,	0x02,
	0x0306,	0x00E2,	0x02,
	0x0302,	0x0001,	0x02,
	0x0300,	0x0007,	0x02,
	0x030E,	0x0004,	0x02,
	0x0312,	0x0000,	0x02,
	0x0310,	0x009E,	0x02,
	0x030A,	0x0001,	0x02,
	0x0308,	0x0008,	0x02,
	0x0342,	0x13E0,	0x02,
	0x0340,	0x0728,	0x02,
	0x021E,	0x0000,	0x02,
	0x0D00,	0x0000,	0x02,
	0x0D02,	0x0001,	0x02,
	0x0FEA,	0x1440,	0x02,
	0x0B06,	0x0101,	0x02,
	0x6000,	0x0005,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x2642,	0x004A,	0x02,
	0x0F62,	0x0100,	0x02,
	0x417C,	0x0101,	0x02,
	0x417E,	0xD123,	0x02,
	0x4180,	0x1E00,	0x02,
	0x21B6,	0x0100,	0x02,
	0x0DF8,	0x1001,	0x02,
	0x1F0E,	0x0100,	0x02,
	0x1F1A,	0x00CC,	0x02,
	0x1F24,	0x0133,	0x02,
	0x1F2E,	0x0133,	0x02,
	0x1F38,	0x0133,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0085,	0x02,
};

const u32 sensor_3p9_setfile_B_1152x864_112fps[] = {
	0x6000,	0x0085,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0110,	0x1002,	0x02,
	0x0114,	0x0300,	0x02,
	0x0344,	0x0010,	0x02,
	0x0346,	0x0018,	0x02,
	0x0348,	0x121F,	0x02,
	0x034A,	0x0D97,	0x02,
	0x034C,	0x0480,	0x02,
	0x034E,	0x0360,	0x02,
	0x0350,	0x0002,	0x02,
	0x0352,	0x0000,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0007,	0x02,
	0x0900,	0x0114,	0x02,
	0x0404,	0x4000,	0x02,
	0x0402,	0x1010,	0x02,
	0x0400,	0x1010,	0x02,
	0x0304,	0x0006,	0x02,
	0x030C,	0x0000,	0x02,
	0x0306,	0x00E2,	0x02,
	0x0302,	0x0001,	0x02,
	0x0300,	0x0007,	0x02,
	0x030E,	0x0004,	0x02,
	0x0312,	0x0000,	0x02,
	0x0310,	0x009E,	0x02,
	0x030A,	0x0001,	0x02,
	0x0308,	0x0008,	0x02,
	0x0342,	0x13E0,	0x02,
	0x0340,	0x03D6,	0x02,
	0x021E,	0x0000,	0x02,
	0x0D00,	0x0000,	0x02,
	0x0D02,	0x0001,	0x02,
	0x0FEA,	0x1440,	0x02,
	0x0B06,	0x0101,	0x02,
	0x6000,	0x0005,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x2642,	0x0000,	0x02,
	0x0F62,	0x0100,	0x02,
	0x417C,	0x0101,	0x02,
	0x417E,	0xD123,	0x02,
	0x4180,	0x1E00,	0x02,
	0x21B6,	0x0100,	0x02,
	0x0DF8,	0x1001,	0x02,
	0x1F0E,	0x0000,	0x02,
	0x1F1A,	0x0000,	0x02,
	0x1F24,	0x0000,	0x02,
	0x1F2E,	0x0000,	0x02,
	0x1F38,	0x0000,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0085,	0x02,
};

const u32 sensor_3p9_setfile_B_dualsync_Slave[] = {};

const u32 sensor_3p9_setfile_B_dualsync_Master[] = {};

const struct sensor_pll_info sensor_3p9_pllinfo_B_4608x3456_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x07, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0xE2, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x00, /* secnd_pre_pll_clk_div(0x030C) */
	0x04, /* secnd_pll_multiplier	(0x030E) */
	0x0E52, /* frame_length_lines	(0x0340) */
	0x13E0, /* line_length_pck	(0x0342) */
};

const struct sensor_pll_info sensor_3p9_pllinfo_B_4608x2592_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x07, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0xE2, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x00, /* secnd_pre_pll_clk_div(0x030C) */
	0x04, /* secnd_pll_multiplier	(0x030E) */
	0x0E52, /* frame_length_lines	(0x0340) */
	0x13E0, /* line_length_pck	(0x0342) */
};

const struct sensor_pll_info sensor_3p9_pllinfo_B_4608x2240_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x07, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0xE2, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x00, /* secnd_pre_pll_clk_div(0x030C) */
	0x04, /* secnd_pll_multiplier	(0x030E) */
	0x0E52, /* frame_length_lines	(0x0340) */
	0x13E0, /* line_length_pck	(0x0342) */
};

const struct sensor_pll_info sensor_3p9_pllinfo_B_4608x2184_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x07, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0xE2, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x00, /* secnd_pre_pll_clk_div(0x030C) */
	0x04, /* secnd_pll_multiplier	(0x030E) */
	0x0E52, /* frame_length_lines	(0x0340) */
	0x13E0, /* line_length_pck	(0x0342) */
};

const struct sensor_pll_info sensor_3p9_pllinfo_B_3456x3456_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x07, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0xE2, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x00, /* secnd_pre_pll_clk_div(0x030C) */
	0x04, /* secnd_pll_multiplier	(0x030E) */
	0x0E52, /* frame_length_lines	(0x0340) */
	0x13E0, /* line_length_pck	(0x0342) */
};

const struct sensor_pll_info sensor_3p9_pllinfo_B_2304x1728_60fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x07, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0xE2, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x00, /* secnd_pre_pll_clk_div(0x030C) */
	0x04, /* secnd_pll_multiplier	(0x030E) */
	0x0728, /* frame_length_lines	(0x0340) */
	0x13E0, /* line_length_pck	(0x0342) */
};

const struct sensor_pll_info sensor_3p9_pllinfo_B_2304x1296_60fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x07, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0xE2, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x00, /* secnd_pre_pll_clk_div(0x030C) */
	0x04, /* secnd_pll_multiplier	(0x030E) */
	0x0728, /* frame_length_lines	(0x0340) */
	0x13E0, /* line_length_pck	(0x0342) */
};

const struct sensor_pll_info sensor_3p9_pllinfo_B_1728x1728_60fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x07, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0xE2, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x00, /* secnd_pre_pll_clk_div(0x030C) */
	0x04, /* secnd_pll_multiplier	(0x030E) */
	0x0728, /* frame_length_lines	(0x0340) */
	0x13E0, /* line_length_pck	(0x0342) */
};

const struct sensor_pll_info sensor_3p9_pllinfo_B_1152x864_112fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x07, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0xE2, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x00, /* secnd_pre_pll_clk_div(0x030C) */
	0x04, /* secnd_pll_multiplier	(0x030E) */
	0x03D6, /* frame_length_lines	(0x0340) */
	0x13E0, /* line_length_pck	(0x0342) */
};

static const u32 *sensor_3p9_setfiles_B[] = {
	sensor_3p9_setfile_B_4608x3456_30fps,
	sensor_3p9_setfile_B_4608x2592_30fps,
	sensor_3p9_setfile_B_4608x2240_30fps,
	sensor_3p9_setfile_B_4608x2184_30fps,
	sensor_3p9_setfile_B_3456x3456_30fps,
	sensor_3p9_setfile_B_2304x1728_60fps,
	sensor_3p9_setfile_B_2304x1296_60fps,
	sensor_3p9_setfile_B_1728x1728_60fps,
	sensor_3p9_setfile_B_1152x864_112fps,
};

static const u32 sensor_3p9_setfile_B_sizes[] = {
	ARRAY_SIZE(sensor_3p9_setfile_B_4608x3456_30fps),
	ARRAY_SIZE(sensor_3p9_setfile_B_4608x2592_30fps),
	ARRAY_SIZE(sensor_3p9_setfile_B_4608x2240_30fps),
	ARRAY_SIZE(sensor_3p9_setfile_B_4608x2184_30fps),
	ARRAY_SIZE(sensor_3p9_setfile_B_3456x3456_30fps),
	ARRAY_SIZE(sensor_3p9_setfile_B_2304x1728_60fps),
	ARRAY_SIZE(sensor_3p9_setfile_B_2304x1296_60fps),
	ARRAY_SIZE(sensor_3p9_setfile_B_1728x1728_60fps),
	ARRAY_SIZE(sensor_3p9_setfile_B_1152x864_112fps),
};

static const struct sensor_pll_info *sensor_3p9_pllinfos_B[] = {
	&sensor_3p9_pllinfo_B_4608x3456_30fps,
	&sensor_3p9_pllinfo_B_4608x2592_30fps,
	&sensor_3p9_pllinfo_B_4608x2240_30fps,
	&sensor_3p9_pllinfo_B_4608x2184_30fps,
	&sensor_3p9_pllinfo_B_3456x3456_30fps,
	&sensor_3p9_pllinfo_B_2304x1728_60fps,
	&sensor_3p9_pllinfo_B_2304x1296_60fps,
	&sensor_3p9_pllinfo_B_1728x1728_60fps,
	&sensor_3p9_pllinfo_B_1152x864_112fps,
};
#endif
