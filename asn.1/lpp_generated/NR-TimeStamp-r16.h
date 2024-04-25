/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "src/LPP-PDU-Definitions.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -no-gen-example -pdu=all -gen-XER -gen-JER -no-gen-OER -gen-UPER -no-gen-APER -no-gen-BER -no-gen-print -no-gen-random-fill -D lpp_generated/ -S empty_skeleton/`
 */

#ifndef	_NR_TimeStamp_r16_H_
#define	_NR_TimeStamp_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "NR-PhysCellID-r16.h"
#include "ARFCN-ValueNR-r15.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_TimeStamp_r16__nr_Slot_r16_PR {
	NR_TimeStamp_r16__nr_Slot_r16_PR_NOTHING,	/* No components present */
	NR_TimeStamp_r16__nr_Slot_r16_PR_scs15_r16,
	NR_TimeStamp_r16__nr_Slot_r16_PR_scs30_r16,
	NR_TimeStamp_r16__nr_Slot_r16_PR_scs60_r16,
	NR_TimeStamp_r16__nr_Slot_r16_PR_scs120_r16
} NR_TimeStamp_r16__nr_Slot_r16_PR;

/* Forward declarations */
struct NCGI_r15;

/* NR-TimeStamp-r16 */
typedef struct NR_TimeStamp_r16 {
	long	 dl_PRS_ID_r16;
	NR_PhysCellID_r16_t	*nr_PhysCellID_r16;	/* OPTIONAL */
	struct NCGI_r15	*nr_CellGlobalID_r16;	/* OPTIONAL */
	ARFCN_ValueNR_r15_t	*nr_ARFCN_r16;	/* OPTIONAL */
	long	 nr_SFN_r16;
	struct NR_TimeStamp_r16__nr_Slot_r16 {
		NR_TimeStamp_r16__nr_Slot_r16_PR present;
		union NR_TimeStamp_r16__nr_Slot_r16_u {
			long	 scs15_r16;
			long	 scs30_r16;
			long	 scs60_r16;
			long	 scs120_r16;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} nr_Slot_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_TimeStamp_r16__ext1 {
		long	*nr_Symbol_r18;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_TimeStamp_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_TimeStamp_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_TimeStamp_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_TimeStamp_r16_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_TimeStamp_r16_H_ */
#include <asn_internal.h>
