/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Algorithms88"
 * 	found in "rfc3279-PKIX1Algorithms88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "Dss-Sig-Value.h"

static asn_TYPE_member_t asn_MBR_Dss_Sig_Value_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Dss_Sig_Value, r),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"r"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Dss_Sig_Value, s),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"s"
		},
};
static const ber_tlv_tag_t asn_DEF_Dss_Sig_Value_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Dss_Sig_Value_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 1 }, /* r */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 0 } /* s */
};
static asn_SEQUENCE_specifics_t asn_SPC_Dss_Sig_Value_specs_1 = {
	sizeof(struct Dss_Sig_Value),
	offsetof(struct Dss_Sig_Value, _asn_ctx),
	asn_MAP_Dss_Sig_Value_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Dss_Sig_Value = {
	"Dss-Sig-Value",
	"Dss-Sig-Value",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Dss_Sig_Value_tags_1,
	sizeof(asn_DEF_Dss_Sig_Value_tags_1)
		/sizeof(asn_DEF_Dss_Sig_Value_tags_1[0]), /* 1 */
	asn_DEF_Dss_Sig_Value_tags_1,	/* Same as above */
	sizeof(asn_DEF_Dss_Sig_Value_tags_1)
		/sizeof(asn_DEF_Dss_Sig_Value_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Dss_Sig_Value_1,
	2,	/* Elements count */
	&asn_SPC_Dss_Sig_Value_specs_1	/* Additional specs */
};

