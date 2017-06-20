/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "rfc3280-PKIX1Implicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "AnotherName.h"

static asn_TYPE_member_t asn_MBR_AnotherName_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AnotherName, type_id),
		(ASN_TAG_CLASS_UNIVERSAL | (6 << 2)),
		0,
		&asn_DEF_OBJECT_IDENTIFIER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"type-id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AnotherName, value),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ANY,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_AnotherName_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AnotherName_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (6 << 2)), 0, 0, 0 }, /* type-id */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 } /* value */
};
static asn_SEQUENCE_specifics_t asn_SPC_AnotherName_specs_1 = {
	sizeof(struct AnotherName),
	offsetof(struct AnotherName, _asn_ctx),
	asn_MAP_AnotherName_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_AnotherName = {
	"AnotherName",
	"AnotherName",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_AnotherName_tags_1,
	sizeof(asn_DEF_AnotherName_tags_1)
		/sizeof(asn_DEF_AnotherName_tags_1[0]), /* 1 */
	asn_DEF_AnotherName_tags_1,	/* Same as above */
	sizeof(asn_DEF_AnotherName_tags_1)
		/sizeof(asn_DEF_AnotherName_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_AnotherName_1,
	2,	/* Elements count */
	&asn_SPC_AnotherName_specs_1	/* Additional specs */
};

