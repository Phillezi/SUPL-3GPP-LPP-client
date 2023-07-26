/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_StoredNavListInfo_H_
#define	_StoredNavListInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SatListRelatedDataList;

/* StoredNavListInfo */
typedef struct StoredNavListInfo {
	long	 gnss_WeekOrDay;
	long	 gnss_Toe;
	long	 t_toeLimit;
	struct SatListRelatedDataList	*satListRelatedDataList	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} StoredNavListInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_StoredNavListInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_StoredNavListInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_StoredNavListInfo_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SatListRelatedDataList.h"

#endif	/* _StoredNavListInfo_H_ */
#include <asn_internal.h>