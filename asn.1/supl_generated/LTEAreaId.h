/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-TRIGGERED-START"
 * 	found in "src/SUPL-TRIGGERED-START.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D supl_generated/ -S empty_skeleton/`
 */

#ifndef	_LTEAreaId_H_
#define	_LTEAreaId_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTEAreaId */
typedef struct LTEAreaId {
	long	*refMCC;	/* OPTIONAL */
	long	*refMNC;	/* OPTIONAL */
	BIT_STRING_t	*refCI;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTEAreaId_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTEAreaId;
extern asn_SEQUENCE_specifics_t asn_SPC_LTEAreaId_specs_1;
extern asn_TYPE_member_t asn_MBR_LTEAreaId_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTEAreaId_H_ */
#include <asn_internal.h>
