/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Algorithms88"
 * 	found in "rfc3279-PKIX1Algorithms88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "ECParameters.h"

static asn_TYPE_member_t asn_MBR_ECParameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ECParameters, version),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_ECPVer,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"version"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ECParameters, fieldID),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FieldID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"fieldID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ECParameters, curve),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Curve,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"curve"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ECParameters, base),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_ECPoint,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"base"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ECParameters, order),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"order"
		},
	{ ATF_POINTER, 1, offsetof(struct ECParameters, cofactor),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"cofactor"
		},
};
static const ber_tlv_tag_t asn_DEF_ECParameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ECParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 2 }, /* version */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 4, -1, 1 }, /* order */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 5, -2, 0 }, /* cofactor */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 3, 0, 0 }, /* base */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 1 }, /* fieldID */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -1, 0 } /* curve */
};
static asn_SEQUENCE_specifics_t asn_SPC_ECParameters_specs_1 = {
	sizeof(struct ECParameters),
	offsetof(struct ECParameters, _asn_ctx),
	asn_MAP_ECParameters_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ECParameters = {
	"ECParameters",
	"ECParameters",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ECParameters_tags_1,
	sizeof(asn_DEF_ECParameters_tags_1)
		/sizeof(asn_DEF_ECParameters_tags_1[0]), /* 1 */
	asn_DEF_ECParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_ECParameters_tags_1)
		/sizeof(asn_DEF_ECParameters_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ECParameters_1,
	6,	/* Elements count */
	&asn_SPC_ECParameters_specs_1	/* Additional specs */
};

