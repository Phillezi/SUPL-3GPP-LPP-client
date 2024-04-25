/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_BT_RequestAssistanceData_r18_H_
#define	_BT_RequestAssistanceData_r18_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BT_RequestAssistanceData_r18__requestedAD_r18 {
	BT_RequestAssistanceData_r18__requestedAD_r18_beacon_location	= 0,
	BT_RequestAssistanceData_r18__requestedAD_r18_beacon_antConfig	= 1,
	BT_RequestAssistanceData_r18__requestedAD_r18_beacon_transmConfig	= 2
} e_BT_RequestAssistanceData_r18__requestedAD_r18;

/* BT-RequestAssistanceData-r18 */
typedef struct BT_RequestAssistanceData_r18 {
	BIT_STRING_t	 requestedAD_r18;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BT_RequestAssistanceData_r18_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BT_RequestAssistanceData_r18;
extern asn_SEQUENCE_specifics_t asn_SPC_BT_RequestAssistanceData_r18_specs_1;
extern asn_TYPE_member_t asn_MBR_BT_RequestAssistanceData_r18_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _BT_RequestAssistanceData_r18_H_ */
#include <asn_internal.h>
