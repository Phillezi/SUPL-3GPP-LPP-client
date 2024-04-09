/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "NR-IntegrityRTD-InfoBounds-r18.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_meanRTD_r18_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_stdDevRTD_r18_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 31L)) {
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
static asn_per_constraints_t asn_PER_type_resolution_r18_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_meanRTD_r18_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_stdDevRTD_r18_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_resolution_r18_value2enum_2[] = {
	{ 0,	5,	"mdot1" },
	{ 1,	2,	"m1" },
	{ 2,	3,	"m10" },
	{ 3,	3,	"m30" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_resolution_r18_enum2value_2[] = {
	1,	/* m1(1) */
	2,	/* m10(2) */
	3,	/* m30(3) */
	0	/* mdot1(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_resolution_r18_specs_2 = {
	asn_MAP_resolution_r18_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_resolution_r18_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_resolution_r18_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_resolution_r18_2 = {
	"resolution-r18",
	"resolution-r18",
	&asn_OP_NativeEnumerated,
	asn_DEF_resolution_r18_tags_2,
	sizeof(asn_DEF_resolution_r18_tags_2)
		/sizeof(asn_DEF_resolution_r18_tags_2[0]) - 1, /* 1 */
	asn_DEF_resolution_r18_tags_2,	/* Same as above */
	sizeof(asn_DEF_resolution_r18_tags_2)
		/sizeof(asn_DEF_resolution_r18_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_resolution_r18_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_resolution_r18_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_IntegrityRTD_InfoBounds_r18_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_IntegrityRTD_InfoBounds_r18, resolution_r18),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_resolution_r18_2,
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
		"resolution-r18"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_IntegrityRTD_InfoBounds_r18, meanRTD_r18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_meanRTD_r18_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_meanRTD_r18_constraint_1
		},
		0, 0, /* No default value */
		"meanRTD-r18"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_IntegrityRTD_InfoBounds_r18, stdDevRTD_r18),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_stdDevRTD_r18_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_stdDevRTD_r18_constraint_1
		},
		0, 0, /* No default value */
		"stdDevRTD-r18"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_IntegrityRTD_InfoBounds_r18_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_IntegrityRTD_InfoBounds_r18_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* resolution-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* meanRTD-r18 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* stdDevRTD-r18 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_IntegrityRTD_InfoBounds_r18_specs_1 = {
	sizeof(struct NR_IntegrityRTD_InfoBounds_r18),
	offsetof(struct NR_IntegrityRTD_InfoBounds_r18, _asn_ctx),
	asn_MAP_NR_IntegrityRTD_InfoBounds_r18_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_IntegrityRTD_InfoBounds_r18 = {
	"NR-IntegrityRTD-InfoBounds-r18",
	"NR-IntegrityRTD-InfoBounds-r18",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_IntegrityRTD_InfoBounds_r18_tags_1,
	sizeof(asn_DEF_NR_IntegrityRTD_InfoBounds_r18_tags_1)
		/sizeof(asn_DEF_NR_IntegrityRTD_InfoBounds_r18_tags_1[0]), /* 1 */
	asn_DEF_NR_IntegrityRTD_InfoBounds_r18_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_IntegrityRTD_InfoBounds_r18_tags_1)
		/sizeof(asn_DEF_NR_IntegrityRTD_InfoBounds_r18_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_IntegrityRTD_InfoBounds_r18_1,
	3,	/* Elements count */
	&asn_SPC_NR_IntegrityRTD_InfoBounds_r18_specs_1	/* Additional specs */
};

