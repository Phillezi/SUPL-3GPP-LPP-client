/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#include "NR-SRS-TxTEG-Element-r17.h"

#include "NR-TimeStamp-r16.h"
static int
memb_offsetToPointA_r17_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 2199L)) {
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
memb_NativeInteger_constraint_7(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 63L)) {
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
memb_nr_UE_Tx_TEG_ID_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 7L)) {
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
memb_srs_PosResourceList_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 64UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_offsetToPointA_r17_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  2199 }	/* (0..2199) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_Member_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_srs_PosResourceList_r17_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_nr_UE_Tx_TEG_ID_r17_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_srs_PosResourceList_r17_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_carrierFreq_r17_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_TxTEG_Element_r17__carrierFreq_r17, absoluteFrequencyPointA_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR_r15,
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
		"absoluteFrequencyPointA-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_TxTEG_Element_r17__carrierFreq_r17, offsetToPointA_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_offsetToPointA_r17_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_offsetToPointA_r17_constraint_4
		},
		0, 0, /* No default value */
		"offsetToPointA-r17"
		},
};
static const ber_tlv_tag_t asn_DEF_carrierFreq_r17_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_carrierFreq_r17_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* absoluteFrequencyPointA-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* offsetToPointA-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_carrierFreq_r17_specs_4 = {
	sizeof(struct NR_SRS_TxTEG_Element_r17__carrierFreq_r17),
	offsetof(struct NR_SRS_TxTEG_Element_r17__carrierFreq_r17, _asn_ctx),
	asn_MAP_carrierFreq_r17_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_carrierFreq_r17_4 = {
	"carrierFreq-r17",
	"carrierFreq-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_carrierFreq_r17_tags_4,
	sizeof(asn_DEF_carrierFreq_r17_tags_4)
		/sizeof(asn_DEF_carrierFreq_r17_tags_4[0]) - 1, /* 1 */
	asn_DEF_carrierFreq_r17_tags_4,	/* Same as above */
	sizeof(asn_DEF_carrierFreq_r17_tags_4)
		/sizeof(asn_DEF_carrierFreq_r17_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_carrierFreq_r17_4,
	2,	/* Elements count */
	&asn_SPC_carrierFreq_r17_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_srs_PosResourceList_r17_7[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_Member_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NativeInteger_constraint_7
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_srs_PosResourceList_r17_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_srs_PosResourceList_r17_specs_7 = {
	sizeof(struct NR_SRS_TxTEG_Element_r17__srs_PosResourceList_r17),
	offsetof(struct NR_SRS_TxTEG_Element_r17__srs_PosResourceList_r17, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_PosResourceList_r17_7 = {
	"srs-PosResourceList-r17",
	"srs-PosResourceList-r17",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_srs_PosResourceList_r17_tags_7,
	sizeof(asn_DEF_srs_PosResourceList_r17_tags_7)
		/sizeof(asn_DEF_srs_PosResourceList_r17_tags_7[0]) - 1, /* 1 */
	asn_DEF_srs_PosResourceList_r17_tags_7,	/* Same as above */
	sizeof(asn_DEF_srs_PosResourceList_r17_tags_7)
		/sizeof(asn_DEF_srs_PosResourceList_r17_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_srs_PosResourceList_r17_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_srs_PosResourceList_r17_7,
	1,	/* Single element */
	&asn_SPC_srs_PosResourceList_r17_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SRS_TxTEG_Element_r17_1[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_SRS_TxTEG_Element_r17, nr_TimeStamp_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TimeStamp_r16,
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
		"nr-TimeStamp-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_TxTEG_Element_r17, nr_UE_Tx_TEG_ID_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_nr_UE_Tx_TEG_ID_r17_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_nr_UE_Tx_TEG_ID_r17_constraint_1
		},
		0, 0, /* No default value */
		"nr-UE-Tx-TEG-ID-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SRS_TxTEG_Element_r17, carrierFreq_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_carrierFreq_r17_4,
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
		"carrierFreq-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_TxTEG_Element_r17, srs_PosResourceList_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_srs_PosResourceList_r17_7,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_srs_PosResourceList_r17_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_srs_PosResourceList_r17_constraint_1
		},
		0, 0, /* No default value */
		"srs-PosResourceList-r17"
		},
};
static const int asn_MAP_NR_SRS_TxTEG_Element_r17_oms_1[] = { 0, 2 };
static const ber_tlv_tag_t asn_DEF_NR_SRS_TxTEG_Element_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SRS_TxTEG_Element_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-TimeStamp-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nr-UE-Tx-TEG-ID-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* carrierFreq-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* srs-PosResourceList-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SRS_TxTEG_Element_r17_specs_1 = {
	sizeof(struct NR_SRS_TxTEG_Element_r17),
	offsetof(struct NR_SRS_TxTEG_Element_r17, _asn_ctx),
	asn_MAP_NR_SRS_TxTEG_Element_r17_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_SRS_TxTEG_Element_r17_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SRS_TxTEG_Element_r17 = {
	"NR-SRS-TxTEG-Element-r17",
	"NR-SRS-TxTEG-Element-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SRS_TxTEG_Element_r17_tags_1,
	sizeof(asn_DEF_NR_SRS_TxTEG_Element_r17_tags_1)
		/sizeof(asn_DEF_NR_SRS_TxTEG_Element_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_SRS_TxTEG_Element_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SRS_TxTEG_Element_r17_tags_1)
		/sizeof(asn_DEF_NR_SRS_TxTEG_Element_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_SRS_TxTEG_Element_r17_1,
	4,	/* Elements count */
	&asn_SPC_NR_SRS_TxTEG_Element_r17_specs_1	/* Additional specs */
};
