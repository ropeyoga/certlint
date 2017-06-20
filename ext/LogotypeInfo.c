/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LogotypeCertExtn"
 * 	found in "rfc3709-LogotypeCertExtn.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "LogotypeInfo.h"

static asn_TYPE_member_t asn_MBR_LogotypeInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LogotypeInfo, choice.direct),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogotypeData,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"direct"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LogotypeInfo, choice.indirect),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogotypeReference,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"indirect"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LogotypeInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* direct */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* indirect */
};
static asn_CHOICE_specifics_t asn_SPC_LogotypeInfo_specs_1 = {
	sizeof(struct LogotypeInfo),
	offsetof(struct LogotypeInfo, _asn_ctx),
	offsetof(struct LogotypeInfo, present),
	sizeof(((struct LogotypeInfo *)0)->present),
	asn_MAP_LogotypeInfo_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LogotypeInfo = {
	"LogotypeInfo",
	"LogotypeInfo",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_LogotypeInfo_1,
	2,	/* Elements count */
	&asn_SPC_LogotypeInfo_specs_1	/* Additional specs */
};

