/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_ECID_RequestLocationInformation_H_
#define	_ECID_RequestLocationInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ECID_RequestLocationInformation__requestedMeasurements {
	ECID_RequestLocationInformation__requestedMeasurements_rsrpReq	= 0,
	ECID_RequestLocationInformation__requestedMeasurements_rsrqReq	= 1,
	ECID_RequestLocationInformation__requestedMeasurements_ueRxTxReq	= 2,
	ECID_RequestLocationInformation__requestedMeasurements_nrsrpReq_r14	= 3,
	ECID_RequestLocationInformation__requestedMeasurements_nrsrqReq_r14	= 4
} e_ECID_RequestLocationInformation__requestedMeasurements;

/* ECID-RequestLocationInformation */
typedef struct ECID_RequestLocationInformation {
	BIT_STRING_t	 requestedMeasurements;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ECID_RequestLocationInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ECID_RequestLocationInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_ECID_RequestLocationInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_ECID_RequestLocationInformation_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _ECID_RequestLocationInformation_H_ */
#include <asn_internal.h>