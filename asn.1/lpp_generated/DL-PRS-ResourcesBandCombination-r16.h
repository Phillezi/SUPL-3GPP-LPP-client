/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_DL_PRS_ResourcesBandCombination_r16_H_
#define	_DL_PRS_ResourcesBandCombination_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicatorNR-r16.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16_PR {
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16_PR_NOTHING,	/* No components present */
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16_PR_fr1_Only_r16,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16_PR_fr2_Only_r16,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16_PR_fr1_FR2Mix_r16
	/* Extensions may appear below */
	
} DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16_PR;
typedef enum DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_Only_r16 {
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_Only_r16_n6	= 0,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_Only_r16_n24	= 1,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_Only_r16_n64	= 2,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_Only_r16_n128	= 3,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_Only_r16_n192	= 4,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_Only_r16_n256	= 5,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_Only_r16_n512	= 6,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_Only_r16_n1024	= 7,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_Only_r16_n2048	= 8
} e_DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_Only_r16;
typedef enum DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr2_Only_r16 {
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr2_Only_r16_n24	= 0,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr2_Only_r16_n64	= 1,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr2_Only_r16_n96	= 2,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr2_Only_r16_n128	= 3,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr2_Only_r16_n192	= 4,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr2_Only_r16_n256	= 5,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr2_Only_r16_n512	= 6,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr2_Only_r16_n1024	= 7,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr2_Only_r16_n2048	= 8
} e_DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr2_Only_r16;
typedef enum DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr1_r16 {
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr1_r16_n6	= 0,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr1_r16_n24	= 1,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr1_r16_n64	= 2,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr1_r16_n96	= 3,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr1_r16_n128	= 4,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr1_r16_n192	= 5,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr1_r16_n256	= 6,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr1_r16_n512	= 7,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr1_r16_n1024	= 8,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr1_r16_n2048	= 9
} e_DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr1_r16;
typedef enum DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr2_r16 {
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr2_r16_n24	= 0,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr2_r16_n64	= 1,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr2_r16_n96	= 2,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr2_r16_n128	= 3,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr2_r16_n192	= 4,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr2_r16_n256	= 5,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr2_r16_n512	= 6,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr2_r16_n1024	= 7,
	DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr2_r16_n2048	= 8
} e_DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16__fr2_r16;

/* DL-PRS-ResourcesBandCombination-r16 */
typedef struct DL_PRS_ResourcesBandCombination_r16 {
	struct DL_PRS_ResourcesBandCombination_r16__bandList_r16 {
		A_SEQUENCE_OF(FreqBandIndicatorNR_r16_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} bandList_r16;
	struct DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16 {
		DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16_PR present;
		union DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16_u {
			long	 fr1_Only_r16;
			long	 fr2_Only_r16;
			struct DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16 {
				long	 fr1_r16;
				long	 fr2_r16;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fr1_FR2Mix_r16;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_PRS_ResourcesBandCombination_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_fr1_Only_r16_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_fr2_Only_r16_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_fr1_r16_26;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_fr2_r16_37;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DL_PRS_ResourcesBandCombination_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_DL_PRS_ResourcesBandCombination_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_DL_PRS_ResourcesBandCombination_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _DL_PRS_ResourcesBandCombination_r16_H_ */
#include <asn_internal.h>