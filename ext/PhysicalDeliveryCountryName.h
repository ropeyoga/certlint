/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_PhysicalDeliveryCountryName_H_
#define	_PhysicalDeliveryCountryName_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NumericString.h>
#include <PrintableString.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhysicalDeliveryCountryName_PR {
	PhysicalDeliveryCountryName_PR_NOTHING,	/* No components present */
	PhysicalDeliveryCountryName_PR_x121_dcc_code,
	PhysicalDeliveryCountryName_PR_iso_3166_alpha2_code
} PhysicalDeliveryCountryName_PR;

/* PhysicalDeliveryCountryName */
typedef struct PhysicalDeliveryCountryName {
	PhysicalDeliveryCountryName_PR present;
	union PhysicalDeliveryCountryName_u {
		NumericString_t	 x121_dcc_code;
		PrintableString_t	 iso_3166_alpha2_code;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalDeliveryCountryName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalDeliveryCountryName;

#ifdef __cplusplus
}
#endif

#endif	/* _PhysicalDeliveryCountryName_H_ */
#include <asn_internal.h>
