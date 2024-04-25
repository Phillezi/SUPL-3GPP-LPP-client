/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_BT_ProvideAssistanceData_r18_H_
#define	_BT_ProvideAssistanceData_r18_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BT-BeaconInfo-r18.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BT_Error_r13;

/* BT-ProvideAssistanceData-r18 */
typedef struct BT_ProvideAssistanceData_r18 {
	BT_BeaconInfo_r18_t	 bt_BeaconInfo_r18;
	struct BT_Error_r13	*bt_Error_r18;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BT_ProvideAssistanceData_r18_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BT_ProvideAssistanceData_r18;
extern asn_SEQUENCE_specifics_t asn_SPC_BT_ProvideAssistanceData_r18_specs_1;
extern asn_TYPE_member_t asn_MBR_BT_ProvideAssistanceData_r18_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _BT_ProvideAssistanceData_r18_H_ */
#include <asn_internal.h>
