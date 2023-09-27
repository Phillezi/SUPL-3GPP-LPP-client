/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_NR_Multi_RTT_MeasElement_r16_H_
#define	_NR_Multi_RTT_MeasElement_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR-DL-PRS-ResourceID-r16.h"
#include "NR-DL-PRS-ResourceSetID-r16.h"
#include <NativeInteger.h>
#include "NR-TimeStamp-r16.h"
#include "NR-TimingMeasQuality-r16.h"
#include "NR-Multi-RTT-AdditionalMeasurements-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TRP_ID_r16;
struct NR_AdditionalPathList_r16;

/* NR-Multi-RTT-MeasElement-r16 */
typedef struct NR_Multi_RTT_MeasElement_r16 {
	struct TRP_ID_r16	*trp_ID_r16	/* OPTIONAL */;
	NR_DL_PRS_ResourceID_r16_t	*nr_DL_PRS_ResourceID_r16	/* OPTIONAL */;
	NR_DL_PRS_ResourceSetID_r16_t	*nr_DL_PRS_ResourceSetID_r16	/* OPTIONAL */;
	long	*nr_UE_RxTxTimeDiff_r16	/* OPTIONAL */;
	struct NR_AdditionalPathList_r16	*nr_AdditionalPathList_r16	/* OPTIONAL */;
	NR_TimeStamp_r16_t	 nr_TimeStamp_r16;
	NR_TimingMeasQuality_r16_t	 nr_TimingMeasQuality_r16;
	long	*nr_PRS_RSRP_Result_r16	/* OPTIONAL */;
	NR_Multi_RTT_AdditionalMeasurements_r16_t	 nr_Multi_RTT_AdditionalMeasurements_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_Multi_RTT_MeasElement_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_Multi_RTT_MeasElement_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_Multi_RTT_MeasElement_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_Multi_RTT_MeasElement_r16_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TRP-ID-r16.h"
#include "NR-AdditionalPathList-r16.h"

#endif	/* _NR_Multi_RTT_MeasElement_r16_H_ */
#include <asn_internal.h>