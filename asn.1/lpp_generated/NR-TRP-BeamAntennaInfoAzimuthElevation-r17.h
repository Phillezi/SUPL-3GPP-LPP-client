/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_NR_TRP_BeamAntennaInfoAzimuthElevation_r17_H_
#define	_NR_TRP_BeamAntennaInfoAzimuthElevation_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ElevationElement_R17;

/* NR-TRP-BeamAntennaInfoAzimuthElevation-r17 */
typedef struct NR_TRP_BeamAntennaInfoAzimuthElevation_r17 {
	long	*azimuth_r17;	/* OPTIONAL */
	long	*azimuth_fine_r17;	/* OPTIONAL */
	struct NR_TRP_BeamAntennaInfoAzimuthElevation_r17__elevationList_r17 {
		A_SEQUENCE_OF(struct ElevationElement_R17) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} elevationList_r17;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_TRP_BeamAntennaInfoAzimuthElevation_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_TRP_BeamAntennaInfoAzimuthElevation_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_TRP_BeamAntennaInfoAzimuthElevation_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_TRP_BeamAntennaInfoAzimuthElevation_r17_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_TRP_BeamAntennaInfoAzimuthElevation_r17_H_ */
#include <asn_internal.h>
