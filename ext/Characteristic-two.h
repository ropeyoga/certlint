/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Algorithms88"
 * 	found in "rfc3279-PKIX1Algorithms88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_Characteristic_two_H_
#define	_Characteristic_two_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>
#include <OBJECT_IDENTIFIER.h>
#include <ANY.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Characteristic-two */
typedef struct Characteristic_two {
	INTEGER_t	 m;
	OBJECT_IDENTIFIER_t	 basis;
	ANY_t	 parameters;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Characteristic_two_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Characteristic_two;

#ifdef __cplusplus
}
#endif

#endif	/* _Characteristic_two_H_ */
#include <asn_internal.h>
