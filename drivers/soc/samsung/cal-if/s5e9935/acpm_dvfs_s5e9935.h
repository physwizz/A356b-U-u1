#include <soc/samsung/fvmap.h>
#include <soc/samsung/asv_g_spec.h>

enum acpm_dvfs_id {
	MIF = ACPM_VCLK_TYPE,
	INT,
	CPUCL0,
	CPUCL1,
	CPUCL2,
	NPU0,
	NPU1,
	DSU,
	AUD,
	CP_CPU,
	CP,
	CP_EM,
	CP_MCW,
	G3D,
	INTCAM,
	CAM,
	DISP,
	CSIS,
	ISP,
	MFC,
	MFD,
	INTSCI,
	DSP,
	DNC,
	GNSS,
	ALIVE,
	CHUB,
	VTS,
	HSI0,
	UFD,
};

struct vclk acpm_vclk_list[] = {
	CMUCAL_ACPM_VCLK(MIF, NULL, NULL, NULL, NULL, MARGIN_MIF, 0),
	CMUCAL_ACPM_VCLK(INT, NULL, NULL, NULL, NULL, MARGIN_INT, 0),
	CMUCAL_ACPM_VCLK(CPUCL0, NULL, NULL, NULL, NULL, MARGIN_CPUCL0, 1),
	CMUCAL_ACPM_VCLK(CPUCL1, NULL, NULL, NULL, NULL, MARGIN_CPUCL1, 1),
	CMUCAL_ACPM_VCLK(CPUCL2, NULL, NULL, NULL, NULL, MARGIN_CPUCL2, 1),
	CMUCAL_ACPM_VCLK(NPU0, NULL, NULL, NULL, NULL, MARGIN_NPU0, 0),
	CMUCAL_ACPM_VCLK(NPU1, NULL, NULL, NULL, NULL, MARGIN_NPU1, 0),
	CMUCAL_ACPM_VCLK(DSU, NULL, NULL, NULL, NULL, MARGIN_DSU, 1),
	CMUCAL_ACPM_VCLK(DISP, NULL, NULL, NULL, NULL, MARGIN_DISP, 0),
	CMUCAL_ACPM_VCLK(AUD, NULL, NULL, NULL, NULL, MARGIN_AUD, 1),
	CMUCAL_ACPM_VCLK(CP_CPU, NULL, NULL, NULL, NULL, MARGIN_CP_CPU, 0),
	CMUCAL_ACPM_VCLK(CP, NULL, NULL, NULL, NULL, MARGIN_CP, 0),
	CMUCAL_ACPM_VCLK(CP_EM, NULL, NULL, NULL, NULL, MARGIN_CP_EM, 0),
	CMUCAL_ACPM_VCLK(CP_MCW, NULL, NULL, NULL, NULL, MARGIN_CP_MCW, 0),
	CMUCAL_ACPM_VCLK(G3D, NULL, NULL, NULL, NULL, MARGIN_G3D, 1),
	CMUCAL_ACPM_VCLK(INTCAM, NULL, NULL, NULL, NULL, MARGIN_INTCAM, 0),
	CMUCAL_ACPM_VCLK(CAM, NULL, NULL, NULL, NULL, MARGIN_CAM, 0),
	CMUCAL_ACPM_VCLK(CSIS, NULL, NULL, NULL, NULL, MARGIN_CSIS, 0),
	CMUCAL_ACPM_VCLK(ISP, NULL, NULL, NULL, NULL, MARGIN_ISP, 0),
	CMUCAL_ACPM_VCLK(MFC, NULL, NULL, NULL, NULL, MARGIN_MFC, 0),
	CMUCAL_ACPM_VCLK(MFD, NULL, NULL, NULL, NULL, MARGIN_MFD, 0),
	CMUCAL_ACPM_VCLK(INTSCI, NULL, NULL, NULL, NULL, MARGIN_INTSCI, 0),
	CMUCAL_ACPM_VCLK(DSP, NULL, NULL, NULL, NULL, MARGIN_DSP, 0),
	CMUCAL_ACPM_VCLK(DNC, NULL, NULL, NULL, NULL, MARGIN_DNC, 0),
	CMUCAL_ACPM_VCLK(GNSS, NULL, NULL, NULL, NULL, MARGIN_GNSS, 0),
	CMUCAL_ACPM_VCLK(ALIVE, NULL, NULL, NULL, NULL, MARGIN_ALIVE, 0),
	CMUCAL_ACPM_VCLK(CHUB, NULL, NULL, NULL, NULL, MARGIN_CHUB, 0),
	CMUCAL_ACPM_VCLK(VTS, NULL, NULL, NULL, NULL, MARGIN_VTS, 0),
	CMUCAL_ACPM_VCLK(HSI0, NULL, NULL, NULL, NULL, MARGIN_HSI0, 0),
	CMUCAL_ACPM_VCLK(UFD, NULL, NULL, NULL, NULL, MARGIN_UFD, 0),
};

unsigned int acpm_vclk_size = ARRAY_SIZE(acpm_vclk_list);

asv_g_spec(cpucl2, GET_IDX(CPUCL2), 0x10009010, 8);
asv_g_spec(cpucl1, GET_IDX(CPUCL1), 0x10009014, 8);
asv_g_spec(cpucl0, GET_IDX(CPUCL0), 0x10009018, 8);
asv_g_spec(g3d, GET_IDX(G3D), 0x1000901C, 8);
asv_g_spec(mif, GET_IDX(MIF), 0x10000018, 8);
asv_g_spec(dsu, GET_IDX(DSU), 0x1000001C, 8);
asv_g_spec(intsci, GET_IDX(INTSCI), 0x10000020, 8);
asv_g_spec(modem, GET_IDX(CP), 0x1000003C, 8);

static struct attribute *asv_g_spec_attrs[] = {
	asv_g_spec_attr(cpucl2),
	asv_g_spec_attr(cpucl1),
	asv_g_spec_attr(cpucl0),
	asv_g_spec_attr(g3d),
	asv_g_spec_attr(mif),
	asv_g_spec_attr(dsu),
	asv_g_spec_attr(intsci),
	asv_g_spec_attr(modem),
	NULL,
};

const struct attribute_group asv_g_spec_grp = {
	.attrs = asv_g_spec_attrs,
};
