/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "MBS-AssistanceDataElement-r14.h"

#include "MBS-AlmanacAssistance-r14.h"
#include "MBS-AcquisitionAssistance-r14.h"
asn_TYPE_member_t asn_MBR_MBS_AssistanceDataElement_r14_1[] = {
	{ ATF_POINTER, 2, offsetof(struct MBS_AssistanceDataElement_r14, mbs_AlmanacAssistance_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBS_AlmanacAssistance_r14,
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
		"mbs-AlmanacAssistance-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct MBS_AssistanceDataElement_r14, mbs_AcquisitionAssistance_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBS_AcquisitionAssistance_r14,
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
		"mbs-AcquisitionAssistance-r14"
		},
};
static const int asn_MAP_MBS_AssistanceDataElement_r14_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_MBS_AssistanceDataElement_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBS_AssistanceDataElement_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbs-AlmanacAssistance-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mbs-AcquisitionAssistance-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_MBS_AssistanceDataElement_r14_specs_1 = {
	sizeof(struct MBS_AssistanceDataElement_r14),
	offsetof(struct MBS_AssistanceDataElement_r14, _asn_ctx),
	asn_MAP_MBS_AssistanceDataElement_r14_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MBS_AssistanceDataElement_r14_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBS_AssistanceDataElement_r14 = {
	"MBS-AssistanceDataElement-r14",
	"MBS-AssistanceDataElement-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_MBS_AssistanceDataElement_r14_tags_1,
	sizeof(asn_DEF_MBS_AssistanceDataElement_r14_tags_1)
		/sizeof(asn_DEF_MBS_AssistanceDataElement_r14_tags_1[0]), /* 1 */
	asn_DEF_MBS_AssistanceDataElement_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBS_AssistanceDataElement_r14_tags_1)
		/sizeof(asn_DEF_MBS_AssistanceDataElement_r14_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MBS_AssistanceDataElement_r14_1,
	2,	/* Elements count */
	&asn_SPC_MBS_AssistanceDataElement_r14_specs_1	/* Additional specs */
};
