/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_GNSS_SSR_OrbitCorrectionsSupport_r15_H_
#define	_GNSS_SSR_OrbitCorrectionsSupport_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GNSS_SSR_OrbitCorrectionsSupport_r15__ext1__orbit_IntegritySup_r17 {
	GNSS_SSR_OrbitCorrectionsSupport_r15__ext1__orbit_IntegritySup_r17_correlationTimeSup	= 0
} e_GNSS_SSR_OrbitCorrectionsSupport_r15__ext1__orbit_IntegritySup_r17;

/* GNSS-SSR-OrbitCorrectionsSupport-r15 */
typedef struct GNSS_SSR_OrbitCorrectionsSupport_r15 {
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct GNSS_SSR_OrbitCorrectionsSupport_r15__ext1 {
		BIT_STRING_t	*orbit_IntegritySup_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GNSS_SSR_OrbitCorrectionsSupport_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_SSR_OrbitCorrectionsSupport_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_SSR_OrbitCorrectionsSupport_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_SSR_OrbitCorrectionsSupport_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _GNSS_SSR_OrbitCorrectionsSupport_r15_H_ */
#include <asn_internal.h>
