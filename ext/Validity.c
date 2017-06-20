/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "Validity.h"

static asn_TYPE_member_t asn_MBR_Validity_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Validity, notBefore),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Time,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"notBefore"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Validity, notAfter),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Time,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"notAfter"
		},
};
static const ber_tlv_tag_t asn_DEF_Validity_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Validity_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (23 << 2)), 0, 0, 1 }, /* utcTime */
    { (ASN_TAG_CLASS_UNIVERSAL | (23 << 2)), 1, -1, 0 }, /* utcTime */
    { (ASN_TAG_CLASS_UNIVERSAL | (24 << 2)), 0, 0, 1 }, /* generalTime */
    { (ASN_TAG_CLASS_UNIVERSAL | (24 << 2)), 1, -1, 0 } /* generalTime */
};
static asn_SEQUENCE_specifics_t asn_SPC_Validity_specs_1 = {
	sizeof(struct Validity),
	offsetof(struct Validity, _asn_ctx),
	asn_MAP_Validity_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Validity = {
	"Validity",
	"Validity",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Validity_tags_1,
	sizeof(asn_DEF_Validity_tags_1)
		/sizeof(asn_DEF_Validity_tags_1[0]), /* 1 */
	asn_DEF_Validity_tags_1,	/* Same as above */
	sizeof(asn_DEF_Validity_tags_1)
		/sizeof(asn_DEF_Validity_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Validity_1,
	2,	/* Elements count */
	&asn_SPC_Validity_specs_1	/* Additional specs */
};

