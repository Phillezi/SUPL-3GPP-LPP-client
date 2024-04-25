/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_NR_DL_TDOA_AdditionalMeasurementElement_r16_H_
#define	_NR_DL_TDOA_AdditionalMeasurementElement_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR-DL-PRS-ResourceID-r16.h"
#include "NR-DL-PRS-ResourceSetID-r16.h"
#include "NR-TimeStamp-r16.h"
#include "NR-TimingQuality-r16.h"
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_DL_TDOA_AdditionalMeasurementElement_r16__nr_RSTD_ResultDiff_r16_PR {
	NR_DL_TDOA_AdditionalMeasurementElement_r16__nr_RSTD_ResultDiff_r16_PR_NOTHING,	/* No components present */
	NR_DL_TDOA_AdditionalMeasurementElement_r16__nr_RSTD_ResultDiff_r16_PR_k0_r16,
	NR_DL_TDOA_AdditionalMeasurementElement_r16__nr_RSTD_ResultDiff_r16_PR_k1_r16,
	NR_DL_TDOA_AdditionalMeasurementElement_r16__nr_RSTD_ResultDiff_r16_PR_k2_r16,
	NR_DL_TDOA_AdditionalMeasurementElement_r16__nr_RSTD_ResultDiff_r16_PR_k3_r16,
	NR_DL_TDOA_AdditionalMeasurementElement_r16__nr_RSTD_ResultDiff_r16_PR_k4_r16,
	NR_DL_TDOA_AdditionalMeasurementElement_r16__nr_RSTD_ResultDiff_r16_PR_k5_r16,
	/* Extensions may appear below */
	NR_DL_TDOA_AdditionalMeasurementElement_r16__nr_RSTD_ResultDiff_r16_PR_kMinus6_r18,
	NR_DL_TDOA_AdditionalMeasurementElement_r16__nr_RSTD_ResultDiff_r16_PR_kMinus5_r18,
	NR_DL_TDOA_AdditionalMeasurementElement_r16__nr_RSTD_ResultDiff_r16_PR_kMinus4_r18,
	NR_DL_TDOA_AdditionalMeasurementElement_r16__nr_RSTD_ResultDiff_r16_PR_kMinus3_r18,
	NR_DL_TDOA_AdditionalMeasurementElement_r16__nr_RSTD_ResultDiff_r16_PR_kMinus2_r18,
	NR_DL_TDOA_AdditionalMeasurementElement_r16__nr_RSTD_ResultDiff_r16_PR_kMinus1_r18
} NR_DL_TDOA_AdditionalMeasurementElement_r16__nr_RSTD_ResultDiff_r16_PR;
typedef enum NR_DL_TDOA_AdditionalMeasurementElement_r16__ext2__nr_RSTD_BasedOnAggregatedResources_r18 {
	NR_DL_TDOA_AdditionalMeasurementElement_r16__ext2__nr_RSTD_BasedOnAggregatedResources_r18_true	= 0
} e_NR_DL_TDOA_AdditionalMeasurementElement_r16__ext2__nr_RSTD_BasedOnAggregatedResources_r18;
typedef enum NR_DL_TDOA_AdditionalMeasurementElement_r16__ext2__nr_ReportDL_PRS_MeasBasedOnSingleOrMultiHopRx_r18 {
	NR_DL_TDOA_AdditionalMeasurementElement_r16__ext2__nr_ReportDL_PRS_MeasBasedOnSingleOrMultiHopRx_r18_singleHop	= 0,
	NR_DL_TDOA_AdditionalMeasurementElement_r16__ext2__nr_ReportDL_PRS_MeasBasedOnSingleOrMultiHopRx_r18_multipleHop	= 1
} e_NR_DL_TDOA_AdditionalMeasurementElement_r16__ext2__nr_ReportDL_PRS_MeasBasedOnSingleOrMultiHopRx_r18;

/* Forward declarations */
struct NR_AdditionalPathList_r16;
struct LOS_NLOS_Indicator_r17;
struct NR_AdditionalPathListExt_r17;
struct NR_PhaseQuality_r18;
struct NR_AggregatedDL_PRS_ResourceSetID_Element_r18;
struct NR_RSCPD_AdditionalMeasurementSamplesElement_r18;

/* NR-DL-TDOA-AdditionalMeasurementElement-r16 */
typedef struct NR_DL_TDOA_AdditionalMeasurementElement_r16 {
	NR_DL_PRS_ResourceID_r16_t	*nr_DL_PRS_ResourceID_r16;	/* OPTIONAL */
	NR_DL_PRS_ResourceSetID_r16_t	*nr_DL_PRS_ResourceSetID_r16;	/* OPTIONAL */
	NR_TimeStamp_r16_t	 nr_TimeStamp_r16;
	struct NR_DL_TDOA_AdditionalMeasurementElement_r16__nr_RSTD_ResultDiff_r16 {
		NR_DL_TDOA_AdditionalMeasurementElement_r16__nr_RSTD_ResultDiff_r16_PR present;
		union NR_DL_TDOA_AdditionalMeasurementElement_r16__nr_RSTD_ResultDiff_r16_u {
			long	 k0_r16;
			long	 k1_r16;
			long	 k2_r16;
			long	 k3_r16;
			long	 k4_r16;
			long	 k5_r16;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			long	 kMinus6_r18;
			long	 kMinus5_r18;
			long	 kMinus4_r18;
			long	 kMinus3_r18;
			long	 kMinus2_r18;
			long	 kMinus1_r18;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} nr_RSTD_ResultDiff_r16;
	NR_TimingQuality_r16_t	 nr_TimingQuality_r16;
	long	*nr_DL_PRS_RSRP_ResultDiff_r16;	/* OPTIONAL */
	struct NR_AdditionalPathList_r16	*nr_AdditionalPathList_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_DL_TDOA_AdditionalMeasurementElement_r16__ext1 {
		long	*nr_UE_Rx_TEG_ID_r17;	/* OPTIONAL */
		long	*nr_DL_PRS_FirstPathRSRP_ResultDiff_r17;	/* OPTIONAL */
		struct LOS_NLOS_Indicator_r17	*nr_los_nlos_IndicatorPerResource_r17;	/* OPTIONAL */
		struct NR_AdditionalPathListExt_r17	*nr_AdditionalPathListExt_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_DL_TDOA_AdditionalMeasurementElement_r16__ext2 {
		long	*nr_RSTD_BasedOnAggregatedResources_r18;	/* OPTIONAL */
		struct NR_DL_TDOA_AdditionalMeasurementElement_r16__ext2__nr_AggregatedDL_PRS_ResourceSetID_List_r18 {
			A_SEQUENCE_OF(struct NR_AggregatedDL_PRS_ResourceSetID_Element_r18) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nr_AggregatedDL_PRS_ResourceSetID_List_r18;
		long	*nr_RSCPD_r18;	/* OPTIONAL */
		struct NR_PhaseQuality_r18	*nr_PhaseQuality_r18;	/* OPTIONAL */
		struct NR_DL_TDOA_AdditionalMeasurementElement_r16__ext2__nr_RSCPD_AdditionalMeasurementsAddSamples_r18 {
			A_SEQUENCE_OF(struct NR_RSCPD_AdditionalMeasurementSamplesElement_r18) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nr_RSCPD_AdditionalMeasurementsAddSamples_r18;
		long	*nr_ReportDL_PRS_MeasBasedOnSingleOrMultiHopRx_r18;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DL_TDOA_AdditionalMeasurementElement_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_nr_RSTD_BasedOnAggregatedResources_r18_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nr_ReportDL_PRS_MeasBasedOnSingleOrMultiHopRx_r18_37;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_DL_TDOA_AdditionalMeasurementElement_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DL_TDOA_AdditionalMeasurementElement_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DL_TDOA_AdditionalMeasurementElement_r16_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_DL_TDOA_AdditionalMeasurementElement_r16_H_ */
#include <asn_internal.h>
