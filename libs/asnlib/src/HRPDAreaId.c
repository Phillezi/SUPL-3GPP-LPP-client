/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-TRIGGERED-START"
 * 	found in "/home/martin/repos/LPP-Client/asn/SUPL.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "HRPDAreaId.h"

static int
memb_refSECTORID_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_refSECTORID_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  128,  128 }	/* (SIZE(128..128)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_HRPDAreaId_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HRPDAreaId, refSECTORID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_refSECTORID_constr_2,  memb_refSECTORID_constraint_1 },
		0, 0, /* No default value */
		"refSECTORID"
		},
};
static const ber_tlv_tag_t asn_DEF_HRPDAreaId_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_HRPDAreaId_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* refSECTORID */
};
asn_SEQUENCE_specifics_t asn_SPC_HRPDAreaId_specs_1 = {
	sizeof(struct HRPDAreaId),
	offsetof(struct HRPDAreaId, _asn_ctx),
	asn_MAP_HRPDAreaId_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_HRPDAreaId = {
	"HRPDAreaId",
	"HRPDAreaId",
	&asn_OP_SEQUENCE,
	asn_DEF_HRPDAreaId_tags_1,
	sizeof(asn_DEF_HRPDAreaId_tags_1)
		/sizeof(asn_DEF_HRPDAreaId_tags_1[0]), /* 1 */
	asn_DEF_HRPDAreaId_tags_1,	/* Same as above */
	sizeof(asn_DEF_HRPDAreaId_tags_1)
		/sizeof(asn_DEF_HRPDAreaId_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_HRPDAreaId_1,
	1,	/* Elements count */
	&asn_SPC_HRPDAreaId_specs_1	/* Additional specs */
};
