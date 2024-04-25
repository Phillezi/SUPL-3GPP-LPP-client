/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_NR_On_Demand_DL_PRS_Request_r17_H_
#define	_NR_On_Demand_DL_PRS_Request_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DL_PRS_StartTime_and_Duration_r17;
struct NR_On_Demand_DL_PRS_Information_r17;
struct DL_PRS_Configuration_ID_r17;
struct NR_OnDemandDL_PRS_AggregationReqElement_r18;

/* NR-On-Demand-DL-PRS-Request-r17 */
typedef struct NR_On_Demand_DL_PRS_Request_r17 {
	struct DL_PRS_StartTime_and_Duration_r17	*dl_prs_StartTime_and_Duration_r17;	/* OPTIONAL */
	struct NR_On_Demand_DL_PRS_Information_r17	*nr_on_demand_DL_PRS_Information_r17;	/* OPTIONAL */
	struct NR_On_Demand_DL_PRS_Request_r17__dl_prs_configuration_id_PrefList_r17 {
		A_SEQUENCE_OF(struct DL_PRS_Configuration_ID_r17) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dl_prs_configuration_id_PrefList_r17;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_On_Demand_DL_PRS_Request_r17__ext1 {
		struct NR_On_Demand_DL_PRS_Request_r17__ext1__dl_PRS_AggregationID_PrefList_r18 {
			A_SEQUENCE_OF(long) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *dl_PRS_AggregationID_PrefList_r18;
		struct NR_On_Demand_DL_PRS_Request_r17__ext1__nr_OnDemandDL_PRS_AggregationReqList_r18 {
			A_SEQUENCE_OF(struct NR_OnDemandDL_PRS_AggregationReqElement_r18) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nr_OnDemandDL_PRS_AggregationReqList_r18;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_On_Demand_DL_PRS_Request_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_On_Demand_DL_PRS_Request_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_On_Demand_DL_PRS_Request_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_On_Demand_DL_PRS_Request_r17_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_On_Demand_DL_PRS_Request_r17_H_ */
#include <asn_internal.h>
