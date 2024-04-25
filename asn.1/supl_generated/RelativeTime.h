/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "src/Ver2-ULP-Components.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D supl_generated/ -S empty_skeleton/`
 */

#ifndef	_RelativeTime_H_
#define	_RelativeTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RelativeTime */
typedef long	 RelativeTime_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RelativeTime_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RelativeTime;
asn_struct_free_f RelativeTime_free;
asn_constr_check_f RelativeTime_constraint;
xer_type_decoder_f RelativeTime_decode_xer;
xer_type_encoder_f RelativeTime_encode_xer;
jer_type_encoder_f RelativeTime_encode_jer;
per_type_decoder_f RelativeTime_decode_uper;
per_type_encoder_f RelativeTime_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RelativeTime_H_ */
#include <asn_internal.h>
