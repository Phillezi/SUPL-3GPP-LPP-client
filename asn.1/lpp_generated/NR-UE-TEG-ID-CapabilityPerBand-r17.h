/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_NR_UE_TEG_ID_CapabilityPerBand_r17_H_
#define	_NR_UE_TEG_ID_CapabilityPerBand_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicatorNR-r16.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTEG_ID_MaxSupport_r17 {
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTEG_ID_MaxSupport_r17_n1	= 0,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTEG_ID_MaxSupport_r17_n2	= 1,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTEG_ID_MaxSupport_r17_n3	= 2,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTEG_ID_MaxSupport_r17_n4	= 3,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTEG_ID_MaxSupport_r17_n6	= 4,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTEG_ID_MaxSupport_r17_n8	= 5
} e_NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTEG_ID_MaxSupport_r17;
typedef enum NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_TxTEG_ID_MaxSupport_r17 {
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_TxTEG_ID_MaxSupport_r17_n1	= 0,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_TxTEG_ID_MaxSupport_r17_n2	= 1,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_TxTEG_ID_MaxSupport_r17_n3	= 2,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_TxTEG_ID_MaxSupport_r17_n4	= 3,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_TxTEG_ID_MaxSupport_r17_n6	= 4,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_TxTEG_ID_MaxSupport_r17_n8	= 5
} e_NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_TxTEG_ID_MaxSupport_r17;
typedef enum NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTxTEG_ID_MaxSupport_r17 {
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTxTEG_ID_MaxSupport_r17_n1	= 0,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTxTEG_ID_MaxSupport_r17_n2	= 1,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTxTEG_ID_MaxSupport_r17_n4	= 2,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTxTEG_ID_MaxSupport_r17_n6	= 3,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTxTEG_ID_MaxSupport_r17_n8	= 4,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTxTEG_ID_MaxSupport_r17_n12	= 5,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTxTEG_ID_MaxSupport_r17_n16	= 6,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTxTEG_ID_MaxSupport_r17_n24	= 7,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTxTEG_ID_MaxSupport_r17_n32	= 8,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTxTEG_ID_MaxSupport_r17_n36	= 9,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTxTEG_ID_MaxSupport_r17_n48	= 10,
	NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTxTEG_ID_MaxSupport_r17_n64	= 11
} e_NR_UE_TEG_ID_CapabilityPerBand_r17__nr_UE_RxTxTEG_ID_MaxSupport_r17;
typedef enum NR_UE_TEG_ID_CapabilityPerBand_r17__measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17 {
	NR_UE_TEG_ID_CapabilityPerBand_r17__measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_n2	= 0,
	NR_UE_TEG_ID_CapabilityPerBand_r17__measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_n3	= 1,
	NR_UE_TEG_ID_CapabilityPerBand_r17__measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_n4	= 2,
	NR_UE_TEG_ID_CapabilityPerBand_r17__measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_n6	= 3,
	NR_UE_TEG_ID_CapabilityPerBand_r17__measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_n8	= 4
} e_NR_UE_TEG_ID_CapabilityPerBand_r17__measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17;
typedef enum NR_UE_TEG_ID_CapabilityPerBand_r17__measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17 {
	NR_UE_TEG_ID_CapabilityPerBand_r17__measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_n1	= 0,
	NR_UE_TEG_ID_CapabilityPerBand_r17__measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_n2	= 1,
	NR_UE_TEG_ID_CapabilityPerBand_r17__measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_n3	= 2,
	NR_UE_TEG_ID_CapabilityPerBand_r17__measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_n4	= 3,
	NR_UE_TEG_ID_CapabilityPerBand_r17__measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_n6	= 4,
	NR_UE_TEG_ID_CapabilityPerBand_r17__measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_n8	= 5
} e_NR_UE_TEG_ID_CapabilityPerBand_r17__measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17;

/* NR-UE-TEG-ID-CapabilityPerBand-r17 */
typedef struct NR_UE_TEG_ID_CapabilityPerBand_r17 {
	FreqBandIndicatorNR_r16_t	 freqBandIndicatorNR_r17;
	long	*nr_UE_RxTEG_ID_MaxSupport_r17;	/* OPTIONAL */
	long	*nr_UE_TxTEG_ID_MaxSupport_r17;	/* OPTIONAL */
	long	*nr_UE_RxTxTEG_ID_MaxSupport_r17;	/* OPTIONAL */
	long	*measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17;	/* OPTIONAL */
	long	*measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UE_TEG_ID_CapabilityPerBand_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_nr_UE_RxTEG_ID_MaxSupport_r17_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nr_UE_TxTEG_ID_MaxSupport_r17_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nr_UE_RxTxTEG_ID_MaxSupport_r17_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGs_r17_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_measureSameDL_PRS_ResourceWithDifferentRxTEGsSimul_r17_36;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_UE_TEG_ID_CapabilityPerBand_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_UE_TEG_ID_CapabilityPerBand_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_UE_TEG_ID_CapabilityPerBand_r17_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_UE_TEG_ID_CapabilityPerBand_r17_H_ */
#include <asn_internal.h>
