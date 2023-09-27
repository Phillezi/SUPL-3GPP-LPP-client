/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_Abort_r9_IEs_H_
#define	_Abort_r9_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CommonIEsAbort;
struct EPDU_Sequence;

/* Abort-r9-IEs */
typedef struct Abort_r9_IEs {
	struct CommonIEsAbort	*commonIEsAbort	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct EPDU_Sequence	*epdu_Abort	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Abort_r9_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Abort_r9_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_Abort_r9_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_Abort_r9_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CommonIEsAbort.h"
#include "EPDU-Sequence.h"

#endif	/* _Abort_r9_IEs_H_ */
#include <asn_internal.h>