/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "NR-On-Demand-DL-PRS-PerFreqLayer-r17.h"

#include "DL-PRS-QCL-InformationReqTRPlist-r17.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_dl_prs_ResourceBandwidthReq_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 63L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_dl_prs_FrequencyRangeReq_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_dl_prs_ResourceSetPeriodicityReq_r17_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  5,  5,  0,  19 }	/* (0..19,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_dl_prs_ResourceRepetitionFactorReq_r17_constr_32 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_dl_prs_NumSymbolsReq_r17_constr_40 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_dl_prs_CombSizeN_Req_r17_constr_47 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_dl_prs_ResourceBandwidthReq_r17_constr_31 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (1..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_dl_prs_FrequencyRangeReq_r17_value2enum_2[] = {
	{ 0,	3,	"fr1" },
	{ 1,	3,	"fr2" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_dl_prs_FrequencyRangeReq_r17_enum2value_2[] = {
	0,	/* fr1(0) */
	1	/* fr2(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_dl_prs_FrequencyRangeReq_r17_specs_2 = {
	asn_MAP_dl_prs_FrequencyRangeReq_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_prs_FrequencyRangeReq_r17_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dl_prs_FrequencyRangeReq_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_prs_FrequencyRangeReq_r17_2 = {
	"dl-prs-FrequencyRangeReq-r17",
	"dl-prs-FrequencyRangeReq-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_dl_prs_FrequencyRangeReq_r17_tags_2,
	sizeof(asn_DEF_dl_prs_FrequencyRangeReq_r17_tags_2)
		/sizeof(asn_DEF_dl_prs_FrequencyRangeReq_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_dl_prs_FrequencyRangeReq_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_dl_prs_FrequencyRangeReq_r17_tags_2)
		/sizeof(asn_DEF_dl_prs_FrequencyRangeReq_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_dl_prs_FrequencyRangeReq_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_prs_FrequencyRangeReq_r17_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dl_prs_ResourceSetPeriodicityReq_r17_value2enum_6[] = {
	{ 0,	2,	"p4" },
	{ 1,	2,	"p5" },
	{ 2,	2,	"p8" },
	{ 3,	3,	"p10" },
	{ 4,	3,	"p16" },
	{ 5,	3,	"p20" },
	{ 6,	3,	"p32" },
	{ 7,	3,	"p40" },
	{ 8,	3,	"p64" },
	{ 9,	3,	"p80" },
	{ 10,	4,	"p160" },
	{ 11,	4,	"p320" },
	{ 12,	4,	"p640" },
	{ 13,	5,	"p1280" },
	{ 14,	5,	"p2560" },
	{ 15,	5,	"p5120" },
	{ 16,	6,	"p10240" },
	{ 17,	6,	"p20480" },
	{ 18,	6,	"p40960" },
	{ 19,	6,	"p81920" },
	{ 20,	10,	"p128-v1760" },
	{ 21,	10,	"p256-v1760" },
	{ 22,	10,	"p512-v1760" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_dl_prs_ResourceSetPeriodicityReq_r17_enum2value_6[] = {
	3,	/* p10(3) */
	16,	/* p10240(16) */
	20,	/* p128-v1760(20) */
	13,	/* p1280(13) */
	4,	/* p16(4) */
	10,	/* p160(10) */
	5,	/* p20(5) */
	17,	/* p20480(17) */
	21,	/* p256-v1760(21) */
	14,	/* p2560(14) */
	6,	/* p32(6) */
	11,	/* p320(11) */
	0,	/* p4(0) */
	7,	/* p40(7) */
	18,	/* p40960(18) */
	1,	/* p5(1) */
	22,	/* p512-v1760(22) */
	15,	/* p5120(15) */
	8,	/* p64(8) */
	12,	/* p640(12) */
	2,	/* p8(2) */
	9,	/* p80(9) */
	19	/* p81920(19) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_dl_prs_ResourceSetPeriodicityReq_r17_specs_6 = {
	asn_MAP_dl_prs_ResourceSetPeriodicityReq_r17_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_prs_ResourceSetPeriodicityReq_r17_enum2value_6,	/* N => "tag"; sorted by N */
	23,	/* Number of elements in the maps */
	21,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dl_prs_ResourceSetPeriodicityReq_r17_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_prs_ResourceSetPeriodicityReq_r17_6 = {
	"dl-prs-ResourceSetPeriodicityReq-r17",
	"dl-prs-ResourceSetPeriodicityReq-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_dl_prs_ResourceSetPeriodicityReq_r17_tags_6,
	sizeof(asn_DEF_dl_prs_ResourceSetPeriodicityReq_r17_tags_6)
		/sizeof(asn_DEF_dl_prs_ResourceSetPeriodicityReq_r17_tags_6[0]) - 1, /* 1 */
	asn_DEF_dl_prs_ResourceSetPeriodicityReq_r17_tags_6,	/* Same as above */
	sizeof(asn_DEF_dl_prs_ResourceSetPeriodicityReq_r17_tags_6)
		/sizeof(asn_DEF_dl_prs_ResourceSetPeriodicityReq_r17_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_dl_prs_ResourceSetPeriodicityReq_r17_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_prs_ResourceSetPeriodicityReq_r17_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dl_prs_ResourceRepetitionFactorReq_r17_value2enum_32[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n6" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n16" },
	{ 5,	3,	"n32" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_dl_prs_ResourceRepetitionFactorReq_r17_enum2value_32[] = {
	4,	/* n16(4) */
	0,	/* n2(0) */
	5,	/* n32(5) */
	1,	/* n4(1) */
	2,	/* n6(2) */
	3	/* n8(3) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_dl_prs_ResourceRepetitionFactorReq_r17_specs_32 = {
	asn_MAP_dl_prs_ResourceRepetitionFactorReq_r17_value2enum_32,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_prs_ResourceRepetitionFactorReq_r17_enum2value_32,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dl_prs_ResourceRepetitionFactorReq_r17_tags_32[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_prs_ResourceRepetitionFactorReq_r17_32 = {
	"dl-prs-ResourceRepetitionFactorReq-r17",
	"dl-prs-ResourceRepetitionFactorReq-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_dl_prs_ResourceRepetitionFactorReq_r17_tags_32,
	sizeof(asn_DEF_dl_prs_ResourceRepetitionFactorReq_r17_tags_32)
		/sizeof(asn_DEF_dl_prs_ResourceRepetitionFactorReq_r17_tags_32[0]) - 1, /* 1 */
	asn_DEF_dl_prs_ResourceRepetitionFactorReq_r17_tags_32,	/* Same as above */
	sizeof(asn_DEF_dl_prs_ResourceRepetitionFactorReq_r17_tags_32)
		/sizeof(asn_DEF_dl_prs_ResourceRepetitionFactorReq_r17_tags_32[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_dl_prs_ResourceRepetitionFactorReq_r17_constr_32,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_prs_ResourceRepetitionFactorReq_r17_specs_32	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dl_prs_NumSymbolsReq_r17_value2enum_40[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n6" },
	{ 3,	3,	"n12" },
	{ 4,	8,	"n1-v1800" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_dl_prs_NumSymbolsReq_r17_enum2value_40[] = {
	4,	/* n1-v1800(4) */
	3,	/* n12(3) */
	0,	/* n2(0) */
	1,	/* n4(1) */
	2	/* n6(2) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_dl_prs_NumSymbolsReq_r17_specs_40 = {
	asn_MAP_dl_prs_NumSymbolsReq_r17_value2enum_40,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_prs_NumSymbolsReq_r17_enum2value_40,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dl_prs_NumSymbolsReq_r17_tags_40[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_prs_NumSymbolsReq_r17_40 = {
	"dl-prs-NumSymbolsReq-r17",
	"dl-prs-NumSymbolsReq-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_dl_prs_NumSymbolsReq_r17_tags_40,
	sizeof(asn_DEF_dl_prs_NumSymbolsReq_r17_tags_40)
		/sizeof(asn_DEF_dl_prs_NumSymbolsReq_r17_tags_40[0]) - 1, /* 1 */
	asn_DEF_dl_prs_NumSymbolsReq_r17_tags_40,	/* Same as above */
	sizeof(asn_DEF_dl_prs_NumSymbolsReq_r17_tags_40)
		/sizeof(asn_DEF_dl_prs_NumSymbolsReq_r17_tags_40[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_dl_prs_NumSymbolsReq_r17_constr_40,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_prs_NumSymbolsReq_r17_specs_40	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dl_prs_CombSizeN_Req_r17_value2enum_47[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n6" },
	{ 3,	3,	"n12" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_dl_prs_CombSizeN_Req_r17_enum2value_47[] = {
	3,	/* n12(3) */
	0,	/* n2(0) */
	1,	/* n4(1) */
	2	/* n6(2) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_dl_prs_CombSizeN_Req_r17_specs_47 = {
	asn_MAP_dl_prs_CombSizeN_Req_r17_value2enum_47,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_prs_CombSizeN_Req_r17_enum2value_47,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dl_prs_CombSizeN_Req_r17_tags_47[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_prs_CombSizeN_Req_r17_47 = {
	"dl-prs-CombSizeN-Req-r17",
	"dl-prs-CombSizeN-Req-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_dl_prs_CombSizeN_Req_r17_tags_47,
	sizeof(asn_DEF_dl_prs_CombSizeN_Req_r17_tags_47)
		/sizeof(asn_DEF_dl_prs_CombSizeN_Req_r17_tags_47[0]) - 1, /* 1 */
	asn_DEF_dl_prs_CombSizeN_Req_r17_tags_47,	/* Same as above */
	sizeof(asn_DEF_dl_prs_CombSizeN_Req_r17_tags_47)
		/sizeof(asn_DEF_dl_prs_CombSizeN_Req_r17_tags_47[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_dl_prs_CombSizeN_Req_r17_constr_47,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_prs_CombSizeN_Req_r17_specs_47	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_On_Demand_DL_PRS_PerFreqLayer_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_On_Demand_DL_PRS_PerFreqLayer_r17, dl_prs_FrequencyRangeReq_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_prs_FrequencyRangeReq_r17_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"dl-prs-FrequencyRangeReq-r17"
		},
	{ ATF_POINTER, 6, offsetof(struct NR_On_Demand_DL_PRS_PerFreqLayer_r17, dl_prs_ResourceSetPeriodicityReq_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_prs_ResourceSetPeriodicityReq_r17_6,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"dl-prs-ResourceSetPeriodicityReq-r17"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_On_Demand_DL_PRS_PerFreqLayer_r17, dl_prs_ResourceBandwidthReq_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_dl_prs_ResourceBandwidthReq_r17_constr_31,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_dl_prs_ResourceBandwidthReq_r17_constraint_1
		},
		0, 0, /* No default value */
		"dl-prs-ResourceBandwidthReq-r17"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_On_Demand_DL_PRS_PerFreqLayer_r17, dl_prs_ResourceRepetitionFactorReq_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_prs_ResourceRepetitionFactorReq_r17_32,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"dl-prs-ResourceRepetitionFactorReq-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_On_Demand_DL_PRS_PerFreqLayer_r17, dl_prs_NumSymbolsReq_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_prs_NumSymbolsReq_r17_40,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"dl-prs-NumSymbolsReq-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_On_Demand_DL_PRS_PerFreqLayer_r17, dl_prs_CombSizeN_Req_r17),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_prs_CombSizeN_Req_r17_47,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"dl-prs-CombSizeN-Req-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_On_Demand_DL_PRS_PerFreqLayer_r17, dl_prs_QCL_InformationReqTRPlist_r17),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_PRS_QCL_InformationReqTRPlist_r17,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"dl-prs-QCL-InformationReqTRPlist-r17"
		},
};
static const int asn_MAP_NR_On_Demand_DL_PRS_PerFreqLayer_r17_oms_1[] = { 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_NR_On_Demand_DL_PRS_PerFreqLayer_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_On_Demand_DL_PRS_PerFreqLayer_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-prs-FrequencyRangeReq-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-prs-ResourceSetPeriodicityReq-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dl-prs-ResourceBandwidthReq-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dl-prs-ResourceRepetitionFactorReq-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dl-prs-NumSymbolsReq-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dl-prs-CombSizeN-Req-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* dl-prs-QCL-InformationReqTRPlist-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_On_Demand_DL_PRS_PerFreqLayer_r17_specs_1 = {
	sizeof(struct NR_On_Demand_DL_PRS_PerFreqLayer_r17),
	offsetof(struct NR_On_Demand_DL_PRS_PerFreqLayer_r17, _asn_ctx),
	asn_MAP_NR_On_Demand_DL_PRS_PerFreqLayer_r17_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_NR_On_Demand_DL_PRS_PerFreqLayer_r17_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_On_Demand_DL_PRS_PerFreqLayer_r17 = {
	"NR-On-Demand-DL-PRS-PerFreqLayer-r17",
	"NR-On-Demand-DL-PRS-PerFreqLayer-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_On_Demand_DL_PRS_PerFreqLayer_r17_tags_1,
	sizeof(asn_DEF_NR_On_Demand_DL_PRS_PerFreqLayer_r17_tags_1)
		/sizeof(asn_DEF_NR_On_Demand_DL_PRS_PerFreqLayer_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_On_Demand_DL_PRS_PerFreqLayer_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_On_Demand_DL_PRS_PerFreqLayer_r17_tags_1)
		/sizeof(asn_DEF_NR_On_Demand_DL_PRS_PerFreqLayer_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_On_Demand_DL_PRS_PerFreqLayer_r17_1,
	7,	/* Elements count */
	&asn_SPC_NR_On_Demand_DL_PRS_PerFreqLayer_r17_specs_1	/* Additional specs */
};

