/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_NR_UL_SRS_Capability_r16_H_
#define	_NR_UL_SRS_Capability_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_UL_SRS_Capability_r16__maxNumberSRS_PosPathLossEstimateAllServingCells_r16 {
	NR_UL_SRS_Capability_r16__maxNumberSRS_PosPathLossEstimateAllServingCells_r16_n1	= 0,
	NR_UL_SRS_Capability_r16__maxNumberSRS_PosPathLossEstimateAllServingCells_r16_n4	= 1,
	NR_UL_SRS_Capability_r16__maxNumberSRS_PosPathLossEstimateAllServingCells_r16_n8	= 2,
	NR_UL_SRS_Capability_r16__maxNumberSRS_PosPathLossEstimateAllServingCells_r16_n16	= 3
} e_NR_UL_SRS_Capability_r16__maxNumberSRS_PosPathLossEstimateAllServingCells_r16;
typedef enum NR_UL_SRS_Capability_r16__maxNumberSRS_PosSpatialRelationsAllServingCells_r16 {
	NR_UL_SRS_Capability_r16__maxNumberSRS_PosSpatialRelationsAllServingCells_r16_n0	= 0,
	NR_UL_SRS_Capability_r16__maxNumberSRS_PosSpatialRelationsAllServingCells_r16_n1	= 1,
	NR_UL_SRS_Capability_r16__maxNumberSRS_PosSpatialRelationsAllServingCells_r16_n2	= 2,
	NR_UL_SRS_Capability_r16__maxNumberSRS_PosSpatialRelationsAllServingCells_r16_n4	= 3,
	NR_UL_SRS_Capability_r16__maxNumberSRS_PosSpatialRelationsAllServingCells_r16_n8	= 4,
	NR_UL_SRS_Capability_r16__maxNumberSRS_PosSpatialRelationsAllServingCells_r16_n16	= 5
} e_NR_UL_SRS_Capability_r16__maxNumberSRS_PosSpatialRelationsAllServingCells_r16;

/* Forward declarations */
struct SRS_CapabilityPerBand_r16;
struct SRS_PosResourcesPerBand_r16;

/* NR-UL-SRS-Capability-r16 */
typedef struct NR_UL_SRS_Capability_r16 {
	struct NR_UL_SRS_Capability_r16__srs_CapabilityBandList_r16 {
		A_SEQUENCE_OF(struct SRS_CapabilityPerBand_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} srs_CapabilityBandList_r16;
	struct NR_UL_SRS_Capability_r16__srs_PosResourceConfigCA_BandList_r16 {
		A_SEQUENCE_OF(struct SRS_PosResourcesPerBand_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_PosResourceConfigCA_BandList_r16;
	long	*maxNumberSRS_PosPathLossEstimateAllServingCells_r16;	/* OPTIONAL */
	long	*maxNumberSRS_PosSpatialRelationsAllServingCells_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UL_SRS_Capability_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberSRS_PosPathLossEstimateAllServingCells_r16_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberSRS_PosSpatialRelationsAllServingCells_r16_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_UL_SRS_Capability_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_UL_SRS_Capability_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_UL_SRS_Capability_r16_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_UL_SRS_Capability_r16_H_ */
#include <asn_internal.h>
