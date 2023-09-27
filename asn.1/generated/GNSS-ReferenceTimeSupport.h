/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_GNSS_ReferenceTimeSupport_H_
#define	_GNSS_ReferenceTimeSupport_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GNSS-ID-Bitmap.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AccessTypes;

/* GNSS-ReferenceTimeSupport */
typedef struct GNSS_ReferenceTimeSupport {
	GNSS_ID_Bitmap_t	 gnss_SystemTime;
	struct AccessTypes	*fta_Support	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GNSS_ReferenceTimeSupport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_ReferenceTimeSupport;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_ReferenceTimeSupport_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_ReferenceTimeSupport_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AccessTypes.h"

#endif	/* _GNSS_ReferenceTimeSupport_H_ */
#include <asn_internal.h>