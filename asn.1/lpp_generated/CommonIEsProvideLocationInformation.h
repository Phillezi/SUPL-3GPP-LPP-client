/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_CommonIEsProvideLocationInformation_H_
#define	_CommonIEsProvideLocationInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EarlyFixReport-r12.h"
#include <constr_SEQUENCE.h>
#include "LocationSource-r13.h"
#include <UTCTime.h>
#include "SegmentationInfo-r14.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LocationCoordinates;
struct Velocity;
struct LocationError;
struct IntegrityInfo_r17;

/* CommonIEsProvideLocationInformation */
typedef struct CommonIEsProvideLocationInformation {
	struct LocationCoordinates	*locationEstimate;	/* OPTIONAL */
	struct Velocity	*velocityEstimate;	/* OPTIONAL */
	struct LocationError	*locationError;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct CommonIEsProvideLocationInformation__ext1 {
		EarlyFixReport_r12_t	*earlyFixReport_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct CommonIEsProvideLocationInformation__ext2 {
		LocationSource_r13_t	*locationSource_r13;	/* OPTIONAL */
		UTCTime_t	*locationTimestamp_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct CommonIEsProvideLocationInformation__ext3 {
		SegmentationInfo_r14_t	*segmentationInfo_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct CommonIEsProvideLocationInformation__ext4 {
		struct IntegrityInfo_r17	*integrityInfo_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CommonIEsProvideLocationInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CommonIEsProvideLocationInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_CommonIEsProvideLocationInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_CommonIEsProvideLocationInformation_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _CommonIEsProvideLocationInformation_H_ */
#include <asn_internal.h>
