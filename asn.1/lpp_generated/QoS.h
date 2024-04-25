/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_QoS_H_
#define	_QoS_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct HorizontalAccuracy;
struct VerticalAccuracy;
struct ResponseTime;
struct ResponseTimeNB_r14;
struct HorizontalAccuracyExt_r15;
struct VerticalAccuracyExt_r15;

/* QoS */
typedef struct QoS {
	struct HorizontalAccuracy	*horizontalAccuracy;	/* OPTIONAL */
	BOOLEAN_t	 verticalCoordinateRequest;
	struct VerticalAccuracy	*verticalAccuracy;	/* OPTIONAL */
	struct ResponseTime	*responseTime;	/* OPTIONAL */
	BOOLEAN_t	 velocityRequest;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct QoS__ext1 {
		struct ResponseTimeNB_r14	*responseTimeNB_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct QoS__ext2 {
		struct HorizontalAccuracyExt_r15	*horizontalAccuracyExt_r15;	/* OPTIONAL */
		struct VerticalAccuracyExt_r15	*verticalAccuracyExt_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QoS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QoS;
extern asn_SEQUENCE_specifics_t asn_SPC_QoS_specs_1;
extern asn_TYPE_member_t asn_MBR_QoS_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _QoS_H_ */
#include <asn_internal.h>
