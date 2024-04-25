/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_WLAN_MeasurementElement_r13_H_
#define	_WLAN_MeasurementElement_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "WLAN-AP-Identifier-r13.h"
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct WLAN_RTT_r13;

/* WLAN-MeasurementElement-r13 */
typedef struct WLAN_MeasurementElement_r13 {
	WLAN_AP_Identifier_r13_t	 wlan_AP_Identifier_r13;
	long	*rssi_r13;	/* OPTIONAL */
	struct WLAN_RTT_r13	*rtt_r13;	/* OPTIONAL */
	long	*apChannelFrequency_r13;	/* OPTIONAL */
	BOOLEAN_t	*servingFlag_r13;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WLAN_MeasurementElement_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WLAN_MeasurementElement_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_WLAN_MeasurementElement_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_WLAN_MeasurementElement_r13_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _WLAN_MeasurementElement_r13_H_ */
#include <asn_internal.h>
