/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "GNSS-AlmanacReq.h"

static int
memb_modelID_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 8L)) {
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
static asn_per_constraints_t asn_PER_memb_modelID_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_GNSS_AlmanacReq_1[] = {
	{ ATF_POINTER, 1, offsetof(struct GNSS_AlmanacReq, modelID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_modelID_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_modelID_constraint_1
		},
		0, 0, /* No default value */
		"modelID"
		},
};
static const int asn_MAP_GNSS_AlmanacReq_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_GNSS_AlmanacReq_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GNSS_AlmanacReq_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* modelID */
};
asn_SEQUENCE_specifics_t asn_SPC_GNSS_AlmanacReq_specs_1 = {
	sizeof(struct GNSS_AlmanacReq),
	offsetof(struct GNSS_AlmanacReq, _asn_ctx),
	asn_MAP_GNSS_AlmanacReq_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_GNSS_AlmanacReq_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GNSS_AlmanacReq = {
	"GNSS-AlmanacReq",
	"GNSS-AlmanacReq",
	&asn_OP_SEQUENCE,
	asn_DEF_GNSS_AlmanacReq_tags_1,
	sizeof(asn_DEF_GNSS_AlmanacReq_tags_1)
		/sizeof(asn_DEF_GNSS_AlmanacReq_tags_1[0]), /* 1 */
	asn_DEF_GNSS_AlmanacReq_tags_1,	/* Same as above */
	sizeof(asn_DEF_GNSS_AlmanacReq_tags_1)
		/sizeof(asn_DEF_GNSS_AlmanacReq_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_GNSS_AlmanacReq_1,
	1,	/* Elements count */
	&asn_SPC_GNSS_AlmanacReq_specs_1	/* Additional specs */
};

