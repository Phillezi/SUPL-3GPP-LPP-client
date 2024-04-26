/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_NR_MutingPattern_r16_H_
#define	_NR_MutingPattern_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MutingPattern_r16_PR {
	NR_MutingPattern_r16_PR_NOTHING,	/* No components present */
	NR_MutingPattern_r16_PR_po2_r16,
	NR_MutingPattern_r16_PR_po4_r16,
	NR_MutingPattern_r16_PR_po6_r16,
	NR_MutingPattern_r16_PR_po8_r16,
	NR_MutingPattern_r16_PR_po16_r16,
	NR_MutingPattern_r16_PR_po32_r16
	/* Extensions may appear below */
	
} NR_MutingPattern_r16_PR;

/* NR-MutingPattern-r16 */
typedef struct NR_MutingPattern_r16 {
	NR_MutingPattern_r16_PR present;
	union NR_MutingPattern_r16_u {
		BIT_STRING_t	 po2_r16;
		BIT_STRING_t	 po4_r16;
		BIT_STRING_t	 po6_r16;
		BIT_STRING_t	 po8_r16;
		BIT_STRING_t	 po16_r16;
		BIT_STRING_t	 po32_r16;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MutingPattern_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_MutingPattern_r16;
extern asn_CHOICE_specifics_t asn_SPC_NR_MutingPattern_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MutingPattern_r16_1[6];
extern asn_per_constraints_t asn_PER_type_NR_MutingPattern_r16_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_MutingPattern_r16_H_ */
#include <asn_internal.h>