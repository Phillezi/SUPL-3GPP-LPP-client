/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Version-2-message-extensions"
 * 	found in "src/ULP-Version-2-message-extensions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D supl_generated/ -S empty_skeleton/`
 */

#include "NotificationMode.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NotificationMode_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NotificationMode_value2enum_1[] = {
	{ 0,	6,	"normal" },
	{ 1,	15,	"basedOnLocation" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_NotificationMode_enum2value_1[] = {
	1,	/* basedOnLocation(1) */
	0	/* normal(0) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_NotificationMode_specs_1 = {
	asn_MAP_NotificationMode_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_NotificationMode_enum2value_1,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NotificationMode_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NotificationMode = {
	"NotificationMode",
	"NotificationMode",
	&asn_OP_NativeEnumerated,
	asn_DEF_NotificationMode_tags_1,
	sizeof(asn_DEF_NotificationMode_tags_1)
		/sizeof(asn_DEF_NotificationMode_tags_1[0]), /* 1 */
	asn_DEF_NotificationMode_tags_1,	/* Same as above */
	sizeof(asn_DEF_NotificationMode_tags_1)
		/sizeof(asn_DEF_NotificationMode_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NotificationMode_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NotificationMode_specs_1	/* Additional specs */
};

