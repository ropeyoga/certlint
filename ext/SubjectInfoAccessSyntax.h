/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "rfc3280-PKIX1Implicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_SubjectInfoAccessSyntax_H_
#define	_SubjectInfoAccessSyntax_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AccessDescription;

/* SubjectInfoAccessSyntax */
typedef struct SubjectInfoAccessSyntax {
	A_SEQUENCE_OF(struct AccessDescription) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SubjectInfoAccessSyntax_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SubjectInfoAccessSyntax;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AccessDescription.h"

#endif	/* _SubjectInfoAccessSyntax_H_ */
#include <asn_internal.h>
