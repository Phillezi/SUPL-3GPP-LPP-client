/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "On-Demand-DL-PRS-Configuration-r17.h"

asn_TYPE_member_t asn_MBR_On_Demand_DL_PRS_Configuration_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct On_Demand_DL_PRS_Configuration_r17, dl_prs_configuration_id_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_PRS_Configuration_ID_r17,
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
		"dl-prs-configuration-id-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct On_Demand_DL_PRS_Configuration_r17, nr_DL_PRS_PositioningFrequencyLayer_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_DL_PRS_PositioningFrequencyLayer_r16,
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
		"nr-DL-PRS-PositioningFrequencyLayer-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct On_Demand_DL_PRS_Configuration_r17, nr_DL_PRS_Info_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_DL_PRS_Info_r16,
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
		"nr-DL-PRS-Info-r17"
		},
};
static const ber_tlv_tag_t asn_DEF_On_Demand_DL_PRS_Configuration_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_On_Demand_DL_PRS_Configuration_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-prs-configuration-id-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nr-DL-PRS-PositioningFrequencyLayer-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nr-DL-PRS-Info-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_On_Demand_DL_PRS_Configuration_r17_specs_1 = {
	sizeof(struct On_Demand_DL_PRS_Configuration_r17),
	offsetof(struct On_Demand_DL_PRS_Configuration_r17, _asn_ctx),
	asn_MAP_On_Demand_DL_PRS_Configuration_r17_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_On_Demand_DL_PRS_Configuration_r17 = {
	"On-Demand-DL-PRS-Configuration-r17",
	"On-Demand-DL-PRS-Configuration-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_On_Demand_DL_PRS_Configuration_r17_tags_1,
	sizeof(asn_DEF_On_Demand_DL_PRS_Configuration_r17_tags_1)
		/sizeof(asn_DEF_On_Demand_DL_PRS_Configuration_r17_tags_1[0]), /* 1 */
	asn_DEF_On_Demand_DL_PRS_Configuration_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_On_Demand_DL_PRS_Configuration_r17_tags_1)
		/sizeof(asn_DEF_On_Demand_DL_PRS_Configuration_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_On_Demand_DL_PRS_Configuration_r17_1,
	3,	/* Elements count */
	&asn_SPC_On_Demand_DL_PRS_Configuration_r17_specs_1	/* Additional specs */
};

