/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "GNSS-SSR-URA-Set2Support-r17.h"

static const ber_tlv_tag_t asn_DEF_GNSS_SSR_URA_Set2Support_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SEQUENCE_specifics_t asn_SPC_GNSS_SSR_URA_Set2Support_r17_specs_1 = {
	sizeof(struct GNSS_SSR_URA_Set2Support_r17),
	offsetof(struct GNSS_SSR_URA_Set2Support_r17, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	0,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GNSS_SSR_URA_Set2Support_r17 = {
	"GNSS-SSR-URA-Set2Support-r17",
	"GNSS-SSR-URA-Set2Support-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_GNSS_SSR_URA_Set2Support_r17_tags_1,
	sizeof(asn_DEF_GNSS_SSR_URA_Set2Support_r17_tags_1)
		/sizeof(asn_DEF_GNSS_SSR_URA_Set2Support_r17_tags_1[0]), /* 1 */
	asn_DEF_GNSS_SSR_URA_Set2Support_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_GNSS_SSR_URA_Set2Support_r17_tags_1)
		/sizeof(asn_DEF_GNSS_SSR_URA_Set2Support_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_GNSS_SSR_URA_Set2Support_r17_specs_1	/* Additional specs */
};

