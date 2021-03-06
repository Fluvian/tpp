// Lights
Lights1 submarine_SubmarineMetalMaterial_Variation1_lights = gdSPDefLights1(
	0x3F, 0x1E, 0x19,
	0xFE, 0x7E, 0x65, 0x28, 0x28, 0x28);

Lights1 submarine_SubmarineMetalMaterial_Variation2_lights = gdSPDefLights1(
	0x2F, 0x19, 0xF,
	0xBE, 0x6A, 0x3F, 0x28, 0x28, 0x28);

Lights1 submarine_SubmarineMetalMaterial_Variation3_lights = gdSPDefLights1(
	0x3F, 0x3F, 0x3F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 submarine_SubmarineWoodMaterial_lights = gdSPDefLights1(
	0x3F, 0x3F, 0x3F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

// Materials
Gfx mat_submarine_SubmarineMetalMaterial[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, ddd_seg7_texture_07001800),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 252, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_submarine_SubmarineWoodMaterial[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, water_0900A000),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 252, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPSetLights1(submarine_SubmarineWoodMaterial_lights),
	gsSPEndDisplayList(),
};

// Data
Vtx submarine_1_dl_mesh_vtx_0[28] = {
	{{{3914, -3, -2504},0, {4356, 2677},{0xE7, 0xBF, 0x96, 0xFF}}},
	{{{3908, 2, -2504},0, {4356, 2569},{0xBD, 0xE5, 0x97, 0xFF}}},
	{{{3926, -3, -2504},0, {4356, 2983},{0x19, 0xC0, 0x95, 0xFF}}},
	{{{3908, 14, -2504},0, {4356, 2622},{0xBE, 0x1A, 0x96, 0xFF}}},
	{{{3914, 20, -2504},0, {4356, 2734},{0xE6, 0x42, 0x96, 0xFF}}},
	{{{3926, 20, -2504},0, {4356, 2925},{0x1A, 0x42, 0x96, 0xFF}}},
	{{{3932, 14, -2504},0, {4356, 3037},{0x41, 0x1A, 0x96, 0xFF}}},
	{{{3932, 2, -2504},0, {4356, 3091},{0x42, 0xE5, 0x97, 0xFF}}},
	{{{3908, 14, -2504},0, {5208, 458},{0xBE, 0x1A, 0x96, 0xFF}}},
	{{{3818, 59, -2351},0, {5136, 165},{0x9E, 0x2A, 0xBA, 0xFF}}},
	{{{3870, 110, -2351},0, {5371, 171},{0xE7, 0x6D, 0xC4, 0xFF}}},
	{{{3914, 20, -2504},0, {5236, 458},{0xE6, 0x42, 0x96, 0xFF}}},
	{{{3926, 20, -2504},0, {5270, 467},{0x1A, 0x42, 0x96, 0xFF}}},
	{{{3971, 110, -2351},0, {5661, 246},{0x2B, 0x69, 0xC7, 0xFF}}},
	{{{3932, 14, -2504},0, {5287, 478},{0x41, 0x1A, 0x96, 0xFF}}},
	{{{4023, 59, -2351},0, {5808, 337},{0x6A, 0x2B, 0xC8, 0xFF}}},
	{{{3932, 2, -2504},0, {5297, 497},{0x42, 0xE5, 0x97, 0xFF}}},
	{{{3932, 14, -2504},0, {5287, 478},{0x41, 0x1A, 0x96, 0xFF}}},
	{{{4023, 59, -2351},0, {5808, 337},{0x6A, 0x2B, 0xC8, 0xFF}}},
	{{{4023, -42, -2351},0, {5888, 495},{0x6A, 0xD5, 0xC8, 0xFF}}},
	{{{3926, -3, -2504},0, {5291, 509},{0x19, 0xC0, 0x95, 0xFF}}},
	{{{3971, -94, -2351},0, {5847, 612},{0x2C, 0x98, 0xC6, 0xFF}}},
	{{{3870, -94, -2351},0, {5662, 746},{0xD4, 0x98, 0xC6, 0xFF}}},
	{{{3914, -3, -2504},0, {5269, 525},{0xE7, 0xBF, 0x96, 0xFF}}},
	{{{3818, -42, -2351},0, {5459, 807},{0x9E, 0xD6, 0xBA, 0xFF}}},
	{{{3908, 2, -2504},0, {5248, 532},{0xBD, 0xE5, 0x97, 0xFF}}},
	{{{3818, 59, -2351},0, {5136, 827},{0x9E, 0x2A, 0xBA, 0xFF}}},
	{{{3908, 14, -2504},0, {5210, 534},{0xBE, 0x1A, 0x96, 0xFF}}},
};

Gfx submarine_1_dl_mesh_tri_0[] = {
	gsSPVertex(submarine_1_dl_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(3, 4, 2, 0),
	gsSP1Triangle(4, 5, 2, 0),
	gsSP1Triangle(5, 6, 2, 0),
	gsSP1Triangle(6, 7, 2, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(12, 10, 13, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(submarine_1_dl_mesh_vtx_0 + 16, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 4, 0, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSPEndDisplayList(),
};

Vtx submarine_1_dl_mesh_vtx_1[21] = {
	{{{3920, 8, -2453},0, {10097, 7472},{0x3, 0x6, 0x81, 0xFF}}},
	{{{4094, -97, -2476},0, {13386, 7490},{0x4D, 0xF4, 0x9C, 0xFF}}},
	{{{4026, -165, -2431},0, {14356, 7453},{0xE3, 0x88, 0xE2, 0xFF}}},
	{{{4100, -91, -2457},0, {13313, 7475},{0x76, 0x20, 0x22, 0xFF}}},
	{{{4032, -159, -2412},0, {14263, 7438},{0xC, 0xB6, 0x67, 0xFF}}},
	{{{3746, 114, -2476},0, {8631, 7490},{0xB3, 0xC, 0x9C, 0xFF}}},
	{{{3814, 182, -2431},0, {9327, 7453},{0x1D, 0x78, 0xE2, 0xFF}}},
	{{{3740, 108, -2457},0, {8567, 7475},{0x8A, 0xE1, 0x22, 0xFF}}},
	{{{3808, 176, -2412},0, {9269, 7438},{0xF4, 0x4A, 0x67, 0xFF}}},
	{{{3753, -103, -2412},0, {6733, 7438},{0xB9, 0xF4, 0x69, 0xFF}}},
	{{{3820, -171, -2457},0, {5745, 7475},{0x1F, 0x8A, 0x22, 0xFF}}},
	{{{3746, -97, -2431},0, {6808, 7453},{0x88, 0x1D, 0xE4, 0xFF}}},
	{{{3814, -165, -2476},0, {5838, 7490},{0xF4, 0xB3, 0x9C, 0xFF}}},
	{{{4094, 114, -2431},0, {11563, 7453},{0x78, 0xE3, 0xE2, 0xFF}}},
	{{{4026, 182, -2476},0, {10868, 7490},{0xC, 0x4D, 0x9C, 0xFF}}},
	{{{4020, 188, -2457},0, {10811, 7475},{0xE1, 0x76, 0x22, 0xFF}}},
	{{{3920, 8, -2453},0, {10097, 7472},{0x3, 0x6, 0x81, 0xFF}}},
	{{{4094, 114, -2431},0, {11563, 7453},{0x78, 0xE3, 0xE2, 0xFF}}},
	{{{4088, 120, -2412},0, {11499, 7438},{0x4A, 0xC, 0x67, 0xFF}}},
	{{{4020, 188, -2457},0, {10811, 7475},{0xE1, 0x76, 0x22, 0xFF}}},
	{{{4026, 182, -2476},0, {10868, 7490},{0xC, 0x4D, 0x9C, 0xFF}}},
};

Gfx submarine_1_dl_mesh_tri_1[] = {
	gsSPVertex(submarine_1_dl_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(0, 2, 4, 0),
	gsSP1Triangle(4, 2, 3, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(0, 5, 6, 0),
	gsSP1Triangle(7, 5, 0, 0),
	gsSP1Triangle(8, 7, 0, 0),
	gsSP1Triangle(0, 6, 8, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(0, 9, 10, 0),
	gsSP1Triangle(0, 11, 9, 0),
	gsSP1Triangle(12, 11, 0, 0),
	gsSP1Triangle(10, 12, 0, 0),
	gsSP1Triangle(11, 12, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSP1Triangle(14, 13, 0, 0),
	gsSPVertex(submarine_1_dl_mesh_vtx_1 + 16, 5, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 4, 0, 0),
	gsSPEndDisplayList(),
};

Vtx submarine_1_dl_mesh_vtx_2[263] = {
	{{{3818, 213, 4151},0, {4663, -20},{0xDD, 0x2D, 0x72, 0xFF}}},
	{{{3818, 392, 4151},0, {4663, -388},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{3818, 392, 3921},0, {5609, -388},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{4023, 392, 3921},0, {5117, -490},{0x49, 0x49, 0x49, 0xFF}}},
	{{{4023, 392, 4151},0, {5896, 11},{0x49, 0x49, 0x49, 0xFF}}},
	{{{4023, 213, 4151},0, {5117, 314},{0x23, 0x2D, 0x72, 0xFF}}},
	{{{4023, 571, 3690},0, {4338, -490},{0x31, 0x75, 0x0, 0xFF}}},
	{{{4023, 571, 3921},0, {5117, 11},{0x49, 0x49, 0x49, 0xFF}}},
	{{{4023, 392, 3921},0, {4338, 314},{0x49, 0x49, 0x49, 0xFF}}},
	{{{3818, 571, 3921},0, {4663, -20},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{3818, 571, 3690},0, {5609, -20},{0xCF, 0x75, 0x0, 0xFF}}},
	{{{3818, 392, 3921},0, {4663, 347},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{3818, 1185, 1619},0, {10693, 662},{0xA3, 0x54, 0xEA, 0xFF}}},
	{{{3818, 1185, 1976},0, {10220, 662},{0xA4, 0x55, 0x13, 0xFF}}},
	{{{3870, 1185, 2080},0, {10085, 662},{0xCB, 0x54, 0x50, 0xFF}}},
	{{{3972, 1185, 2080},0, {10085, 662},{0x35, 0x54, 0x50, 0xFF}}},
	{{{3818, 1185, 1619},0, {10693, 662},{0xA3, 0x54, 0xEA, 0xFF}}},
	{{{3972, 1185, 2080},0, {10085, 662},{0x35, 0x54, 0x50, 0xFF}}},
	{{{4023, 1185, 1976},0, {10220, 662},{0x5C, 0x55, 0x13, 0xFF}}},
	{{{4023, 1185, 1619},0, {10693, 662},{0x5D, 0x54, 0xEB, 0xFF}}},
	{{{3972, 1185, 1516},0, {10829, 662},{0x35, 0x4D, 0xAA, 0xFF}}},
	{{{3870, 1185, 1516},0, {10829, 662},{0xCB, 0x4D, 0xAA, 0xFF}}},
	{{{3818, -606, -1071},0, {2174, 5633},{0xE5, 0x89, 0xDC, 0xFF}}},
	{{{3870, -94, -2351},0, {4493, 6239},{0xD4, 0x98, 0xC6, 0xFF}}},
	{{{3971, -94, -2351},0, {4493, 4667},{0x2C, 0x98, 0xC6, 0xFF}}},
	{{{4023, -606, -1071},0, {2174, 5273},{0x1B, 0x89, 0xDC, 0xFF}}},
	{{{4227, -503, -1071},0, {2174, 4865},{0x47, 0x9D, 0xDC, 0xFF}}},
	{{{4023, -42, -2351},0, {4493, 4325},{0x6A, 0xD5, 0xC8, 0xFF}}},
	{{{4330, -401, -1071},0, {2174, 4600},{0x66, 0xBC, 0xDD, 0xFF}}},
	{{{4432, -145, -1071},0, {2174, 4079},{0x79, 0xEA, 0xDF, 0xFF}}},
	{{{4023, 59, -2351},0, {4493, 3540},{0x6A, 0x2B, 0xC8, 0xFF}}},
	{{{4432, 161, -1071},0, {2174, 3500},{0x79, 0x17, 0xE0, 0xFF}}},
	{{{4330, 417, -1071},0, {2174, 3037},{0x61, 0x4B, 0xDE, 0xFF}}},
	{{{4432, 161, -1071},0, {2174, 3500},{0x79, 0x17, 0xE0, 0xFF}}},
	{{{4023, 59, -2351},0, {4493, 3540},{0x6A, 0x2B, 0xC8, 0xFF}}},
	{{{4023, -196, 4151},0, {-6337, 5321},{0x19, 0xC8, 0x6F, 0xFF}}},
	{{{3818, -196, 4151},0, {-6337, 6121},{0xE7, 0xC8, 0x6F, 0xFF}}},
	{{{3818, -606, 3690},0, {-5419, 5585},{0xEE, 0x91, 0x3C, 0xFF}}},
	{{{4023, -606, 3690},0, {-5419, 5321},{0x12, 0x91, 0x3C, 0xFF}}},
	{{{3818, -810, 3024},0, {-4097, 5585},{0xED, 0x84, 0x12, 0xFF}}},
	{{{4023, -810, 3024},0, {-4097, 5321},{0x13, 0x84, 0x12, 0xFF}}},
	{{{4176, -554, 3690},0, {-5414, 4901},{0x3A, 0xA0, 0x3C, 0xFF}}},
	{{{4330, -708, 3024},0, {-4097, 4901},{0x42, 0x95, 0x13, 0xFF}}},
	{{{4381, -350, 3690},0, {-5419, 4525},{0x62, 0xC7, 0x3A, 0xFF}}},
	{{{4535, -503, 3024},0, {-4097, 4525},{0x6B, 0xBE, 0x13, 0xFF}}},
	{{{4637, -196, 3024},0, {-4097, 4092},{0x7C, 0xED, 0x12, 0xFF}}},
	{{{4432, -145, 3690},0, {-5419, 4092},{0x72, 0xF3, 0x37, 0xFF}}},
	{{{4432, 161, 3690},0, {-5419, 3538},{0x72, 0xD, 0x37, 0xFF}}},
	{{{4637, 213, 3024},0, {-4097, 3538},{0x7B, 0x18, 0x12, 0xFF}}},
	{{{4432, 161, 3690},0, {-5419, 3538},{0x72, 0xD, 0x37, 0xFF}}},
	{{{4637, -196, 3024},0, {-4097, 4092},{0x7C, 0xED, 0x12, 0xFF}}},
	{{{4381, 366, 3690},0, {-5419, 3051},{0x62, 0x39, 0x39, 0xFF}}},
	{{{4483, 571, 3024},0, {-4097, 3051},{0x49, 0x67, 0xB, 0xFF}}},
	{{{4176, 571, 3690},0, {-5419, 2649},{0x26, 0x6F, 0x30, 0xFF}}},
	{{{4023, 213, 4151},0, {-6337, 2909},{0x23, 0x2D, 0x72, 0xFF}}},
	{{{4125, 110, 4151},0, {-6337, 3538},{0x3E, 0x17, 0x6D, 0xFF}}},
	{{{4432, -145, 3690},0, {-5419, 4092},{0x72, 0xF3, 0x37, 0xFF}}},
	{{{4125, -94, 4151},0, {-6337, 4525},{0x3E, 0xE9, 0x6D, 0xFF}}},
	{{{4381, -350, 3690},0, {-5419, 4525},{0x62, 0xC7, 0x3A, 0xFF}}},
	{{{4176, -554, 3690},0, {-5414, 4901},{0x3A, 0xA0, 0x3C, 0xFF}}},
	{{{4023, -196, 4151},0, {-6337, 5321},{0x19, 0xC8, 0x6F, 0xFF}}},
	{{{4023, -606, 3690},0, {-5419, 5321},{0x12, 0x91, 0x3C, 0xFF}}},
	{{{4023, -810, 3024},0, {-4106, 5321},{0x13, 0x84, 0x12, 0xFF}}},
	{{{3818, -810, 3024},0, {-4106, 5585},{0xED, 0x84, 0x12, 0xFF}}},
	{{{3818, -810, -47},0, {-20, 5585},{0xEC, 0x83, 0xF4, 0xFF}}},
	{{{4023, -810, -47},0, {-20, 5321},{0x14, 0x83, 0xF4, 0xFF}}},
	{{{3818, -606, -1071},0, {1548, 5633},{0xE5, 0x89, 0xDC, 0xFF}}},
	{{{4023, -606, -1071},0, {1548, 5273},{0x1B, 0x89, 0xDC, 0xFF}}},
	{{{4330, -708, -47},0, {-20, 4901},{0x43, 0x95, 0xF4, 0xFF}}},
	{{{4227, -503, -1071},0, {1548, 4865},{0x47, 0x9D, 0xDC, 0xFF}}},
	{{{4535, -503, -47},0, {-20, 4525},{0x6C, 0xBE, 0xF3, 0xFF}}},
	{{{4330, -401, -1071},0, {1548, 4600},{0x66, 0xBC, 0xDD, 0xFF}}},
	{{{4432, -145, -1071},0, {1548, 4079},{0x79, 0xEA, 0xDF, 0xFF}}},
	{{{4637, -196, -47},0, {-20, 4092},{0x7D, 0xEC, 0xF4, 0xFF}}},
	{{{4637, 213, -47},0, {-20, 3538},{0x7C, 0x19, 0xF4, 0xFF}}},
	{{{4432, 161, -1071},0, {1548, 3500},{0x79, 0x17, 0xE0, 0xFF}}},
	{{{4330, 417, -1071},0, {1548, 3037},{0x61, 0x4B, 0xDE, 0xFF}}},
	{{{4483, 571, -47},0, {-20, 3051},{0x49, 0x68, 0xF8, 0xFF}}},
	{{{4125, 571, -1071},0, {1548, 2631},{0x23, 0x77, 0xE5, 0xFF}}},
	{{{4483, 571, -47},0, {-20, 3051},{0x49, 0x68, 0xF8, 0xFF}}},
	{{{4330, 417, -1071},0, {1548, 3037},{0x61, 0x4B, 0xDE, 0xFF}}},
	{{{4483, 571, 3024},0, {-4106, 3051},{0x49, 0x67, 0xB, 0xFF}}},
	{{{4637, 213, -47},0, {-20, 3538},{0x7C, 0x19, 0xF4, 0xFF}}},
	{{{4637, 213, 3024},0, {-4106, 3538},{0x7B, 0x18, 0x12, 0xFF}}},
	{{{4637, -196, -47},0, {-20, 4092},{0x7D, 0xEC, 0xF4, 0xFF}}},
	{{{4637, -196, 3024},0, {-4106, 4092},{0x7C, 0xED, 0x12, 0xFF}}},
	{{{4535, -503, -47},0, {-20, 4525},{0x6C, 0xBE, 0xF3, 0xFF}}},
	{{{4535, -503, 3024},0, {-4106, 4525},{0x6B, 0xBE, 0x13, 0xFF}}},
	{{{4330, -708, -47},0, {-20, 4901},{0x43, 0x95, 0xF4, 0xFF}}},
	{{{4330, -708, 3024},0, {-4106, 4901},{0x42, 0x95, 0x13, 0xFF}}},
	{{{4023, -810, -47},0, {-20, 5321},{0x14, 0x83, 0xF4, 0xFF}}},
	{{{4023, -810, 3024},0, {-4106, 5321},{0x13, 0x84, 0x12, 0xFF}}},
	{{{3870, 110, -2351},0, {6535, 2095},{0xE7, 0x6D, 0xC4, 0xFF}}},
	{{{3716, 571, -1071},0, {4248, 1878},{0xDD, 0x77, 0xE5, 0xFF}}},
	{{{3971, 110, -2351},0, {6535, 2349},{0x2B, 0x69, 0xC7, 0xFF}}},
	{{{4125, 571, -1071},0, {4248, 2326},{0x23, 0x77, 0xE5, 0xFF}}},
	{{{4125, 571, -1071},0, {2174, 2631},{0x23, 0x77, 0xE5, 0xFF}}},
	{{{4330, 417, -1071},0, {2174, 3037},{0x61, 0x4B, 0xDE, 0xFF}}},
	{{{3971, 110, -2351},0, {4493, 2663},{0x2B, 0x69, 0xC7, 0xFF}}},
	{{{4023, 59, -2351},0, {4493, 2980},{0x6A, 0x2B, 0xC8, 0xFF}}},
	{{{4023, 571, 1977},0, {8176, 2237},{0x7E, 0x0, 0xF, 0xFF}}},
	{{{4023, 1185, 1976},0, {8176, 1367},{0x5C, 0x55, 0x13, 0xFF}}},
	{{{3972, 571, 2182},0, {7861, 2237},{0x49, 0xE, 0x67, 0xFF}}},
	{{{3972, 1185, 2080},0, {8011, 1367},{0x35, 0x54, 0x50, 0xFF}}},
	{{{3870, 571, 2182},0, {7861, 2237},{0xB7, 0xE, 0x67, 0xFF}}},
	{{{3870, 1185, 2080},0, {8011, 1367},{0xCB, 0x54, 0x50, 0xFF}}},
	{{{3818, 1185, 1976},0, {8176, 1367},{0xA4, 0x55, 0x13, 0xFF}}},
	{{{3818, 571, 1977},0, {8176, 2237},{0x82, 0x0, 0xF, 0xFF}}},
	{{{4023, 213, 4151},0, {4752, 137},{0x23, 0x2D, 0x72, 0xFF}}},
	{{{3818, 213, 4151},0, {4752, -159},{0xDD, 0x2D, 0x72, 0xFF}}},
	{{{4125, 110, 4151},0, {4901, 284},{0x3E, 0x17, 0x6D, 0xFF}}},
	{{{3715, 110, 4151},0, {4901, -308},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{3715, -94, 4151},0, {5196, -308},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{3818, -196, 4151},0, {5343, -159},{0xE7, 0xC8, 0x6F, 0xFF}}},
	{{{4023, -196, 4151},0, {5343, 137},{0x19, 0xC8, 0x6F, 0xFF}}},
	{{{4125, -94, 4151},0, {5196, 284},{0x3E, 0xE9, 0x6D, 0xFF}}},
	{{{4023, 571, 1977},0, {8559, 502},{0x7E, 0x0, 0xF, 0xFF}}},
	{{{4023, 1185, 1619},0, {10172, 1472},{0x5D, 0x54, 0xEB, 0xFF}}},
	{{{4023, 1185, 1976},0, {10172, 502},{0x5C, 0x55, 0x13, 0xFF}}},
	{{{4023, 571, 1619},0, {8559, 1472},{0x7C, 0x0, 0xE3, 0xFF}}},
	{{{4023, 571, 1619},0, {8427, 1692},{0x7C, 0x0, 0xE3, 0xFF}}},
	{{{3972, 1185, 1516},0, {10040, 1970},{0x35, 0x4D, 0xAA, 0xFF}}},
	{{{4023, 1185, 1619},0, {10040, 1692},{0x5D, 0x54, 0xEB, 0xFF}}},
	{{{3972, 571, 1516},0, {8427, 1970},{0x43, 0x0, 0x94, 0xFF}}},
	{{{3870, 571, 1516},0, {8427, 1970},{0xBD, 0x0, 0x94, 0xFF}}},
	{{{3972, 1185, 1516},0, {10040, 1970},{0x35, 0x4D, 0xAA, 0xFF}}},
	{{{3972, 571, 1516},0, {8427, 1970},{0x43, 0x0, 0x94, 0xFF}}},
	{{{3870, 1185, 1516},0, {10040, 1970},{0xCB, 0x4D, 0xAA, 0xFF}}},
	{{{3818, 1185, 1619},0, {10040, 1692},{0xA3, 0x54, 0xEA, 0xFF}}},
	{{{3818, 571, 1619},0, {8427, 1692},{0x84, 0x0, 0xE3, 0xFF}}},
	{{{3818, 1185, 1976},0, {10172, 502},{0xA4, 0x55, 0x13, 0xFF}}},
	{{{3818, 1185, 1619},0, {10172, 1472},{0xA3, 0x54, 0xEA, 0xFF}}},
	{{{3818, 571, 1619},0, {8559, 1472},{0x84, 0x0, 0xE3, 0xFF}}},
	{{{3818, 571, 1977},0, {8559, 502},{0x82, 0x0, 0xF, 0xFF}}},
	{{{3818, 392, 4151},0, {4654, 1282},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{3818, 213, 4151},0, {4290, 1282},{0xDD, 0x2D, 0x72, 0xFF}}},
	{{{4023, 213, 4151},0, {4290, 511},{0x23, 0x2D, 0x72, 0xFF}}},
	{{{3921, 392, 4151},0, {4654, 897},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{4023, 392, 4151},0, {4654, 511},{0x49, 0x49, 0x49, 0xFF}}},
	{{{4023, 392, 3921},0, {5124, 511},{0x49, 0x49, 0x49, 0xFF}}},
	{{{3921, 392, 4151},0, {4654, 897},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{4023, 392, 3921},0, {5124, 511},{0x49, 0x49, 0x49, 0xFF}}},
	{{{3921, 392, 3921},0, {5124, 897},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{3818, 392, 4151},0, {4654, 1282},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{3818, 392, 3921},0, {5124, 1282},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{3921, 392, 3921},0, {4970, 897},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{4023, 392, 3921},0, {4970, 511},{0x49, 0x49, 0x49, 0xFF}}},
	{{{4023, 571, 3921},0, {5334, 511},{0x49, 0x49, 0x49, 0xFF}}},
	{{{3921, 571, 3921},0, {5334, 897},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{3818, 392, 3921},0, {4970, 1282},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{3818, 571, 3921},0, {5334, 1282},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{3921, 571, 3921},0, {5660, 875},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{4023, 571, 3921},0, {5660, 490},{0x49, 0x49, 0x49, 0xFF}}},
	{{{4023, 571, 3690},0, {6098, 490},{0x31, 0x75, 0x0, 0xFF}}},
	{{{3921, 571, 3690},0, {6098, 875},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{4176, 571, 3690},0, {-5419, 2402},{0x26, 0x6F, 0x30, 0xFF}}},
	{{{3664, 571, 3690},0, {-5419, 1612},{0xDA, 0x6F, 0x30, 0xFF}}},
	{{{3818, 213, 4151},0, {-6337, 1627},{0xDD, 0x2D, 0x72, 0xFF}}},
	{{{4023, 213, 4151},0, {-6337, 2388},{0x23, 0x2D, 0x72, 0xFF}}},
	{{{3614, -503, -1071},0, {2174, 4865},{0xB9, 0x9D, 0xDC, 0xFF}}},
	{{{3870, -94, -2351},0, {4493, 4667},{0xD4, 0x98, 0xC6, 0xFF}}},
	{{{3818, -606, -1071},0, {2174, 5273},{0xE5, 0x89, 0xDC, 0xFF}}},
	{{{3818, -42, -2351},0, {4493, 4325},{0x91, 0xD4, 0xD4, 0xFF}}},
	{{{3511, -401, -1071},0, {2174, 4600},{0x9A, 0xBC, 0xDD, 0xFF}}},
	{{{3409, -145, -1071},0, {2174, 4079},{0x87, 0xEA, 0xDF, 0xFF}}},
	{{{3818, 59, -2351},0, {4493, 3540},{0x91, 0x2C, 0xD4, 0xFF}}},
	{{{3409, 161, -1071},0, {2174, 3500},{0x87, 0x17, 0xE0, 0xFF}}},
	{{{3511, 417, -1071},0, {2174, 3037},{0x9F, 0x4B, 0xDE, 0xFF}}},
	{{{3511, -708, 3024},0, {-4106, 4901},{0xBE, 0x95, 0x13, 0xFF}}},
	{{{3818, -810, -47},0, {-20, 5321},{0xEC, 0x83, 0xF4, 0xFF}}},
	{{{3818, -810, 3024},0, {-4106, 5321},{0xED, 0x84, 0x12, 0xFF}}},
	{{{3511, -708, -47},0, {-20, 4901},{0xBD, 0x95, 0xF4, 0xFF}}},
	{{{3818, -810, -47},0, {-20, 5321},{0xEC, 0x83, 0xF4, 0xFF}}},
	{{{3511, -708, 3024},0, {-4106, 4901},{0xBE, 0x95, 0x13, 0xFF}}},
	{{{3306, -503, 3024},0, {-4106, 4525},{0x95, 0xBE, 0x13, 0xFF}}},
	{{{3306, -503, -47},0, {-20, 4525},{0x94, 0xBE, 0xF3, 0xFF}}},
	{{{3204, -196, 3024},0, {-4106, 4092},{0x84, 0xED, 0x12, 0xFF}}},
	{{{3204, -196, -47},0, {-20, 4092},{0x83, 0xEC, 0xF4, 0xFF}}},
	{{{3204, 213, 3024},0, {-4106, 3538},{0x85, 0x18, 0x12, 0xFF}}},
	{{{3204, 213, -47},0, {-20, 3538},{0x84, 0x19, 0xF4, 0xFF}}},
	{{{3357, 571, 3024},0, {-4106, 3051},{0xB7, 0x67, 0xB, 0xFF}}},
	{{{3357, 571, -47},0, {-20, 3051},{0xB7, 0x68, 0xF8, 0xFF}}},
	{{{3511, 417, -1071},0, {1548, 3037},{0x9F, 0x4B, 0xDE, 0xFF}}},
	{{{3716, 571, -1071},0, {1548, 2631},{0xDD, 0x77, 0xE5, 0xFF}}},
	{{{3409, 161, -1071},0, {1548, 3500},{0x87, 0x17, 0xE0, 0xFF}}},
	{{{3409, -145, -1071},0, {1548, 4079},{0x87, 0xEA, 0xDF, 0xFF}}},
	{{{3511, -401, -1071},0, {1548, 4600},{0x9A, 0xBC, 0xDD, 0xFF}}},
	{{{3511, -401, -1071},0, {1548, 4600},{0x9A, 0xBC, 0xDD, 0xFF}}},
	{{{3614, -503, -1071},0, {1548, 4865},{0xB9, 0x9D, 0xDC, 0xFF}}},
	{{{3306, -503, -47},0, {-20, 4525},{0x94, 0xBE, 0xF3, 0xFF}}},
	{{{3511, -708, -47},0, {-20, 4901},{0xBD, 0x95, 0xF4, 0xFF}}},
	{{{3818, -606, -1071},0, {1548, 5273},{0xE5, 0x89, 0xDC, 0xFF}}},
	{{{3818, -810, -47},0, {-20, 5321},{0xEC, 0x83, 0xF4, 0xFF}}},
	{{{3716, 571, -1071},0, {2174, 2631},{0xDD, 0x77, 0xE5, 0xFF}}},
	{{{3870, 110, -2351},0, {4493, 2663},{0xAE, 0x56, 0xD4, 0xFF}}},
	{{{3511, 417, -1071},0, {2174, 3037},{0x9F, 0x4B, 0xDE, 0xFF}}},
	{{{3818, 59, -2351},0, {4493, 2980},{0x91, 0x2C, 0xD4, 0xFF}}},
	{{{3818, 571, 3921},0, {5660, 1421},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{3921, 571, 3921},0, {5660, 1036},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{3921, 571, 3690},0, {6098, 1036},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{3818, 571, 3690},0, {6098, 1421},{0xCF, 0x75, 0x0, 0xFF}}},
	{{{3818, -196, 4151},0, {-6337, 5321},{0xE7, 0xC8, 0x6F, 0xFF}}},
	{{{3665, -554, 3690},0, {-5414, 4901},{0xC6, 0xA0, 0x3C, 0xFF}}},
	{{{3818, -606, 3690},0, {-5419, 5321},{0xEE, 0x91, 0x3C, 0xFF}}},
	{{{3716, -94, 4151},0, {-6337, 4525},{0xA2, 0xDD, 0x4E, 0xFF}}},
	{{{3460, -350, 3690},0, {-5419, 4525},{0x9E, 0xC7, 0x3A, 0xFF}}},
	{{{3409, -145, 3690},0, {-5419, 4092},{0x8E, 0xF3, 0x37, 0xFF}}},
	{{{3716, 110, 4151},0, {-6337, 3538},{0xA2, 0x23, 0x4E, 0xFF}}},
	{{{3409, 161, 3690},0, {-5419, 3538},{0x8E, 0xD, 0x37, 0xFF}}},
	{{{3460, 366, 3690},0, {-5419, 3051},{0x9D, 0x38, 0x39, 0xFF}}},
	{{{3818, 213, 4151},0, {-6337, 2909},{0xDD, 0x2D, 0x72, 0xFF}}},
	{{{3664, 571, 3690},0, {-5419, 2649},{0xDA, 0x6F, 0x30, 0xFF}}},
	{{{3357, 571, 3024},0, {-4097, 3051},{0xB7, 0x67, 0xB, 0xFF}}},
	{{{3204, 213, 3024},0, {-4097, 3538},{0x85, 0x18, 0x12, 0xFF}}},
	{{{3204, -196, 3024},0, {-4097, 4092},{0x84, 0xED, 0x12, 0xFF}}},
	{{{3306, -503, 3024},0, {-4097, 4525},{0x95, 0xBE, 0x13, 0xFF}}},
	{{{3511, -708, 3024},0, {-4097, 4901},{0xBE, 0x95, 0x13, 0xFF}}},
	{{{3511, -708, 3024},0, {-4097, 4901},{0xBE, 0x95, 0x13, 0xFF}}},
	{{{3818, -810, 3024},0, {-4097, 5321},{0xED, 0x84, 0x12, 0xFF}}},
	{{{3665, -554, 3690},0, {-5414, 4901},{0xC6, 0xA0, 0x3C, 0xFF}}},
	{{{3818, -606, 3690},0, {-5419, 5321},{0xEE, 0x91, 0x3C, 0xFF}}},
	{{{3930, -503, -2248},0, {9982, 2392},{0x41, 0xB5, 0xB0, 0xFF}}},
	{{{3951, -503, -2146},0, {10152, 2392},{0x5C, 0xA9, 0xF7, 0xFF}}},
	{{{3930, -503, -1941},0, {10477, 2392},{0x41, 0xB5, 0x50, 0xFF}}},
	{{{3951, 520, -2146},0, {10152, 682},{0x5C, 0x57, 0xF7, 0xFF}}},
	{{{3930, 520, -2248},0, {9982, 682},{0x41, 0x4B, 0xB0, 0xFF}}},
	{{{3910, -503, -2248},0, {9982, 2392},{0xBF, 0xB5, 0xB1, 0xFF}}},
	{{{3890, -503, -2146},0, {10152, 2392},{0xA4, 0xA9, 0xF7, 0xFF}}},
	{{{3890, -503, -2044},0, {10323, 2392},{0xA4, 0xA9, 0x8, 0xFF}}},
	{{{3910, -503, -1941},0, {10477, 2392},{0xBF, 0xB5, 0x4F, 0xFF}}},
	{{{3910, 520, -1941},0, {10477, 682},{0xBF, 0x4B, 0x4F, 0xFF}}},
	{{{3930, 520, -1941},0, {10477, 682},{0x41, 0x4B, 0x50, 0xFF}}},
	{{{3951, -503, -2044},0, {10323, 2392},{0x5C, 0xA9, 0x9, 0xFF}}},
	{{{3951, -503, -2044},0, {10323, 2392},{0x5C, 0xA9, 0x9, 0xFF}}},
	{{{3951, -503, -2146},0, {10152, 2392},{0x5C, 0xA9, 0xF7, 0xFF}}},
	{{{3951, 520, -2044},0, {10323, 682},{0x5C, 0x57, 0x9, 0xFF}}},
	{{{3951, 520, -2146},0, {10152, 682},{0x5C, 0x57, 0xF7, 0xFF}}},
	{{{3930, 520, -1941},0, {10477, 682},{0x41, 0x4B, 0x50, 0xFF}}},
	{{{3910, 520, -1941},0, {10477, 682},{0xBF, 0x4B, 0x4F, 0xFF}}},
	{{{3890, 520, -2044},0, {10323, 682},{0xA4, 0x57, 0x8, 0xFF}}},
	{{{3890, 520, -2146},0, {10152, 682},{0xA4, 0x57, 0xF7, 0xFF}}},
	{{{3910, 520, -2248},0, {9982, 682},{0xBF, 0x4B, 0xB1, 0xFF}}},
	{{{3930, 520, -2248},0, {9982, 682},{0x41, 0x4B, 0xB0, 0xFF}}},
	{{{3910, -503, -2248},0, {9982, 2392},{0xBF, 0xB5, 0xB1, 0xFF}}},
	{{{3890, -503, -2146},0, {10152, 2392},{0xA4, 0xA9, 0xF7, 0xFF}}},
	{{{3890, -503, -2044},0, {10323, 2392},{0xA4, 0xA9, 0x8, 0xFF}}},
	{{{3910, -503, -1941},0, {10477, 2392},{0xBF, 0xB5, 0x4F, 0xFF}}},
	{{{3408, 39, -2044},0, {10323, 2392},{0xA9, 0x5C, 0x9, 0xFF}}},
	{{{3408, 39, -2146},0, {10152, 2392},{0xA9, 0x5C, 0xF7, 0xFF}}},
	{{{3408, 18, -1941},0, {10477, 2392},{0xB5, 0x41, 0x50, 0xFF}}},
	{{{4432, 39, -2146},0, {10152, 682},{0x57, 0x5C, 0xF7, 0xFF}}},
	{{{4432, 39, -2044},0, {10323, 682},{0x57, 0x5C, 0x9, 0xFF}}},
	{{{4432, 18, -1941},0, {10477, 682},{0x4B, 0x41, 0x50, 0xFF}}},
	{{{3408, -1, -1941},0, {10477, 2392},{0xB5, 0xBF, 0x50, 0xFF}}},
	{{{3408, -22, -2044},0, {10323, 2392},{0xA9, 0xA4, 0x9, 0xFF}}},
	{{{3408, -22, -2146},0, {10152, 2392},{0xA9, 0xA4, 0xF7, 0xFF}}},
	{{{3408, -1, -2248},0, {9982, 2392},{0xB5, 0xBF, 0xB0, 0xFF}}},
	{{{3408, 18, -2248},0, {9982, 2392},{0xB5, 0x41, 0xB0, 0xFF}}},
	{{{4432, 18, -2248},0, {9982, 682},{0x4B, 0x41, 0xB0, 0xFF}}},
	{{{4432, -22, -2044},0, {10323, 682},{0x57, 0xA4, 0x9, 0xFF}}},
	{{{4432, -1, -1941},0, {10477, 682},{0x4B, 0xBF, 0x50, 0xFF}}},
	{{{4432, -22, -2146},0, {10152, 682},{0x57, 0xA4, 0xF7, 0xFF}}},
	{{{4432, -1, -2248},0, {9982, 682},{0x4B, 0xBF, 0xB0, 0xFF}}},
};

Gfx submarine_1_dl_mesh_tri_2[] = {
	gsSPVertex(submarine_1_dl_mesh_vtx_2 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(submarine_1_dl_mesh_vtx_2 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(0, 3, 4, 0),
	gsSP1Triangle(0, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 6, 8, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(10, 8, 11, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(13, 12, 11, 0),
	gsSP1Triangle(13, 11, 14, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSPVertex(submarine_1_dl_mesh_vtx_2 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 3, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(9, 6, 8, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(13, 14, 11, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(submarine_1_dl_mesh_vtx_2 + 48, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(5, 6, 3, 0),
	gsSP1Triangle(6, 7, 3, 0),
	gsSP1Triangle(1, 3, 7, 0),
	gsSP1Triangle(1, 7, 8, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(9, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSPVertex(submarine_1_dl_mesh_vtx_2 + 62, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(6, 3, 5, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 11, 8, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(13, 12, 10, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 15, 12, 0),
	gsSPVertex(submarine_1_dl_mesh_vtx_2 + 78, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 4, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSPVertex(submarine_1_dl_mesh_vtx_2 + 92, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(submarine_1_dl_mesh_vtx_2 + 108, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(3, 4, 2, 0),
	gsSP1Triangle(4, 5, 2, 0),
	gsSP1Triangle(5, 6, 2, 0),
	gsSP1Triangle(6, 7, 2, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(submarine_1_dl_mesh_vtx_2 + 124, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(12, 13, 10, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(submarine_1_dl_mesh_vtx_2 + 140, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(5, 7, 8, 0),
	gsSP1Triangle(9, 5, 8, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSPVertex(submarine_1_dl_mesh_vtx_2 + 155, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 7, 4, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(9, 10, 7, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(submarine_1_dl_mesh_vtx_2 + 171, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(5, 4, 3, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(11, 8, 10, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(11, 13, 8, 0),
	gsSP1Triangle(13, 14, 8, 0),
	gsSP1Triangle(8, 14, 6, 0),
	gsSP1Triangle(14, 4, 6, 0),
	gsSP1Triangle(14, 15, 4, 0),
	gsSPVertex(submarine_1_dl_mesh_vtx_2 + 187, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSPVertex(submarine_1_dl_mesh_vtx_2 + 201, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 8, 6, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 11, 8, 0),
	gsSP1Triangle(11, 12, 8, 0),
	gsSP1Triangle(8, 12, 7, 0),
	gsSP1Triangle(12, 13, 7, 0),
	gsSP1Triangle(7, 13, 5, 0),
	gsSP1Triangle(13, 4, 5, 0),
	gsSP1Triangle(13, 14, 4, 0),
	gsSP1Triangle(14, 15, 4, 0),
	gsSP1Triangle(4, 15, 1, 0),
	gsSPVertex(submarine_1_dl_mesh_vtx_2 + 217, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 4, 7, 0),
	gsSP1Triangle(4, 8, 7, 0),
	gsSP1Triangle(4, 9, 8, 0),
	gsSP1Triangle(9, 4, 6, 0),
	gsSP1Triangle(10, 9, 6, 0),
	gsSP1Triangle(11, 10, 6, 0),
	gsSP1Triangle(12, 11, 6, 0),
	gsSP1Triangle(13, 12, 6, 0),
	gsSP1Triangle(14, 13, 6, 0),
	gsSP1Triangle(6, 15, 14, 0),
	gsSP1Triangle(5, 15, 6, 0),
	gsSPVertex(submarine_1_dl_mesh_vtx_2 + 233, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(4, 2, 3, 0),
	gsSP1Triangle(5, 4, 3, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(7, 6, 3, 0),
	gsSP1Triangle(8, 7, 3, 0),
	gsSP1Triangle(9, 8, 3, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(7, 8, 11, 0),
	gsSP1Triangle(7, 11, 12, 0),
	gsSP1Triangle(6, 7, 12, 0),
	gsSP1Triangle(6, 12, 13, 0),
	gsSP1Triangle(5, 6, 13, 0),
	gsSP1Triangle(0, 2, 4, 0),
	gsSPVertex(submarine_1_dl_mesh_vtx_2 + 247, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 0, 2, 0),
	gsSP1Triangle(5, 4, 2, 0),
	gsSP1Triangle(5, 2, 6, 0),
	gsSP1Triangle(7, 6, 2, 0),
	gsSP1Triangle(8, 7, 2, 0),
	gsSP1Triangle(9, 8, 2, 0),
	gsSP1Triangle(10, 9, 2, 0),
	gsSP1Triangle(1, 10, 2, 0),
	gsSP1Triangle(11, 10, 1, 0),
	gsSP1Triangle(3, 11, 1, 0),
	gsSP1Triangle(11, 3, 12, 0),
	gsSP1Triangle(3, 4, 12, 0),
	gsSP1Triangle(4, 5, 12, 0),
	gsSP1Triangle(5, 13, 12, 0),
	gsSP1Triangle(13, 5, 6, 0),
	gsSP1Triangle(6, 7, 13, 0),
	gsSP1Triangle(7, 12, 13, 0),
	gsSP1Triangle(7, 8, 12, 0),
	gsSP1Triangle(8, 14, 12, 0),
	gsSP1Triangle(8, 9, 14, 0),
	gsSP1Triangle(9, 15, 14, 0),
	gsSP1Triangle(9, 10, 15, 0),
	gsSP1Triangle(10, 11, 15, 0),
	gsSP1Triangle(15, 11, 12, 0),
	gsSP1Triangle(14, 15, 12, 0),
	gsSPEndDisplayList(),
};

Vtx submarine_1_dl_mesh_vtx_3[8] = {
	{{{4125, 571, -1071},0, {7996, 808},{0x23, 0x77, 0xE5, 0xFF}}},
	{{{3716, 571, -1071},0, {7996, -526},{0xDD, 0x77, 0xE5, 0xFF}}},
	{{{4483, 571, -47},0, {3917, 1977},{0x49, 0x68, 0xF8, 0xFF}}},
	{{{3357, 571, -47},0, {3917, -1696},{0xB7, 0x68, 0xF8, 0xFF}}},
	{{{3357, 571, 3024},0, {-7236, -1695},{0xB7, 0x67, 0xB, 0xFF}}},
	{{{3664, 571, 3690},0, {-9653, -694},{0xDA, 0x6F, 0x30, 0xFF}}},
	{{{4176, 571, 3690},0, {-9653, 976},{0x26, 0x6F, 0x30, 0xFF}}},
	{{{4483, 571, 3024},0, {-7236, 1977},{0x49, 0x67, 0xB, 0xFF}}},
};

Gfx submarine_1_dl_mesh_tri_3[] = {
	gsSPVertex(submarine_1_dl_mesh_vtx_3 + 0, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(3, 4, 2, 0),
	gsSP1Triangle(4, 5, 2, 0),
	gsSP1Triangle(5, 6, 2, 0),
	gsSP1Triangle(6, 7, 2, 0),
	gsSPEndDisplayList(),
};

Gfx submarine_1_dl_mesh[] = {
	gsSPDisplayList(mat_submarine_SubmarineMetalMaterial),
    gsSPSetLights1(submarine_SubmarineMetalMaterial_Variation1_lights),
	gsSPDisplayList(submarine_1_dl_mesh_tri_0),
	gsSPDisplayList(mat_submarine_SubmarineMetalMaterial),
    gsSPSetLights1(submarine_SubmarineMetalMaterial_Variation2_lights),
	gsSPDisplayList(submarine_1_dl_mesh_tri_1),
	gsSPDisplayList(mat_submarine_SubmarineMetalMaterial),
    gsSPSetLights1(submarine_SubmarineMetalMaterial_Variation3_lights),
	gsSPDisplayList(submarine_1_dl_mesh_tri_2),
	gsSPDisplayList(mat_submarine_SubmarineWoodMaterial),
	gsSPDisplayList(submarine_1_dl_mesh_tri_3),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};
