/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Algorithms88"
 * 	found in "rfc3279-PKIX1Algorithms88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_Pentanomial_H_
#define	_Pentanomial_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Pentanomial */
typedef struct Pentanomial {
	INTEGER_t	 k1;
	INTEGER_t	 k2;
	INTEGER_t	 k3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Pentanomial_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Pentanomial;

#ifdef __cplusplus
}
#endif

#endif	/* _Pentanomial_H_ */
#include <asn_internal.h>