/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "NR-IntegrityLocationBounds-r18.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_horizontal_r18_constraint_7(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 255L)) {
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
memb_vertical_r18_constraint_7(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 255L)) {
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
memb_horizontal_r18_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 255L)) {
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
memb_vertical_r18_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 255L)) {
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
static asn_per_constraints_t asn_PER_type_units_r18_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_horizontal_r18_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_vertical_r18_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_horizontal_r18_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_vertical_r18_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_units_r18_value2enum_2[] = {
	{ 0,	2,	"mm" },
	{ 1,	2,	"cm" },
	{ 2,	1,	"m" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_units_r18_enum2value_2[] = {
	1,	/* cm(1) */
	2,	/* m(2) */
	0	/* mm(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_units_r18_specs_2 = {
	asn_MAP_units_r18_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_units_r18_enum2value_2,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_units_r18_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_units_r18_2 = {
	"units-r18",
	"units-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_units_r18_tags_2,
	sizeof(asn_DEF_units_r18_tags_2)
		/sizeof(asn_DEF_units_r18_tags_2[0]) - 1, /* 1 */
	asn_DEF_units_r18_tags_2,	/* Same as above */
	sizeof(asn_DEF_units_r18_tags_2)
		/sizeof(asn_DEF_units_r18_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_units_r18_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_units_r18_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_meanLocationErrorBound_r18_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_IntegrityLocationBounds_r18__meanLocationErrorBound_r18, horizontal_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_horizontal_r18_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_horizontal_r18_constraint_7
		},
		0, 0, /* No default value */
		"horizontal-r18"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_IntegrityLocationBounds_r18__meanLocationErrorBound_r18, vertical_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_vertical_r18_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_vertical_r18_constraint_7
		},
		0, 0, /* No default value */
		"vertical-r18"
		},
};
static const ber_tlv_tag_t asn_DEF_meanLocationErrorBound_r18_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_meanLocationErrorBound_r18_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* horizontal-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* vertical-r18 */
};
static asn_SEQUENCE_specifics_t asn_SPC_meanLocationErrorBound_r18_specs_7 = {
	sizeof(struct NR_IntegrityLocationBounds_r18__meanLocationErrorBound_r18),
	offsetof(struct NR_IntegrityLocationBounds_r18__meanLocationErrorBound_r18, _asn_ctx),
	asn_MAP_meanLocationErrorBound_r18_tag2el_7,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_meanLocationErrorBound_r18_7 = {
	"meanLocationErrorBound-r18",
	"meanLocationErrorBound-r18",
	&asn_OP_SEQUENCE,
	asn_DEF_meanLocationErrorBound_r18_tags_7,
	sizeof(asn_DEF_meanLocationErrorBound_r18_tags_7)
		/sizeof(asn_DEF_meanLocationErrorBound_r18_tags_7[0]) - 1, /* 1 */
	asn_DEF_meanLocationErrorBound_r18_tags_7,	/* Same as above */
	sizeof(asn_DEF_meanLocationErrorBound_r18_tags_7)
		/sizeof(asn_DEF_meanLocationErrorBound_r18_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_meanLocationErrorBound_r18_7,
	2,	/* Elements count */
	&asn_SPC_meanLocationErrorBound_r18_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_stdDevLocationErrorBound_r18_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_IntegrityLocationBounds_r18__stdDevLocationErrorBound_r18, horizontal_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_horizontal_r18_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_horizontal_r18_constraint_10
		},
		0, 0, /* No default value */
		"horizontal-r18"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_IntegrityLocationBounds_r18__stdDevLocationErrorBound_r18, vertical_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_vertical_r18_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_vertical_r18_constraint_10
		},
		0, 0, /* No default value */
		"vertical-r18"
		},
};
static const ber_tlv_tag_t asn_DEF_stdDevLocationErrorBound_r18_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_stdDevLocationErrorBound_r18_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* horizontal-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* vertical-r18 */
};
static asn_SEQUENCE_specifics_t asn_SPC_stdDevLocationErrorBound_r18_specs_10 = {
	sizeof(struct NR_IntegrityLocationBounds_r18__stdDevLocationErrorBound_r18),
	offsetof(struct NR_IntegrityLocationBounds_r18__stdDevLocationErrorBound_r18, _asn_ctx),
	asn_MAP_stdDevLocationErrorBound_r18_tag2el_10,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_stdDevLocationErrorBound_r18_10 = {
	"stdDevLocationErrorBound-r18",
	"stdDevLocationErrorBound-r18",
	&asn_OP_SEQUENCE,
	asn_DEF_stdDevLocationErrorBound_r18_tags_10,
	sizeof(asn_DEF_stdDevLocationErrorBound_r18_tags_10)
		/sizeof(asn_DEF_stdDevLocationErrorBound_r18_tags_10[0]) - 1, /* 1 */
	asn_DEF_stdDevLocationErrorBound_r18_tags_10,	/* Same as above */
	sizeof(asn_DEF_stdDevLocationErrorBound_r18_tags_10)
		/sizeof(asn_DEF_stdDevLocationErrorBound_r18_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_stdDevLocationErrorBound_r18_10,
	2,	/* Elements count */
	&asn_SPC_stdDevLocationErrorBound_r18_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_IntegrityLocationBounds_r18_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_IntegrityLocationBounds_r18, units_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_units_r18_2,
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
		"units-r18"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_IntegrityLocationBounds_r18, meanLocationErrorBound_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_meanLocationErrorBound_r18_7,
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
		"meanLocationErrorBound-r18"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_IntegrityLocationBounds_r18, stdDevLocationErrorBound_r18),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_stdDevLocationErrorBound_r18_10,
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
		"stdDevLocationErrorBound-r18"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_IntegrityLocationBounds_r18_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_IntegrityLocationBounds_r18_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* units-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* meanLocationErrorBound-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* stdDevLocationErrorBound-r18 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_IntegrityLocationBounds_r18_specs_1 = {
	sizeof(struct NR_IntegrityLocationBounds_r18),
	offsetof(struct NR_IntegrityLocationBounds_r18, _asn_ctx),
	asn_MAP_NR_IntegrityLocationBounds_r18_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_IntegrityLocationBounds_r18 = {
	"NR-IntegrityLocationBounds-r18",
	"NR-IntegrityLocationBounds-r18",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_IntegrityLocationBounds_r18_tags_1,
	sizeof(asn_DEF_NR_IntegrityLocationBounds_r18_tags_1)
		/sizeof(asn_DEF_NR_IntegrityLocationBounds_r18_tags_1[0]), /* 1 */
	asn_DEF_NR_IntegrityLocationBounds_r18_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_IntegrityLocationBounds_r18_tags_1)
		/sizeof(asn_DEF_NR_IntegrityLocationBounds_r18_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_IntegrityLocationBounds_r18_1,
	3,	/* Elements count */
	&asn_SPC_NR_IntegrityLocationBounds_r18_specs_1	/* Additional specs */
};

