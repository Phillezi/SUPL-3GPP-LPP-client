/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "PosSRS-TxFrequencyHoppingRRC-Inactive-r18.h"

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
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_maximumSRS_BandwidthAcrossAllHopsFR1_r18_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_maximumSRS_BandwidthAcrossAllHopsFR2_r18_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_maximumTxFH_Hops_r18_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_rf_TxRetunTimeFR1_r18_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_rf_TxRetunTimeFR2_r18_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_switchTimeBetweenActiveBWP_FrequencyHop_r18_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_numOfOverlappingPRB_r18_constr_31 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_maximumSRS_ResourcePeriodic_r18_constr_36 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_maximumSRS_ResourceSemipersistent_r18_constr_44 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_maximumSRS_BandwidthAcrossAllHopsFR1_r18_value2enum_2[] = {
	{ 0,	5,	"mhz40" },
	{ 1,	5,	"mhz50" },
	{ 2,	5,	"mhz80" },
	{ 3,	6,	"mhz100" }
};
static const unsigned int asn_MAP_maximumSRS_BandwidthAcrossAllHopsFR1_r18_enum2value_2[] = {
	3,	/* mhz100(3) */
	0,	/* mhz40(0) */
	1,	/* mhz50(1) */
	2	/* mhz80(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_maximumSRS_BandwidthAcrossAllHopsFR1_r18_specs_2 = {
	asn_MAP_maximumSRS_BandwidthAcrossAllHopsFR1_r18_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_maximumSRS_BandwidthAcrossAllHopsFR1_r18_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maximumSRS_BandwidthAcrossAllHopsFR1_r18_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maximumSRS_BandwidthAcrossAllHopsFR1_r18_2 = {
	"maximumSRS-BandwidthAcrossAllHopsFR1-r18",
	"maximumSRS-BandwidthAcrossAllHopsFR1-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_maximumSRS_BandwidthAcrossAllHopsFR1_r18_tags_2,
	sizeof(asn_DEF_maximumSRS_BandwidthAcrossAllHopsFR1_r18_tags_2)
		/sizeof(asn_DEF_maximumSRS_BandwidthAcrossAllHopsFR1_r18_tags_2[0]) - 1, /* 1 */
	asn_DEF_maximumSRS_BandwidthAcrossAllHopsFR1_r18_tags_2,	/* Same as above */
	sizeof(asn_DEF_maximumSRS_BandwidthAcrossAllHopsFR1_r18_tags_2)
		/sizeof(asn_DEF_maximumSRS_BandwidthAcrossAllHopsFR1_r18_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_maximumSRS_BandwidthAcrossAllHopsFR1_r18_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maximumSRS_BandwidthAcrossAllHopsFR1_r18_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maximumSRS_BandwidthAcrossAllHopsFR2_r18_value2enum_7[] = {
	{ 0,	6,	"mhz100" },
	{ 1,	6,	"mhz200" },
	{ 2,	6,	"mhz400" }
};
static const unsigned int asn_MAP_maximumSRS_BandwidthAcrossAllHopsFR2_r18_enum2value_7[] = {
	0,	/* mhz100(0) */
	1,	/* mhz200(1) */
	2	/* mhz400(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_maximumSRS_BandwidthAcrossAllHopsFR2_r18_specs_7 = {
	asn_MAP_maximumSRS_BandwidthAcrossAllHopsFR2_r18_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_maximumSRS_BandwidthAcrossAllHopsFR2_r18_enum2value_7,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maximumSRS_BandwidthAcrossAllHopsFR2_r18_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maximumSRS_BandwidthAcrossAllHopsFR2_r18_7 = {
	"maximumSRS-BandwidthAcrossAllHopsFR2-r18",
	"maximumSRS-BandwidthAcrossAllHopsFR2-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_maximumSRS_BandwidthAcrossAllHopsFR2_r18_tags_7,
	sizeof(asn_DEF_maximumSRS_BandwidthAcrossAllHopsFR2_r18_tags_7)
		/sizeof(asn_DEF_maximumSRS_BandwidthAcrossAllHopsFR2_r18_tags_7[0]) - 1, /* 1 */
	asn_DEF_maximumSRS_BandwidthAcrossAllHopsFR2_r18_tags_7,	/* Same as above */
	sizeof(asn_DEF_maximumSRS_BandwidthAcrossAllHopsFR2_r18_tags_7)
		/sizeof(asn_DEF_maximumSRS_BandwidthAcrossAllHopsFR2_r18_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_maximumSRS_BandwidthAcrossAllHopsFR2_r18_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maximumSRS_BandwidthAcrossAllHopsFR2_r18_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maximumTxFH_Hops_r18_value2enum_11[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n3" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n5" },
	{ 4,	2,	"n6" }
};
static const unsigned int asn_MAP_maximumTxFH_Hops_r18_enum2value_11[] = {
	0,	/* n2(0) */
	1,	/* n3(1) */
	2,	/* n4(2) */
	3,	/* n5(3) */
	4	/* n6(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_maximumTxFH_Hops_r18_specs_11 = {
	asn_MAP_maximumTxFH_Hops_r18_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_maximumTxFH_Hops_r18_enum2value_11,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maximumTxFH_Hops_r18_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maximumTxFH_Hops_r18_11 = {
	"maximumTxFH-Hops-r18",
	"maximumTxFH-Hops-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_maximumTxFH_Hops_r18_tags_11,
	sizeof(asn_DEF_maximumTxFH_Hops_r18_tags_11)
		/sizeof(asn_DEF_maximumTxFH_Hops_r18_tags_11[0]) - 1, /* 1 */
	asn_DEF_maximumTxFH_Hops_r18_tags_11,	/* Same as above */
	sizeof(asn_DEF_maximumTxFH_Hops_r18_tags_11)
		/sizeof(asn_DEF_maximumTxFH_Hops_r18_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_maximumTxFH_Hops_r18_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maximumTxFH_Hops_r18_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_rf_TxRetunTimeFR1_r18_value2enum_17[] = {
	{ 0,	3,	"n70" },
	{ 1,	4,	"n140" },
	{ 2,	4,	"n210" }
};
static const unsigned int asn_MAP_rf_TxRetunTimeFR1_r18_enum2value_17[] = {
	1,	/* n140(1) */
	2,	/* n210(2) */
	0	/* n70(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_rf_TxRetunTimeFR1_r18_specs_17 = {
	asn_MAP_rf_TxRetunTimeFR1_r18_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_rf_TxRetunTimeFR1_r18_enum2value_17,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rf_TxRetunTimeFR1_r18_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rf_TxRetunTimeFR1_r18_17 = {
	"rf-TxRetunTimeFR1-r18",
	"rf-TxRetunTimeFR1-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_rf_TxRetunTimeFR1_r18_tags_17,
	sizeof(asn_DEF_rf_TxRetunTimeFR1_r18_tags_17)
		/sizeof(asn_DEF_rf_TxRetunTimeFR1_r18_tags_17[0]) - 1, /* 1 */
	asn_DEF_rf_TxRetunTimeFR1_r18_tags_17,	/* Same as above */
	sizeof(asn_DEF_rf_TxRetunTimeFR1_r18_tags_17)
		/sizeof(asn_DEF_rf_TxRetunTimeFR1_r18_tags_17[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_rf_TxRetunTimeFR1_r18_constr_17,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rf_TxRetunTimeFR1_r18_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_rf_TxRetunTimeFR2_r18_value2enum_21[] = {
	{ 0,	3,	"n35" },
	{ 1,	3,	"n70" },
	{ 2,	4,	"n140" }
};
static const unsigned int asn_MAP_rf_TxRetunTimeFR2_r18_enum2value_21[] = {
	2,	/* n140(2) */
	0,	/* n35(0) */
	1	/* n70(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_rf_TxRetunTimeFR2_r18_specs_21 = {
	asn_MAP_rf_TxRetunTimeFR2_r18_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_rf_TxRetunTimeFR2_r18_enum2value_21,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rf_TxRetunTimeFR2_r18_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rf_TxRetunTimeFR2_r18_21 = {
	"rf-TxRetunTimeFR2-r18",
	"rf-TxRetunTimeFR2-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_rf_TxRetunTimeFR2_r18_tags_21,
	sizeof(asn_DEF_rf_TxRetunTimeFR2_r18_tags_21)
		/sizeof(asn_DEF_rf_TxRetunTimeFR2_r18_tags_21[0]) - 1, /* 1 */
	asn_DEF_rf_TxRetunTimeFR2_r18_tags_21,	/* Same as above */
	sizeof(asn_DEF_rf_TxRetunTimeFR2_r18_tags_21)
		/sizeof(asn_DEF_rf_TxRetunTimeFR2_r18_tags_21[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_rf_TxRetunTimeFR2_r18_constr_21,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rf_TxRetunTimeFR2_r18_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_switchTimeBetweenActiveBWP_FrequencyHop_r18_value2enum_25[] = {
	{ 0,	4,	"n100" },
	{ 1,	4,	"n140" },
	{ 2,	4,	"n200" },
	{ 3,	4,	"n300" },
	{ 4,	4,	"n500" }
};
static const unsigned int asn_MAP_switchTimeBetweenActiveBWP_FrequencyHop_r18_enum2value_25[] = {
	0,	/* n100(0) */
	1,	/* n140(1) */
	2,	/* n200(2) */
	3,	/* n300(3) */
	4	/* n500(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_switchTimeBetweenActiveBWP_FrequencyHop_r18_specs_25 = {
	asn_MAP_switchTimeBetweenActiveBWP_FrequencyHop_r18_value2enum_25,	/* "tag" => N; sorted by tag */
	asn_MAP_switchTimeBetweenActiveBWP_FrequencyHop_r18_enum2value_25,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_switchTimeBetweenActiveBWP_FrequencyHop_r18_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_switchTimeBetweenActiveBWP_FrequencyHop_r18_25 = {
	"switchTimeBetweenActiveBWP-FrequencyHop-r18",
	"switchTimeBetweenActiveBWP-FrequencyHop-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_switchTimeBetweenActiveBWP_FrequencyHop_r18_tags_25,
	sizeof(asn_DEF_switchTimeBetweenActiveBWP_FrequencyHop_r18_tags_25)
		/sizeof(asn_DEF_switchTimeBetweenActiveBWP_FrequencyHop_r18_tags_25[0]) - 1, /* 1 */
	asn_DEF_switchTimeBetweenActiveBWP_FrequencyHop_r18_tags_25,	/* Same as above */
	sizeof(asn_DEF_switchTimeBetweenActiveBWP_FrequencyHop_r18_tags_25)
		/sizeof(asn_DEF_switchTimeBetweenActiveBWP_FrequencyHop_r18_tags_25[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_switchTimeBetweenActiveBWP_FrequencyHop_r18_constr_25,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_switchTimeBetweenActiveBWP_FrequencyHop_r18_specs_25	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_numOfOverlappingPRB_r18_value2enum_31[] = {
	{ 0,	2,	"n0" },
	{ 1,	2,	"n1" },
	{ 2,	2,	"n2" },
	{ 3,	2,	"n4" }
};
static const unsigned int asn_MAP_numOfOverlappingPRB_r18_enum2value_31[] = {
	0,	/* n0(0) */
	1,	/* n1(1) */
	2,	/* n2(2) */
	3	/* n4(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_numOfOverlappingPRB_r18_specs_31 = {
	asn_MAP_numOfOverlappingPRB_r18_value2enum_31,	/* "tag" => N; sorted by tag */
	asn_MAP_numOfOverlappingPRB_r18_enum2value_31,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_numOfOverlappingPRB_r18_tags_31[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numOfOverlappingPRB_r18_31 = {
	"numOfOverlappingPRB-r18",
	"numOfOverlappingPRB-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_numOfOverlappingPRB_r18_tags_31,
	sizeof(asn_DEF_numOfOverlappingPRB_r18_tags_31)
		/sizeof(asn_DEF_numOfOverlappingPRB_r18_tags_31[0]) - 1, /* 1 */
	asn_DEF_numOfOverlappingPRB_r18_tags_31,	/* Same as above */
	sizeof(asn_DEF_numOfOverlappingPRB_r18_tags_31)
		/sizeof(asn_DEF_numOfOverlappingPRB_r18_tags_31[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_numOfOverlappingPRB_r18_constr_31,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_numOfOverlappingPRB_r18_specs_31	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maximumSRS_ResourcePeriodic_r18_value2enum_36[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n16" },
	{ 5,	3,	"n32" },
	{ 6,	3,	"n64" }
};
static const unsigned int asn_MAP_maximumSRS_ResourcePeriodic_r18_enum2value_36[] = {
	0,	/* n1(0) */
	4,	/* n16(4) */
	1,	/* n2(1) */
	5,	/* n32(5) */
	2,	/* n4(2) */
	6,	/* n64(6) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_maximumSRS_ResourcePeriodic_r18_specs_36 = {
	asn_MAP_maximumSRS_ResourcePeriodic_r18_value2enum_36,	/* "tag" => N; sorted by tag */
	asn_MAP_maximumSRS_ResourcePeriodic_r18_enum2value_36,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maximumSRS_ResourcePeriodic_r18_tags_36[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maximumSRS_ResourcePeriodic_r18_36 = {
	"maximumSRS-ResourcePeriodic-r18",
	"maximumSRS-ResourcePeriodic-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_maximumSRS_ResourcePeriodic_r18_tags_36,
	sizeof(asn_DEF_maximumSRS_ResourcePeriodic_r18_tags_36)
		/sizeof(asn_DEF_maximumSRS_ResourcePeriodic_r18_tags_36[0]) - 1, /* 1 */
	asn_DEF_maximumSRS_ResourcePeriodic_r18_tags_36,	/* Same as above */
	sizeof(asn_DEF_maximumSRS_ResourcePeriodic_r18_tags_36)
		/sizeof(asn_DEF_maximumSRS_ResourcePeriodic_r18_tags_36[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_maximumSRS_ResourcePeriodic_r18_constr_36,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maximumSRS_ResourcePeriodic_r18_specs_36	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maximumSRS_ResourceSemipersistent_r18_value2enum_44[] = {
	{ 0,	2,	"n0" },
	{ 1,	2,	"n1" },
	{ 2,	2,	"n2" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n8" },
	{ 5,	3,	"n16" },
	{ 6,	3,	"n32" },
	{ 7,	3,	"n64" }
};
static const unsigned int asn_MAP_maximumSRS_ResourceSemipersistent_r18_enum2value_44[] = {
	0,	/* n0(0) */
	1,	/* n1(1) */
	5,	/* n16(5) */
	2,	/* n2(2) */
	6,	/* n32(6) */
	3,	/* n4(3) */
	7,	/* n64(7) */
	4	/* n8(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_maximumSRS_ResourceSemipersistent_r18_specs_44 = {
	asn_MAP_maximumSRS_ResourceSemipersistent_r18_value2enum_44,	/* "tag" => N; sorted by tag */
	asn_MAP_maximumSRS_ResourceSemipersistent_r18_enum2value_44,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maximumSRS_ResourceSemipersistent_r18_tags_44[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maximumSRS_ResourceSemipersistent_r18_44 = {
	"maximumSRS-ResourceSemipersistent-r18",
	"maximumSRS-ResourceSemipersistent-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_maximumSRS_ResourceSemipersistent_r18_tags_44,
	sizeof(asn_DEF_maximumSRS_ResourceSemipersistent_r18_tags_44)
		/sizeof(asn_DEF_maximumSRS_ResourceSemipersistent_r18_tags_44[0]) - 1, /* 1 */
	asn_DEF_maximumSRS_ResourceSemipersistent_r18_tags_44,	/* Same as above */
	sizeof(asn_DEF_maximumSRS_ResourceSemipersistent_r18_tags_44)
		/sizeof(asn_DEF_maximumSRS_ResourceSemipersistent_r18_tags_44[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_maximumSRS_ResourceSemipersistent_r18_constr_44,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maximumSRS_ResourceSemipersistent_r18_specs_44	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PosSRS_TxFrequencyHoppingRRC_Inactive_r18_1[] = {
	{ ATF_POINTER, 9, offsetof(struct PosSRS_TxFrequencyHoppingRRC_Inactive_r18, maximumSRS_BandwidthAcrossAllHopsFR1_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maximumSRS_BandwidthAcrossAllHopsFR1_r18_2,
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
		"maximumSRS-BandwidthAcrossAllHopsFR1-r18"
		},
	{ ATF_POINTER, 8, offsetof(struct PosSRS_TxFrequencyHoppingRRC_Inactive_r18, maximumSRS_BandwidthAcrossAllHopsFR2_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maximumSRS_BandwidthAcrossAllHopsFR2_r18_7,
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
		"maximumSRS-BandwidthAcrossAllHopsFR2-r18"
		},
	{ ATF_POINTER, 7, offsetof(struct PosSRS_TxFrequencyHoppingRRC_Inactive_r18, maximumTxFH_Hops_r18),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maximumTxFH_Hops_r18_11,
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
		"maximumTxFH-Hops-r18"
		},
	{ ATF_POINTER, 6, offsetof(struct PosSRS_TxFrequencyHoppingRRC_Inactive_r18, rf_TxRetunTimeFR1_r18),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rf_TxRetunTimeFR1_r18_17,
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
		"rf-TxRetunTimeFR1-r18"
		},
	{ ATF_POINTER, 5, offsetof(struct PosSRS_TxFrequencyHoppingRRC_Inactive_r18, rf_TxRetunTimeFR2_r18),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rf_TxRetunTimeFR2_r18_21,
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
		"rf-TxRetunTimeFR2-r18"
		},
	{ ATF_POINTER, 4, offsetof(struct PosSRS_TxFrequencyHoppingRRC_Inactive_r18, switchTimeBetweenActiveBWP_FrequencyHop_r18),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_switchTimeBetweenActiveBWP_FrequencyHop_r18_25,
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
		"switchTimeBetweenActiveBWP-FrequencyHop-r18"
		},
	{ ATF_POINTER, 3, offsetof(struct PosSRS_TxFrequencyHoppingRRC_Inactive_r18, numOfOverlappingPRB_r18),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numOfOverlappingPRB_r18_31,
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
		"numOfOverlappingPRB-r18"
		},
	{ ATF_POINTER, 2, offsetof(struct PosSRS_TxFrequencyHoppingRRC_Inactive_r18, maximumSRS_ResourcePeriodic_r18),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maximumSRS_ResourcePeriodic_r18_36,
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
		"maximumSRS-ResourcePeriodic-r18"
		},
	{ ATF_POINTER, 1, offsetof(struct PosSRS_TxFrequencyHoppingRRC_Inactive_r18, maximumSRS_ResourceSemipersistent_r18),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maximumSRS_ResourceSemipersistent_r18_44,
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
		"maximumSRS-ResourceSemipersistent-r18"
		},
};
static const int asn_MAP_PosSRS_TxFrequencyHoppingRRC_Inactive_r18_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_PosSRS_TxFrequencyHoppingRRC_Inactive_r18_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PosSRS_TxFrequencyHoppingRRC_Inactive_r18_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maximumSRS-BandwidthAcrossAllHopsFR1-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maximumSRS-BandwidthAcrossAllHopsFR2-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maximumTxFH-Hops-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rf-TxRetunTimeFR1-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* rf-TxRetunTimeFR2-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* switchTimeBetweenActiveBWP-FrequencyHop-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* numOfOverlappingPRB-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* maximumSRS-ResourcePeriodic-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* maximumSRS-ResourceSemipersistent-r18 */
};
asn_SEQUENCE_specifics_t asn_SPC_PosSRS_TxFrequencyHoppingRRC_Inactive_r18_specs_1 = {
	sizeof(struct PosSRS_TxFrequencyHoppingRRC_Inactive_r18),
	offsetof(struct PosSRS_TxFrequencyHoppingRRC_Inactive_r18, _asn_ctx),
	asn_MAP_PosSRS_TxFrequencyHoppingRRC_Inactive_r18_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_PosSRS_TxFrequencyHoppingRRC_Inactive_r18_oms_1,	/* Optional members */
	9, 0,	/* Root/Additions */
	9,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PosSRS_TxFrequencyHoppingRRC_Inactive_r18 = {
	"PosSRS-TxFrequencyHoppingRRC-Inactive-r18",
	"PosSRS-TxFrequencyHoppingRRC-Inactive-r18",
	&asn_OP_SEQUENCE,
	asn_DEF_PosSRS_TxFrequencyHoppingRRC_Inactive_r18_tags_1,
	sizeof(asn_DEF_PosSRS_TxFrequencyHoppingRRC_Inactive_r18_tags_1)
		/sizeof(asn_DEF_PosSRS_TxFrequencyHoppingRRC_Inactive_r18_tags_1[0]), /* 1 */
	asn_DEF_PosSRS_TxFrequencyHoppingRRC_Inactive_r18_tags_1,	/* Same as above */
	sizeof(asn_DEF_PosSRS_TxFrequencyHoppingRRC_Inactive_r18_tags_1)
		/sizeof(asn_DEF_PosSRS_TxFrequencyHoppingRRC_Inactive_r18_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_PosSRS_TxFrequencyHoppingRRC_Inactive_r18_1,
	9,	/* Elements count */
	&asn_SPC_PosSRS_TxFrequencyHoppingRRC_Inactive_r18_specs_1	/* Additional specs */
};

