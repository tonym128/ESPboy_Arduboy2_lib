/*unsigned char const background[]  =
{
	32, 24,

	0x3e, 0x00, 0x3e, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f,
	0x3e, 0x00, 0x3e, 0x7f, 0xff, 0xff, 0x7f, 0x7f,
	0x3e, 0x00, 0x2a, 0x55, 0x2a, 0x55, 0x2a, 0x55,
	0x2a, 0x00, 0x3e, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f,
	0x7f, 0x7f, 0x7f, 0x7f, 0x3e, 0x00, 0x2a, 0x55,
	0x2a, 0x55, 0x2a, 0x54, 0x00, 0x3e, 0x7f, 0x7f,
	0x7f, 0x7f, 0xbe, 0x80, 0xbe, 0xbf, 0x3f, 0x7f,
	0x7f, 0x7f, 0x7f, 0x7f, 0x3e, 0x00, 0x3e, 0x7f,
	0x00, 0x3e, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x3e,
	0x00, 0x3e, 0x7f, 0x7f, 0x7f, 0x7f, 0x3e, 0x00,
	0x3e, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x3e,
	0x00, 0x2a, 0x55, 0x2a, 0x55, 0x2a, 0x55, 0x2a,
};*/

unsigned char const background[]  =
{
	64, 24,
	0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x3f, 0xdf,
	0xef, 0xda, 0x3f, 0xff, 0x7f, 0xff, 0x7f, 0xff,
	0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff,
	0x7f, 0xaa, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff,
	0x7f, 0xff, 0x7f, 0xfe, 0x7d, 0xfb, 0x57, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x57, 0xfb,
	0x7d, 0xfe, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff,
	0x7f, 0xaa, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff,
	0x55, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7e, 0xf9,
	0x40, 0xf9, 0x7e, 0xff, 0x7f, 0xff, 0x7f, 0xff,
	0x55, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff,
	0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff,
	0x55, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x55, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x55, 0xff,
	0x55, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff,
	0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff,
	0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xaa,
	0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff,
	0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xaa,
	0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff,
	0x7f, 0xff, 0x7f, 0x7f, 0xbf, 0xdf, 0xf5, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0xdf,
	0xbf, 0x7f, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xaa,
	0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff,
};

unsigned char const frame1_1[]  =
{
	17, 26,
	// 0
	0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x66,
	0xee, 0x66, 0x40, 0x40, 0x40, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x02, 0x01, 0x00, 0x80, 0x40, 0x21,
	0x25, 0x3f, 0x25, 0x21, 0x40, 0x80, 0x00, 0x01,
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02,
	0x04, 0x01, 0x00, 0x01, 0x04, 0x02, 0x01, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

unsigned char const frame1_1_mask[]  =
{
	/*17, 26,*/
	// 0
	0x00, 0x00, 0x80, 0xc0, 0xe0, 0xe0, 0xe6, 0xff,
	0xff, 0xff, 0xe6, 0xe0, 0xe0, 0xc0, 0x80, 0x00,
	0x00, 0x02, 0x07, 0x03, 0x81, 0xc0, 0xe1, 0xf7,
	0xff, 0xff, 0xff, 0xf7, 0xe1, 0xc0, 0x81, 0x03,
	0x07, 0x02, 0x00, 0x00, 0x00, 0x01, 0x03, 0x27,
	0x1f, 0xff, 0xff, 0xff, 0x1f, 0x27, 0x03, 0x01,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};



unsigned char const frame1_2[]  =
{
	17, 26,
	// 0
	0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x60,
	0xe6, 0x6e, 0x4e, 0x40, 0x80, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x80, 0xe1,
	0x25, 0x3f, 0x25, 0x61, 0xc0, 0x80, 0x01, 0x06,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
	0x0e, 0x01, 0x00, 0x01, 0x02, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

unsigned char const frame1_2_mask[]  =
{
	/*17, 26,*/
	// 0
	0x00, 0x80, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xf6,
	0xff, 0xff, 0xff, 0xee, 0xc0, 0x80, 0x00, 0x00,
	0x00, 0x01, 0x03, 0x01, 0x00, 0x80, 0xe1, 0xf7,
	0xff, 0xff, 0xff, 0xf7, 0xe1, 0xc1, 0x87, 0x0f,
	0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x8f,
	0x7f, 0xff, 0xff, 0xff, 0x0f, 0x13, 0x01, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

unsigned char const frame1_3[]  =
{
	17, 26,
	// 0
	0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x4e, 0x6e,
	0xe6, 0x60, 0x40, 0x40, 0x40, 0x40, 0x80, 0x00,
	0x00, 0x00, 0x00, 0x06, 0x01, 0x80, 0xc0, 0x61,
	0x25, 0x3f, 0x25, 0xe1, 0x80, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
	0x02, 0x01, 0x00, 0x01, 0x0e, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

unsigned char const frame1_3_mask[]  =
{
	/*17, 26,*/
	// 0
	0x00, 0x00, 0x00, 0x80, 0xc0, 0xee, 0xff, 0xff,
	0xff, 0xf6, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x80,
	0x00, 0x00, 0x06, 0x0f, 0x87, 0xc1, 0xe1, 0xf7,
	0xff, 0xff, 0xff, 0xf7, 0xe1, 0x80, 0x00, 0x01,
	0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x13,
	0x0f, 0xff, 0xff, 0xff, 0x7f, 0x8f, 0x03, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

unsigned char const frame2_1[]  =
{
	13, 20,
	// 0
	0x00, 0x80, 0x40, 0x20, 0x20, 0x50, 0xf6, 0x50,
	0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x10, 0x28, 0x15, 0x07, 0x15, 0x28, 0x10, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

unsigned char const frame2_1_mask[]  =
{
	/*13, 20,*/
	// 0
	0x80, 0xc0, 0xe0, 0x70, 0x70, 0xfe, 0xff, 0xfe,
	0x70, 0x70, 0xe0, 0xc0, 0x80, 0x00, 0x01, 0x10,
	0x38, 0x7c, 0xff, 0xff, 0xff, 0x7c, 0x38, 0x10,
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
	0x0f, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
};

unsigned char const frame2_2[]  =
{
	13, 20,
	// 0
	0x00, 0x40, 0x20, 0x10, 0x10, 0x50, 0xfa, 0x56,
	0x20, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x30, 0x15, 0x07, 0x15, 0x18, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

unsigned char const frame2_2_mask[]  =
{
	/*13, 20,*/
	// 0
	0x40, 0xe0, 0x70, 0x38, 0x78, 0xfa, 0xff, 0xff,
	0x76, 0x70, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00,
	0x30, 0x7c, 0xff, 0xff, 0xff, 0xbc, 0x18, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
	0x0f, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
};

unsigned char const frame2_3[]  =
{
	13, 20,
	// 0
	0x00, 0x00, 0x40, 0x20, 0x20, 0x56, 0xfa, 0x50,
	0x10, 0x10, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x18, 0x15, 0x07, 0x15, 0x30, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

unsigned char const frame2_3_mask[]  =
{
	/*13, 20,*/
	// 0
	0x00, 0xc0, 0xe0, 0x70, 0x76, 0xff, 0xff, 0xfa,
	0x78, 0x38, 0x70, 0xe0, 0x40, 0x00, 0x00, 0x00,
	0x18, 0xbc, 0xff, 0xff, 0xff, 0x7c, 0x30, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
	0x0f, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
};

unsigned char const frame3_1[]  =
{
	9, 13,
	// 0
	0x00, 0x10, 0x08, 0x28, 0x7a, 0x28, 0x08, 0x10,
	0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x02, 0x01,
	0x00, 0x00,
};

unsigned char const frame3_1_mask[]  =
{
	/*9, 13,*/
	// 0
	0x10, 0x38, 0x9c, 0xfe, 0xff, 0xfe, 0x9c, 0x38,
	0x10, 0x00, 0x01, 0x03, 0x07, 0x1f, 0x07, 0x03,
	0x01, 0x00,
};

unsigned char const frame3_2[]  =
{
	9, 13,
	// 0
	0x00, 0x10, 0x08, 0xa8, 0x78, 0xaa, 0x10, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
	0x00, 0x00,
};

unsigned char const frame3_2_mask[]  =
{
	/*9, 13,*/
	// 0
	0x10, 0x38, 0x9c, 0xfc, 0xff, 0xff, 0xba, 0x30,
	0x00, 0x00, 0x00, 0x03, 0x0f, 0x1f, 0x03, 0x01,
	0x00, 0x00,
};

unsigned char const frame3_3[]  =
{
	9, 13,
	// 0
	0x00, 0x00, 0x10, 0xaa, 0x78, 0xa8, 0x08, 0x10,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
	0x00, 0x00,
};

unsigned char const frame3_3_mask[]  =
{
	/*9, 13,*/
	// 0
	0x00, 0x30, 0xba, 0xff, 0xff, 0xfc, 0x9c, 0x38,
	0x10, 0x00, 0x00, 0x01, 0x03, 0x1f, 0x0f, 0x03,
	0x00, 0x00,
};

unsigned char const frame4[]  =
{
	5, 8,
	// 0
	0x00, 0x30, 0x0c, 0x30, 0x00,
};

unsigned char const frame4_mask[]  =
{
	/*5, 8,*/
	// 0
	0x04, 0x7c, 0xff, 0x7c, 0x04,
};

unsigned char const skull[]  =
{
	48, 64,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xbf,
	0xdf, 0xef, 0xef, 0xf7, 0xf7, 0xfb, 0xfb, 0xfd,
	0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd,
	0xfd, 0xfd, 0xfd, 0xfb, 0xfb, 0xf7, 0xf7, 0xf7,
	0xef, 0xef, 0xdf, 0xbf, 0xbf, 0x7f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x0f, 0xf3, 0xfc, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0x3f, 0x3f, 0x1f, 0x1f, 0x0f, 0x0f, 0x1f, 0x1f,
	0x3f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0x7f, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfd,
	0xf3, 0xef, 0xdf, 0x3f, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xcf, 0x03, 0x00, 0x01, 0x01, 0x01, 0xc1,
	0xff, 0x0f, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff,
	0xf0, 0xc0, 0xc0, 0xc0, 0x80, 0x80, 0xc0, 0xc0,
	0xc0, 0xc0, 0xe0, 0xff, 0xff, 0xff, 0xff, 0x80,
	0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xfc, 0xf3, 0x8f, 0x7f,
	0xff, 0xff, 0x1e, 0xe0, 0xf8, 0xfc, 0xfe, 0xff,
	0xff, 0xc0, 0xc0, 0xe0, 0xe0, 0xe3, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xdf, 0xdf, 0xdf, 0xdf,
	0xdf, 0xdf, 0xde, 0xdd, 0xe3, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
	0xff, 0xff, 0xe0, 0xef, 0x0f, 0xb7, 0xb7, 0x07,
	0xb7, 0xb7, 0x07, 0xb7, 0xbb, 0x03, 0xdb, 0xdb,
	0x03, 0xdb, 0xdb, 0x03, 0xd7, 0xd7, 0x07, 0xaf,
	0xaf, 0xaf, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xc7, 0xf8,
	0xff, 0xff, 0xff, 0xff, 0xe0, 0x1d, 0xfd, 0xfc,
	0xfd, 0xfd, 0xfc, 0xfd, 0xfd, 0xfe, 0xfe, 0xfe,
	0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe,
	0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x7f, 0xbf, 0xdf, 0xdf, 0xef, 0xef,
	0xf7, 0xf7, 0xfb, 0xfd, 0xfe, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xef, 0xef,
	0xef, 0xef, 0xef, 0xef, 0xf7, 0xf7, 0xf7, 0xfb,
	0xfb, 0xfb, 0xfb, 0xc1, 0x9d, 0xbd, 0x3d, 0xbe,
	0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xde, 0xee, 0xee,
	0xee, 0xec, 0x13, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x70, 0x8f,
	0xdf, 0xdf, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef,
	0xef, 0xef, 0xcc, 0x33, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
};

unsigned char const logo[]  =
{
	40, 24,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
	0xfe, 0x92, 0x92, 0x6c, 0x01, 0x7c, 0x82, 0x82,
	0x7c, 0x00, 0xfe, 0x0c, 0x30, 0xfe, 0x00, 0xfe,
	0x92, 0x92, 0x82, 0x38, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0x43, 0x19, 0x25, 0x25, 0xc5, 0x01, 0xfd, 0x20,
	0x20, 0xfc, 0x00, 0xf8, 0x25, 0x24, 0xf8, 0x00,
	0xfc, 0x20, 0x50, 0x8c, 0x00, 0xfc, 0x24, 0x24,
	0x04, 0x00, 0xfc, 0x24, 0x25, 0xd9, 0x03, 0x19,
	0x25, 0x25, 0xc5, 0x11, 0xff, 0xff, 0xff, 0xff,
	0xfc, 0xfd, 0xfd, 0xfd, 0xfc, 0xfc, 0xfd, 0xfc,
	0xfc, 0xfd, 0xfc, 0xfd, 0xfc, 0xfc, 0xfd, 0xfc,
	0xfd, 0xfc, 0xfc, 0xfd, 0xfc, 0xfd, 0xfd, 0xfd,
	0xfd, 0xfc, 0xfd, 0xfc, 0xfc, 0xfd, 0xfc, 0xfd,
	0xfd, 0xfd, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff,
};
