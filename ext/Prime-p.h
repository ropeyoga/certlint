/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Algorithms88"
 * 	found in "rfc3279-PKIX1Algorithms88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_Prime_p_H_
#define	_Prime_p_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Prime-p */
typedef INTEGER_t	 Prime_p_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Prime_p;
asn_struct_free_f Prime_p_free;
asn_struct_print_f Prime_p_print;
asn_constr_check_f Prime_p_constraint;
ber_type_decoder_f Prime_p_decode_ber;
der_type_encoder_f Prime_p_encode_der;
xer_type_decoder_f Prime_p_decode_xer;
xer_type_encoder_f Prime_p_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _Prime_p_H_ */
#include <asn_internal.h>
