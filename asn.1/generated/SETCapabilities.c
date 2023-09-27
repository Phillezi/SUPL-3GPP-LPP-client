/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-START"
 * 	found in "/home/martin/repos/LPP-Client/asn/SUPL.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "SETCapabilities.h"

asn_TYPE_member_t asn_MBR_SETCapabilities_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SETCapabilities, posTechnology),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PosTechnology,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posTechnology"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SETCapabilities, prefMethod),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrefMethod,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prefMethod"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SETCapabilities, posProtocol),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PosProtocol,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posProtocol"
		},
	{ ATF_POINTER, 1, offsetof(struct SETCapabilities, ver2_SETCapabilities_extension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ver2_SETCapabilities_extension,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ver2-SETCapabilities-extension"
		},
};
static const int asn_MAP_SETCapabilities_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_SETCapabilities_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SETCapabilities_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* posTechnology */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* prefMethod */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* posProtocol */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ver2-SETCapabilities-extension */
};
asn_SEQUENCE_specifics_t asn_SPC_SETCapabilities_specs_1 = {
	sizeof(struct SETCapabilities),
	offsetof(struct SETCapabilities, _asn_ctx),
	asn_MAP_SETCapabilities_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SETCapabilities_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SETCapabilities = {
	"SETCapabilities",
	"SETCapabilities",
	&asn_OP_SEQUENCE,
	asn_DEF_SETCapabilities_tags_1,
	sizeof(asn_DEF_SETCapabilities_tags_1)
		/sizeof(asn_DEF_SETCapabilities_tags_1[0]), /* 1 */
	asn_DEF_SETCapabilities_tags_1,	/* Same as above */
	sizeof(asn_DEF_SETCapabilities_tags_1)
		/sizeof(asn_DEF_SETCapabilities_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SETCapabilities_1,
	4,	/* Elements count */
	&asn_SPC_SETCapabilities_specs_1	/* Additional specs */
};
