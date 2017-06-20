/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Algorithms88"
 * 	found in "rfc3279-PKIX1Algorithms88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_DHPublicKey_H_
#define	_DHPublicKey_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DHPublicKey */
typedef INTEGER_t	 DHPublicKey_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DHPublicKey;
asn_struct_free_f DHPublicKey_free;
asn_struct_print_f DHPublicKey_print;
asn_constr_check_f DHPublicKey_constraint;
ber_type_decoder_f DHPublicKey_decode_ber;
der_type_encoder_f DHPublicKey_encode_der;
xer_type_decoder_f DHPublicKey_decode_xer;
xer_type_encoder_f DHPublicKey_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _DHPublicKey_H_ */
#include <asn_internal.h>
