
/* ex: set tabstop=4 noexpandtab shiftwidth=4: */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "acrypt.h"




const char password1_data [] = {
0xe7,0x1e,0x0e,0x00,0x01,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x43,0x1c,0x5f,0xc8,0xd8,0x9e,0xd6,0xc1,0xbb,0xa8,0x97,0x15,0x0f,0x83,
0xaf,0xf3,0xc7,0x5d,0x04,0x67,0xf3,0xa3,0xb6,0x43,0x80,0x85,0xdb,0xfe,0x13,
0xda,0x49,0x27,0x08,0xb2,0x81,0xf2,0xbd,0xc5,0x61,0xa3,0xf8,0x47,0xf3,0x45,
0xfb,0x1a,0xa6,0x91,0x68,0x34,0x97,0xda,0x73,0x8a,0x1f,0x15,0xc1,0xaf,0x91,
0xe2,0xfb,0x03,0x5f,0x1c,0x2f,0x66,0x6f,0xbe,0x51,0xc5,0x95,0x1c,0x22,0xd6,
0x99,0xa5,0xb6,0xe0,0x3f,0xfb,0xa0,0x8f,0x5b,0x2f,0xa7,0xb7,0x0f,0xfb,0xa8,
0x94,0x7a,0x2f,0x95,0xb9,0x63,0x50,0x83,0xfd,0xcf,0xb2,0x14,0xb7,0x61,0xb2,
0x92,0x65,0x20,0x28,0x1f,0x08,0x1e,0x72,0x35,0x0e,0x83,0xf9,0xc0,0xee,0x5d,
0xf5,0xad,0x70,0xc3,0xba,0xe3,0xf8,0x7a,0x46,0xb7,0x1a,0xd8,0x48,0x79,0xe2,
0xaf,0x82,0x58,0x1d,0x88,0xc2,0xe9,0x12,0x69,0xfc,0x9e,0x99,0xd2,0x8d,0x58,
0x24,0xc0,0x7c,0x0e,0x96,0x9a,0x66,0x81,0x09,0x5b,0xac,0xfd,0x87,0xfa,0xe1,
0x55,0x13,0xfa,0x35,0xd5,0xb8,0x0d,0x50,0xe7,0xf6,0x04,0x08,0x55,0x7b,0x41,
0x09,0x1a,0x06,0xdc,0x61,0x32,0x90,0x61,0x0f,0xa6,0x78,0x4f,0x8c,0xf1,0x56,
0x2a,0x60,0x7b,0xab,0x55,0x7a,0xbe,0xbf,0x52,0xd1,0x2b,0x56,0x70,0x99,0xca,
0x32,0x25,0xe8,0x98,0x4b,0xde,0x5e,0x7b,0x04,0x9d,0x42,0xd6,0x97,0x73,0x74,
0x00};
const int password1_len = 240;

const char password2_data [] = {
0xe7,0x1e,0x0e,0x00,0x01,0x00,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x95,0x5a,0xac,0x25,0xba,0x22,0xdf,0x36,0x5c,0x12,0x86,0x5d,0x2f,0x58,
0x0d,0x6d,0x99,0xc0,0x26,0xa2,0x53,0xff,0x9d,0x02,0x91,0x7f,0x9f,0x1d,0xa2,
0x7b,0x67,0xec,0x6a,0xec,0xa3,0xe3,0x88,0xbf,0x05,0xdf,0xf5,0xc0,0xb3,0x18,
0x1b,0x62,0xea,0x82,0x2d,0x40,0x5d,0xa1,0x6c,0x13,0x7e,0x20,0xa1,0x5f,0xe3,
0xa0,0x35,0x24,0x2f,0xd9,0x06,0xb6,0xe7,0xf8,0xac,0xa6,0xaa,0xa1,0xc1,0x61,
0x7a,0xdf,0x5b,0x68,0xca,0x44,0x0a,0x45,0x37,0x4a,0xf4,0xbd,0xf1,0x80,0x5f,
0xcd,0xc7,0xbf,0x63,0xca,0xcb,0x1f,0xba,0x74,0xfb,0x94,0x48,0x75,0xfe,0xc9,
0xec,0x1e,0x04,0xb5,0x5c,0xbe,0xa1,0x00,0x96,0xaa,0xcc,0x49,0xb2,0x42,0x18,
0xdb,0x61,0x7a,0x20,0xed,0xc7,0x6a,0x3c,0x75,0x3f,0x3a,0xdf,0x7d,0x29,0x8c,
0x57,0x9d,0x35,0x82,0x51,0xda,0x60,0x1f,0x21,0x58,0x52,0xf4,0xe4,0xab,0xdd,
0xe5,0xd1,0x43,0x86,0xa9,0x42,0x15,0xcf,0x0f,0x3b,0x09,0x6e,0x0c,0x86,0xae,
0x21,0x07,0x95,0xf5,0xa6,0x39,0xb5,0x31,0x9f,0xca,0x87,0x0d,0xfe,0x00,0x3f,
0x3d,0x9e,0x98,0xfc,0x95,0xd4,0xc0,0x23,0x6b,0x0f,0x1c,0xc0,0x82,0xc0,0x43,
0xfb,0x4c,0xf8,0x26,0xf7,0xce,0xd9,0x68,0x1c,0x1f,0x14,0x7d,0x5d,0x91,0x35,
0x5a,0x80,0xc4,0x2e,0xd9,0xde,0x13,0x20,0x99,0xe0,0xef,0xc9,0x8e,0x4d,0xeb,
0x00};
const int password2_len = 240;


int main (void)
{
	struct t_acrypt_struct * ac;
	char * p = NULL;
	char * tmp = NULL;
	unsigned s;

	ac = acrypt_new (NULL);
	if (!ac) {
	  /* error reported by acrypt library */
	  return 1;
	}

	if (!acrypt_decrypt_block (ac, password1_data, password1_len, &p, &s)) {
		fputs ("decrypt password1 failed\n", stderr);
		return 1;
	}
	if (strcmp (p, "red moon") != 0) {
		fputs ("password1 is incorrect\n", stderr);
		return 1;
	}
	if (!acrypt_decrypt_block (ac, password2_data, password2_len, &tmp, &s)) {
		fputs ("decrypt password2 failed\n", stderr);
		return 1;
	}
	if (strcmp (tmp, "123456789abcdefghijklmnopqrstuvwxyz") != 0) {
		fputs ("password2 is incorrect\n", stderr);
		return 1;
	}
	acrypt_free (ac);
	free (p);
	free (tmp);

	fputs ("libtest ok\n", stdout);
	return 0;
}
