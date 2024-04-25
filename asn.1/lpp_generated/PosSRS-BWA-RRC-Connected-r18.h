/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_PosSRS_BWA_RRC_Connected_r18_H_
#define	_PosSRS_BWA_RRC_Connected_r18_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PosSRS_BWA_RRC_Connected_r18__numOfCarriersIntraBandContiguous_r18 {
	PosSRS_BWA_RRC_Connected_r18__numOfCarriersIntraBandContiguous_r18_two	= 0,
	PosSRS_BWA_RRC_Connected_r18__numOfCarriersIntraBandContiguous_r18_three	= 1,
	PosSRS_BWA_RRC_Connected_r18__numOfCarriersIntraBandContiguous_r18_twoandthree	= 2
} e_PosSRS_BWA_RRC_Connected_r18__numOfCarriersIntraBandContiguous_r18;
typedef enum PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_TwoCarriersFR1_r18 {
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_TwoCarriersFR1_r18_mhz80	= 0,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_TwoCarriersFR1_r18_mhz100	= 1,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_TwoCarriersFR1_r18_mhz160	= 2,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_TwoCarriersFR1_r18_mhz200	= 3
} e_PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_TwoCarriersFR1_r18;
typedef enum PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_TwoCarriersFR2_r18 {
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_TwoCarriersFR2_r18_mhz50	= 0,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_TwoCarriersFR2_r18_mhz100	= 1,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_TwoCarriersFR2_r18_mhz200	= 2,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_TwoCarriersFR2_r18_mhz400	= 3,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_TwoCarriersFR2_r18_mhz600	= 4,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_TwoCarriersFR2_r18_mhz800	= 5
} e_PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_TwoCarriersFR2_r18;
typedef enum PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_ThreeCarriersFR1_r18 {
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_ThreeCarriersFR1_r18_mhz80	= 0,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_ThreeCarriersFR1_r18_mhz100	= 1,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_ThreeCarriersFR1_r18_mhz160	= 2,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_ThreeCarriersFR1_r18_mhz200	= 3,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_ThreeCarriersFR1_r18_mhz300	= 4
} e_PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_ThreeCarriersFR1_r18;
typedef enum PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_ThreeCarriersFR2_r18 {
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_ThreeCarriersFR2_r18_mhz50	= 0,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_ThreeCarriersFR2_r18_mhz100	= 1,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_ThreeCarriersFR2_r18_mhz200	= 2,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_ThreeCarriersFR2_r18_mhz400	= 3,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_ThreeCarriersFR2_r18_mhz600	= 4,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_ThreeCarriersFR2_r18_mhz800	= 5,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_ThreeCarriersFR2_r18_mhz1000	= 6,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_ThreeCarriersFR2_r18_mhz1200	= 7
} e_PosSRS_BWA_RRC_Connected_r18__maximumAggregatedBW_ThreeCarriersFR2_r18;
typedef enum PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSet_r18 {
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSet_r18_n1	= 0,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSet_r18_n2	= 1,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSet_r18_n4	= 2,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSet_r18_n8	= 3,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSet_r18_n12	= 4,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSet_r18_n16	= 5
} e_PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSet_r18;
typedef enum PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodic_r18 {
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodic_r18_n1	= 0,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodic_r18_n2	= 1,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodic_r18_n4	= 2,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodic_r18_n8	= 3,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodic_r18_n16	= 4,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodic_r18_n32	= 5,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodic_r18_n64	= 6
} e_PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodic_r18;
typedef enum PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodic_r18 {
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodic_r18_n0	= 0,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodic_r18_n1	= 1,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodic_r18_n2	= 2,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodic_r18_n4	= 3,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodic_r18_n8	= 4,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodic_r18_n16	= 5,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodic_r18_n32	= 6,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodic_r18_n64	= 7
} e_PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodic_r18;
typedef enum PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemi_r18 {
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemi_r18_n0	= 0,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemi_r18_n1	= 1,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemi_r18_n2	= 2,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemi_r18_n4	= 3,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemi_r18_n8	= 4,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemi_r18_n16	= 5,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemi_r18_n32	= 6,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemi_r18_n64	= 7
} e_PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemi_r18;
typedef enum PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodicPerSlot_r18 {
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodicPerSlot_r18_n1	= 0,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodicPerSlot_r18_n2	= 1,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodicPerSlot_r18_n3	= 2,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodicPerSlot_r18_n4	= 3,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodicPerSlot_r18_n5	= 4,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodicPerSlot_r18_n6	= 5,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodicPerSlot_r18_n8	= 6,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodicPerSlot_r18_n10	= 7,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodicPerSlot_r18_n12	= 8,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodicPerSlot_r18_n14	= 9
} e_PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourcePeriodicPerSlot_r18;
typedef enum PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodicPerSlot_r18 {
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodicPerSlot_r18_n0	= 0,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodicPerSlot_r18_n1	= 1,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodicPerSlot_r18_n2	= 2,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodicPerSlot_r18_n3	= 3,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodicPerSlot_r18_n4	= 4,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodicPerSlot_r18_n5	= 5,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodicPerSlot_r18_n6	= 6,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodicPerSlot_r18_n8	= 7,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodicPerSlot_r18_n10	= 8,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodicPerSlot_r18_n12	= 9,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodicPerSlot_r18_n14	= 10
} e_PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceAperiodicPerSlot_r18;
typedef enum PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemiPerSlot_r18 {
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemiPerSlot_r18_n0	= 0,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemiPerSlot_r18_n1	= 1,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemiPerSlot_r18_n2	= 2,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemiPerSlot_r18_n3	= 3,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemiPerSlot_r18_n4	= 4,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemiPerSlot_r18_n5	= 5,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemiPerSlot_r18_n6	= 6,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemiPerSlot_r18_n8	= 7,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemiPerSlot_r18_n10	= 8,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemiPerSlot_r18_n12	= 9,
	PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemiPerSlot_r18_n14	= 10
} e_PosSRS_BWA_RRC_Connected_r18__maximumAggregatedResourceSemiPerSlot_r18;
typedef enum PosSRS_BWA_RRC_Connected_r18__supportOfSameSRS_PowerReduction_r18 {
	PosSRS_BWA_RRC_Connected_r18__supportOfSameSRS_PowerReduction_r18_supported	= 0
} e_PosSRS_BWA_RRC_Connected_r18__supportOfSameSRS_PowerReduction_r18;

/* PosSRS-BWA-RRC-Connected-r18 */
typedef struct PosSRS_BWA_RRC_Connected_r18 {
	long	*numOfCarriersIntraBandContiguous_r18;	/* OPTIONAL */
	long	*maximumAggregatedBW_TwoCarriersFR1_r18;	/* OPTIONAL */
	long	*maximumAggregatedBW_TwoCarriersFR2_r18;	/* OPTIONAL */
	long	*maximumAggregatedBW_ThreeCarriersFR1_r18;	/* OPTIONAL */
	long	*maximumAggregatedBW_ThreeCarriersFR2_r18;	/* OPTIONAL */
	long	*maximumAggregatedResourceSet_r18;	/* OPTIONAL */
	long	*maximumAggregatedResourcePeriodic_r18;	/* OPTIONAL */
	long	*maximumAggregatedResourceAperiodic_r18;	/* OPTIONAL */
	long	*maximumAggregatedResourceSemi_r18;	/* OPTIONAL */
	long	*maximumAggregatedResourcePeriodicPerSlot_r18;	/* OPTIONAL */
	long	*maximumAggregatedResourceAperiodicPerSlot_r18;	/* OPTIONAL */
	long	*maximumAggregatedResourceSemiPerSlot_r18;	/* OPTIONAL */
	long	*supportOfSameSRS_PowerReduction_r18;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PosSRS_BWA_RRC_Connected_r18_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_numOfCarriersIntraBandContiguous_r18_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maximumAggregatedBW_TwoCarriersFR1_r18_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maximumAggregatedBW_TwoCarriersFR2_r18_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maximumAggregatedBW_ThreeCarriersFR1_r18_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maximumAggregatedBW_ThreeCarriersFR2_r18_24;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maximumAggregatedResourceSet_r18_33;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maximumAggregatedResourcePeriodic_r18_40;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maximumAggregatedResourceAperiodic_r18_48;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maximumAggregatedResourceSemi_r18_57;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maximumAggregatedResourcePeriodicPerSlot_r18_66;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maximumAggregatedResourceAperiodicPerSlot_r18_77;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maximumAggregatedResourceSemiPerSlot_r18_89;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfSameSRS_PowerReduction_r18_101;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PosSRS_BWA_RRC_Connected_r18;
extern asn_SEQUENCE_specifics_t asn_SPC_PosSRS_BWA_RRC_Connected_r18_specs_1;
extern asn_TYPE_member_t asn_MBR_PosSRS_BWA_RRC_Connected_r18_1[13];

#ifdef __cplusplus
}
#endif

#endif	/* _PosSRS_BWA_RRC_Connected_r18_H_ */
#include <asn_internal.h>
