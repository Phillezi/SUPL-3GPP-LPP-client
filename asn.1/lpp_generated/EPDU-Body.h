/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_EPDU_Body_H_
#define	_EPDU_Body_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EPDU-Body */
typedef OCTET_STRING_t	 EPDU_Body_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EPDU_Body;
asn_struct_free_f EPDU_Body_free;
asn_constr_check_f EPDU_Body_constraint;
xer_type_decoder_f EPDU_Body_decode_xer;
xer_type_encoder_f EPDU_Body_encode_xer;
jer_type_encoder_f EPDU_Body_encode_jer;
per_type_decoder_f EPDU_Body_decode_uper;
per_type_encoder_f EPDU_Body_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _EPDU_Body_H_ */
#include <asn_internal.h>
