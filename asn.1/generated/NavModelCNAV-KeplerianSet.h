/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_NavModelCNAV_KeplerianSet_H_
#define	_NavModelCNAV_KeplerianSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <INTEGER.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NavModelCNAV-KeplerianSet */
typedef struct NavModelCNAV_KeplerianSet {
	long	 cnavTop;
	long	 cnavURAindex;
	long	 cnavDeltaA;
	long	 cnavAdot;
	long	 cnavDeltaNo;
	long	 cnavDeltaNoDot;
	INTEGER_t	 cnavMo;
	INTEGER_t	 cnavE;
	INTEGER_t	 cnavOmega;
	INTEGER_t	 cnavOMEGA0;
	long	 cnavDeltaOmegaDot;
	INTEGER_t	 cnavIo;
	long	 cnavIoDot;
	long	 cnavCis;
	long	 cnavCic;
	long	 cnavCrs;
	long	 cnavCrc;
	long	 cnavCus;
	long	 cnavCuc;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NavModelCNAV_KeplerianSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NavModelCNAV_KeplerianSet;
extern asn_SEQUENCE_specifics_t asn_SPC_NavModelCNAV_KeplerianSet_specs_1;
extern asn_TYPE_member_t asn_MBR_NavModelCNAV_KeplerianSet_1[19];

#ifdef __cplusplus
}
#endif

#endif	/* _NavModelCNAV_KeplerianSet_H_ */
#include <asn_internal.h>