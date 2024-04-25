/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "OTDOA-LocationServerErrorCauses.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_cause_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_cause_value2enum_2[] = {
	{ 0,	9,	"undefined" },
	{ 1,	34,	"assistanceDataNotSupportedByServer" },
	{ 2,	55,	"assistanceDataSupportedButCurrentlyNotAvailableByServer" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_cause_enum2value_2[] = {
	1,	/* assistanceDataNotSupportedByServer(1) */
	2,	/* assistanceDataSupportedButCurrentlyNotAvailableByServer(2) */
	0	/* undefined(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_cause_specs_2 = {
	asn_MAP_cause_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_cause_enum2value_2,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cause_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cause_2 = {
	"cause",
	"cause",
	&asn_OP_NativeEnumerated,
	asn_DEF_cause_tags_2,
	sizeof(asn_DEF_cause_tags_2)
		/sizeof(asn_DEF_cause_tags_2[0]) - 1, /* 1 */
	asn_DEF_cause_tags_2,	/* Same as above */
	sizeof(asn_DEF_cause_tags_2)
		/sizeof(asn_DEF_cause_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_cause_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cause_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_OTDOA_LocationServerErrorCauses_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OTDOA_LocationServerErrorCauses, cause),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cause_2,
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
		"cause"
		},
};
static const ber_tlv_tag_t asn_DEF_OTDOA_LocationServerErrorCauses_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_OTDOA_LocationServerErrorCauses_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cause */
};
asn_SEQUENCE_specifics_t asn_SPC_OTDOA_LocationServerErrorCauses_specs_1 = {
	sizeof(struct OTDOA_LocationServerErrorCauses),
	offsetof(struct OTDOA_LocationServerErrorCauses, _asn_ctx),
	asn_MAP_OTDOA_LocationServerErrorCauses_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_OTDOA_LocationServerErrorCauses = {
	"OTDOA-LocationServerErrorCauses",
	"OTDOA-LocationServerErrorCauses",
	&asn_OP_SEQUENCE,
	asn_DEF_OTDOA_LocationServerErrorCauses_tags_1,
	sizeof(asn_DEF_OTDOA_LocationServerErrorCauses_tags_1)
		/sizeof(asn_DEF_OTDOA_LocationServerErrorCauses_tags_1[0]), /* 1 */
	asn_DEF_OTDOA_LocationServerErrorCauses_tags_1,	/* Same as above */
	sizeof(asn_DEF_OTDOA_LocationServerErrorCauses_tags_1)
		/sizeof(asn_DEF_OTDOA_LocationServerErrorCauses_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_OTDOA_LocationServerErrorCauses_1,
	1,	/* Elements count */
	&asn_SPC_OTDOA_LocationServerErrorCauses_specs_1	/* Additional specs */
};

