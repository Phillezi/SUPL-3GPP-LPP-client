/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "NavIC-CDC-r16.h"

static int
memb_navic_ClockBiasCorrection_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -4096L && value <= 4095L)) {
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
memb_navic_ClockDriftCorrection_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -128L && value <= 127L)) {
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
static asn_per_constraints_t asn_PER_memb_navic_ClockBiasCorrection_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 13,  13, -4096,  4095 }	/* (-4096..4095) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_navic_ClockDriftCorrection_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -128,  127 }	/* (-128..127) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_NavIC_CDC_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NavIC_CDC_r16, navic_ClockBiasCorrection_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_navic_ClockBiasCorrection_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_navic_ClockBiasCorrection_r16_constraint_1
		},
		0, 0, /* No default value */
		"navic-ClockBiasCorrection-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NavIC_CDC_r16, navic_ClockDriftCorrection_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_navic_ClockDriftCorrection_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_navic_ClockDriftCorrection_r16_constraint_1
		},
		0, 0, /* No default value */
		"navic-ClockDriftCorrection-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NavIC_CDC_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NavIC_CDC_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* navic-ClockBiasCorrection-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* navic-ClockDriftCorrection-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NavIC_CDC_r16_specs_1 = {
	sizeof(struct NavIC_CDC_r16),
	offsetof(struct NavIC_CDC_r16, _asn_ctx),
	asn_MAP_NavIC_CDC_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NavIC_CDC_r16 = {
	"NavIC-CDC-r16",
	"NavIC-CDC-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NavIC_CDC_r16_tags_1,
	sizeof(asn_DEF_NavIC_CDC_r16_tags_1)
		/sizeof(asn_DEF_NavIC_CDC_r16_tags_1[0]), /* 1 */
	asn_DEF_NavIC_CDC_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NavIC_CDC_r16_tags_1)
		/sizeof(asn_DEF_NavIC_CDC_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NavIC_CDC_r16_1,
	2,	/* Elements count */
	&asn_SPC_NavIC_CDC_r16_specs_1	/* Additional specs */
};

