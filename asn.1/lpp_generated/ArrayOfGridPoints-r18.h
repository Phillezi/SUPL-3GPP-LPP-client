/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_ArrayOfGridPoints_r18_H_
#define	_ArrayOfGridPoints_r18_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "SpatialDelta-r18.h"
#include <BIT_STRING.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ArrayOfGridPoints_r18__bitmaskOfGrids_r18_PR {
	ArrayOfGridPoints_r18__bitmaskOfGrids_r18_PR_NOTHING,	/* No components present */
	ArrayOfGridPoints_r18__bitmaskOfGrids_r18_PR_bog16_r18,
	ArrayOfGridPoints_r18__bitmaskOfGrids_r18_PR_bog64_r18,
	ArrayOfGridPoints_r18__bitmaskOfGrids_r18_PR_bog256_r18
	/* Extensions may appear below */
	
} ArrayOfGridPoints_r18__bitmaskOfGrids_r18_PR;

/* ArrayOfGridPoints-r18 */
typedef struct ArrayOfGridPoints_r18 {
	long	 referencePointLatitude_r18;
	long	 referencePointLongitude_r18;
	long	 numberOfStepsSouth_r18;
	long	 numberOfStepsEast_r18;
	SpatialDelta_r18_t	 stepSouth_r18;
	SpatialDelta_r18_t	 stepEast_r18;
	struct ArrayOfGridPoints_r18__bitmaskOfGrids_r18 {
		ArrayOfGridPoints_r18__bitmaskOfGrids_r18_PR present;
		union ArrayOfGridPoints_r18__bitmaskOfGrids_r18_u {
			BIT_STRING_t	 bog16_r18;
			BIT_STRING_t	 bog64_r18;
			BIT_STRING_t	 bog256_r18;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *bitmaskOfGrids_r18;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ArrayOfGridPoints_r18_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ArrayOfGridPoints_r18;
extern asn_SEQUENCE_specifics_t asn_SPC_ArrayOfGridPoints_r18_specs_1;
extern asn_TYPE_member_t asn_MBR_ArrayOfGridPoints_r18_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _ArrayOfGridPoints_r18_H_ */
#include <asn_internal.h>