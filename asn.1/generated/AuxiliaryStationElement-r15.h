/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_AuxiliaryStationElement_r15_H_
#define	_AuxiliaryStationElement_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GNSS-ReferenceStationID-r15.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Aux_ARP_Unc_r15;

/* AuxiliaryStationElement-r15 */
typedef struct AuxiliaryStationElement_r15 {
	GNSS_ReferenceStationID_r15_t	 aux_referenceStationID_r15;
	long	 aux_master_delta_latitude_r15;
	long	 aux_master_delta_longitude_r15;
	long	 aux_master_delta_height_r15;
	struct Aux_ARP_Unc_r15	*aux_ARP_unc_r15	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AuxiliaryStationElement_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AuxiliaryStationElement_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_AuxiliaryStationElement_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_AuxiliaryStationElement_r15_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Aux-ARP-Unc-r15.h"

#endif	/* _AuxiliaryStationElement_r15_H_ */
#include <asn_internal.h>