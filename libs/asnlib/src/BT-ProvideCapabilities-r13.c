/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "BT-ProvideCapabilities-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_bt_Modes_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 1 && size <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_bt_MeasSupported_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 1 && size <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_idleStateForMeasurements_r14_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bt_Modes_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bt_MeasSupported_r13_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_idleStateForMeasurements_r14_value2enum_9[] = {
	{ 0,	8,	"required" }
};
static const unsigned int asn_MAP_idleStateForMeasurements_r14_enum2value_9[] = {
	0	/* required(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_idleStateForMeasurements_r14_specs_9 = {
	asn_MAP_idleStateForMeasurements_r14_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_idleStateForMeasurements_r14_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_idleStateForMeasurements_r14_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_idleStateForMeasurements_r14_9 = {
	"idleStateForMeasurements-r14",
	"idleStateForMeasurements-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_idleStateForMeasurements_r14_tags_9,
	sizeof(asn_DEF_idleStateForMeasurements_r14_tags_9)
		/sizeof(asn_DEF_idleStateForMeasurements_r14_tags_9[0]) - 1, /* 1 */
	asn_DEF_idleStateForMeasurements_r14_tags_9,	/* Same as above */
	sizeof(asn_DEF_idleStateForMeasurements_r14_tags_9)
		/sizeof(asn_DEF_idleStateForMeasurements_r14_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_idleStateForMeasurements_r14_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_idleStateForMeasurements_r14_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_8[] = {
	{ ATF_POINTER, 2, offsetof(struct BT_ProvideCapabilities_r13__ext1, idleStateForMeasurements_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_idleStateForMeasurements_r14_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"idleStateForMeasurements-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct BT_ProvideCapabilities_r13__ext1, periodicalReportingSupported_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PositioningModes,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodicalReportingSupported-r14"
		},
};
static const int asn_MAP_ext1_oms_8[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* idleStateForMeasurements-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* periodicalReportingSupported-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_8 = {
	sizeof(struct BT_ProvideCapabilities_r13__ext1),
	offsetof(struct BT_ProvideCapabilities_r13__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_8,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_8,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_8 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_8,
	sizeof(asn_DEF_ext1_tags_8)
		/sizeof(asn_DEF_ext1_tags_8[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_8,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_8)
		/sizeof(asn_DEF_ext1_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_8,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BT_ProvideCapabilities_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BT_ProvideCapabilities_r13, bt_Modes_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_bt_Modes_r13_constr_2,  memb_bt_Modes_r13_constraint_1 },
		0, 0, /* No default value */
		"bt-Modes-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BT_ProvideCapabilities_r13, bt_MeasSupported_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_bt_MeasSupported_r13_constr_5,  memb_bt_MeasSupported_r13_constraint_1 },
		0, 0, /* No default value */
		"bt-MeasSupported-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct BT_ProvideCapabilities_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext1_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_BT_ProvideCapabilities_r13_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_BT_ProvideCapabilities_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BT_ProvideCapabilities_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bt-Modes-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bt-MeasSupported-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_BT_ProvideCapabilities_r13_specs_1 = {
	sizeof(struct BT_ProvideCapabilities_r13),
	offsetof(struct BT_ProvideCapabilities_r13, _asn_ctx),
	asn_MAP_BT_ProvideCapabilities_r13_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_BT_ProvideCapabilities_r13_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BT_ProvideCapabilities_r13 = {
	"BT-ProvideCapabilities-r13",
	"BT-ProvideCapabilities-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_BT_ProvideCapabilities_r13_tags_1,
	sizeof(asn_DEF_BT_ProvideCapabilities_r13_tags_1)
		/sizeof(asn_DEF_BT_ProvideCapabilities_r13_tags_1[0]), /* 1 */
	asn_DEF_BT_ProvideCapabilities_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_BT_ProvideCapabilities_r13_tags_1)
		/sizeof(asn_DEF_BT_ProvideCapabilities_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BT_ProvideCapabilities_r13_1,
	3,	/* Elements count */
	&asn_SPC_BT_ProvideCapabilities_r13_specs_1	/* Additional specs */
};
