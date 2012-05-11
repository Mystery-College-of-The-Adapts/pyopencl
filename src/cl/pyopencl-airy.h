//  Ported from Cephes by
//  Andreas Kloeckner (C) 2012
//
// Cephes Math Library Release 2.8:  June, 2000
// Copyright 1984, 1987, 1989, 1992, 2000 by Stephen L. Moshier
// What you see here may be used freely, but it comes with no support or
// guarantee.

#pragma once

#include <pyopencl-cephes.h>

__constant const double airy_maxairy = 103.892;

__constant const double airy_sqrt3 = 1.732050807568877293527;
__constant const double airy_sqpii = 5.64189583547756286948E-1;

__constant const double airy_c1 = 0.35502805388781723926;
__constant const double airy_c2 = 0.258819403792806798405;

__constant const unsigned short AN[32] = {
0x3fd6,0x2dae,0x2537,0xb658,
0x4028,0x03e3,0x871a,0x9067,
0x4053,0x11e5,0x0de2,0xe1e3,
0x4065,0x02da,0xee40,0x073c,
0x4063,0xf834,0x5ba1,0xfddf,
0x4051,0xa24f,0x4f4c,0xea4f,
0x402c,0x0d8d,0x5c2a,0x0f4d,
0x3ff0,0x0000,0x0000,0x0000,
};
__constant const unsigned short AD[32] = {
0x3fe2,0x29bc,0x0262,0x4d31,
0x402d,0x8334,0x0533,0x2ca5,
0x4055,0x20e3,0xb04d,0x51a0,
0x4066,0x2a2d,0xc730,0xb7b0,
0x4064,0x8782,0x9a9f,0xfa61,
0x4051,0xde94,0xee91,0xd35f,
0x402c,0x311b,0x950d,0x9d81,
0x3ff0,0x0000,0x0000,0x0000,
};

__constant const unsigned short APN[32] = {
0x3fe3,0xa3ea,0x4d4c,0xab3e,
0x402d,0x7dad,0xdc67,0x2bcf,
0x4054,0x83bd,0x0724,0xa9a6,
0x4065,0x65e9,0xba99,0xc9ba,
0x4063,0xea2b,0xcdc2,0x64d7,
0x4051,0x7e95,0x41d4,0x1646,
0x402b,0xe4e8,0x6aa7,0x4099,
0x3ff0,0x0000,0x0000,0x0000,
};
__constant const unsigned short APD[32] = {
0x3fd5,0x6397,0xd288,0xd5b3,
0x4026,0x5caf,0xedc9,0x327e,
0x4051,0xcb0e,0x1800,0x97e6,
0x4063,0xd8e6,0x1132,0xdbd1,
0x4063,0x269b,0x0dcb,0x3316,
0x4051,0x2b36,0xf9d0,0xf72f,
0x402b,0xb321,0x4e35,0x7982,
0x3ff0,0x0000,0x0000,0x0000,
};

__constant const unsigned short BN16[20] = {
0xbfd0,0x3518,0xe211,0x6751,
0x3fe2,0x68bc,0x7072,0x2383,
0xbfd5,0x1d32,0x6785,0xcf29,
0x3fb0,0x7f2a,0xa027,0x78a8,
0xbf6f,0x5604,0x2dba,0xcd1b,
};
__constant const unsigned short BD16[20] = {
/*0x3ff0,0x0000,0x0000,0x0000,*/
0xc01c,0xa09d,0x891b,0xab58,
0x4025,0x3539,0xfe0b,0x1101,
0xc014,0xee0b,0xa9a7,0x70e8,
0x3fee,0xa2fc,0xa6da,0x95ff,
0xbfac,0x33d0,0x8f8e,0x86c9,
};

__constant const unsigned short BPPN[20] = {
0x3fdd,0xca1d,0x9deb,0x377b,
0xbff1,0x7051,0xc6be,0xe420,
0x3fe4,0x710c,0xf199,0x5ff3,
0xbfc0,0x3c6f,0x8681,0xa8fa,
0x3f7f,0x3b43,0xb8ce,0xb896,
};
__constant const unsigned short BPPD[20] = {
/*0x3ff0,0x0000,0x0000,0x0000,*/
0xc021,0x6996,0xb340,0xbc45,
0x402b,0xcc73,0x2ea4,0xbb8b,
0xc01c,0x908c,0xa04a,0xed59,
0x3ff5,0x70fd,0xf9a5,0x70a9,
0xbfb4,0x13d0,0x1b60,0x52e8,
};

__constant const unsigned short AFN[36] = {
0xbfc0,0xdb6c,0xd50a,0xe6fb,
0xbfe4,0x0bee,0x9856,0x6852,
0xbfe6,0x2e59,0xc2f7,0x9f7d,
0xbfd1,0xe7ea,0x4bb3,0xf40b,
0xbfa9,0x2f6e,0xf47d,0xbd8a,
0xbf70,0xa401,0xc8d9,0xe090,
0xbf24,0xe06e,0xaf4b,0x009c,
0xbec7,0x4a78,0x1d42,0x366d,
0xbe52,0x041c,0xf68e,0xa2d2,
};
__constant const unsigned short AFD[36] = {
/*0x3ff0,0x0000,0x0000,0x0000,*/
0x402a,0xb64b,0x2572,0xedf2,
0x4040,0x575c,0x4478,0x7b1a,
0x403a,0xbc98,0xa3b7,0x3410,
0x4022,0x5fc8,0x2ac9,0x9873,
0x3ff7,0x9acb,0x39de,0x9319,
0x3fbd,0x9dac,0xb404,0x5a2b,
0x3f72,0x08ca,0xe03a,0xf617,
0x3f13,0xc8d7,0xaf76,0xe73b,
0x3e9e,0x52b9,0xb995,0x18a7,
};

__constant const unsigned short AGN[44] = {
0x3f94,0x3525,0xddcf,0xbbde,
0x3fd9,0x07d5,0x0064,0x37b7,
0x3ff1,0x0d83,0x3a20,0x34eb,
0x3fee,0x0dac,0xa0ef,0x1acb,
0x3fd6,0x7e69,0xcea8,0xfe1d,
0x3fb0,0x3a41,0x21e9,0x0978,
0x3f77,0xfe99,0xf12f,0x5043,
0x3f32,0x8976,0x600e,0x17a2,
0x3edd,0x4f3d,0x69f8,0x574e,
0x3e75,0xca92,0xbbad,0x11c8,
0x3df7,0x78a4,0x7d97,0xee7a,
};
__constant const unsigned short AGD[40] = {
/*0x3ff0,0x0000,0x0000,0x0000,*/
0x4022,0x9e2b,0xf3d5,0x6b40,
0x4033,0xd5d5,0xc0ef,0x18d4,
0x402f,0x211b,0x7ea7,0xdc35,
0x4015,0xe84e,0x2b79,0xdbce,
0x3fee,0x8992,0xc195,0xece3,
0x3fb6,0x221d,0xed64,0xa9ee,
0x3f70,0xe704,0x6be3,0x93bb,
0x3f1a,0x8b61,0xd603,0xa5a0,
0x3eb3,0xa845,0xdb07,0x24e8,
0x3e35,0x1fc7,0x3dd5,0x89d4,
};

__constant const unsigned short APFN[36] = {
0x3fc7,0xba0f,0x8e7d,0x5db5,
0x3fec,0x5ff2,0x3d14,0xd07e,
0x3fef,0x98b7,0x11be,0x01af,
0x3fd9,0xadef,0x1397,0x84a1,
0x3fb2,0x2f0d,0xeadc,0x33d1,
0x3f78,0x3115,0xe347,0xa140,
0x3f2e,0x8be8,0x5d03,0x8059,
0x3ed1,0x2495,0x9f80,0x12af,
0x3e5a,0xab6a,0x654d,0x7d86,
};
__constant const unsigned short APFD[36] = {
/*0x3ff0,0x0000,0x0000,0x0000,*/
0x402d,0x781b,0x9628,0xcc60,
0x4042,0xc56d,0x2524,0x0e31,
0x403f,0x773d,0x09cc,0xffb8,
0x4025,0xfe6b,0x5163,0x03f7,
0x3ffc,0x9f21,0xc07a,0xc9fd,
0x3fc2,0x2450,0xe40e,0xf796,
0x3f76,0x48f2,0x3a5a,0x351a,
0x3f18,0xa059,0x7cfb,0x63a1,
0x3ea2,0xfdb8,0x5a24,0x1e2e,
};

__constant const unsigned short APGN[44] = {
0xbfa2,0x351f,0x5f87,0xaf5b,
0xbfe4,0x64db,0x1ff7,0x5c76,
0xbffb,0x564a,0xc221,0x7e49,
0xbff8,0x0916,0x7f6e,0x0b07,
0xbfe2,0x0910,0xd8b0,0x6edb,
0xbfba,0x234b,0x0d8c,0x9903,
0xbf83,0x6c54,0x7f6c,0x50df,
0xbf3e,0x2afa,0x2424,0x2ad0,
0xbee7,0xf87a,0xbc17,0xf631,
0xbe81,0xe81f,0x501e,0x6c10,
0xbe03,0x5f45,0x5e46,0x870d,
};
__constant const unsigned short APGD[40] = {
/*0x3ff0,0x0000,0x0000,0x0000,*/
0x4023,0xb7a2,0x060a,0x9812,
0x4035,0xa3e3,0x4724,0xfc96,
0x4031,0x5025,0xdb2c,0x819a,
0x4018,0xb702,0xd5cd,0x94e2,
0x3ff1,0x6a71,0x4927,0x1eb1,
0x3fb9,0x78de,0x4ad7,0x7bc5,
0x3f73,0x991a,0x4b2b,0xc1d7,
0x3f1e,0xf98f,0x0b16,0xbe1c,
0x3eb7,0x10bf,0xfdde,0x4ef3,
0x3e38,0xe834,0x9dc8,0x647e,
};

int airy( double x, double *ai, double *aip, double *bi, double *bip )
{
  typedef __constant const double *data_t;
  double z, zz, t, f, g, uf, ug, k, zeta, theta;
  int domflg;

  domflg = 0;
  if( x > airy_maxairy )
  {
    *ai = 0;
    *aip = 0;
    *bi = DBL_MAX;
    *bip = DBL_MAX;
    return(-1);
  }

  if( x < -2.09 )
  {
    domflg = 15;
    t = sqrt(-x);
    zeta = -2.0 * x * t / 3.0;
    t = sqrt(t);
    k = airy_sqpii / t;
    z = 1.0/zeta;
    zz = z * z;
    uf = 1.0 + zz * cephes_polevl( zz, (data_t) AFN, 8 ) / cephes_p1evl( zz, (data_t) AFD, 9 );
    ug = z * cephes_polevl( zz, (data_t) AGN, 10 ) / cephes_p1evl( zz, (data_t) AGD, 10 );
    theta = zeta + 0.25 * M_PI;
    f = sin( theta );
    g = cos( theta );
    *ai = k * (f * uf - g * ug);
    *bi = k * (g * uf + f * ug);
    uf = 1.0 + zz * cephes_polevl( zz, (data_t) APFN, 8 ) / cephes_p1evl( zz, (data_t) APFD, 9 );
    ug = z * cephes_polevl( zz, (data_t) APGN, 10 ) / cephes_p1evl( zz, (data_t) APGD, 10 );
    k = airy_sqpii * t;
    *aip = -k * (g * uf + f * ug);
    *bip = k * (f * uf - g * ug);
    return(0);
  }

  if( x >= 2.09 )       /* cbrt(9) */
  {
    domflg = 5;
    t = sqrt(x);
    zeta = 2.0 * x * t / 3.0;
    g = exp( zeta );
    t = sqrt(t);
    k = 2.0 * t * g;
    z = 1.0/zeta;
    f = cephes_polevl( z, (data_t) AN, 7 ) / cephes_polevl( z, (data_t) AD, 7 );
    *ai = airy_sqpii * f / k;
    k = -0.5 * airy_sqpii * t / g;
    f = cephes_polevl( z, (data_t) APN, 7 ) / cephes_polevl( z, (data_t) APD, 7 );
    *aip = f * k;

    if( x > 8.3203353 ) /* zeta > 16 */
    {
      f = z * cephes_polevl( z, (data_t) BN16, 4 ) / cephes_p1evl( z, (data_t) BD16, 5 );
      k = airy_sqpii * g;
      *bi = k * (1.0 + f) / t;
      f = z * cephes_polevl( z, (data_t) BPPN, 4 ) / cephes_p1evl( z, (data_t) BPPD, 5 );
      *bip = k * t * (1.0 + f);
      return(0);
    }
  }

  f = 1.0;
  g = x;
  t = 1.0;
  uf = 1.0;
  ug = x;
  k = 1.0;
  z = x * x * x;
  while( t > DBL_EPSILON )
  {
    uf *= z;
    k += 1.0;
    uf /=k;
    ug *= z;
    k += 1.0;
    ug /=k;
    uf /=k;
    f += uf;
    k += 1.0;
    ug /=k;
    g += ug;
    t = fabs(uf/f);
  }
  uf = airy_c1 * f;
  ug = airy_c2 * g;
  if( (domflg & 1) == 0 )
    *ai = uf - ug;
  if( (domflg & 2) == 0 )
    *bi = airy_sqrt3 * (uf + ug);

  /* the deriviative of ai */
  k = 4.0;
  uf = x * x/2.0;
  ug = z/3.0;
  f = uf;
  g = 1.0 + ug;
  uf /= 3.0;
  t = 1.0;

  while( t > DBL_EPSILON )
  {
    uf *= z;
    ug /=k;
    k += 1.0;
    ug *= z;
    uf /=k;
    f += uf;
    k += 1.0;
    ug /=k;
    uf /=k;
    g += ug;
    k += 1.0;
    t = fabs(ug/g);
  }

  uf = airy_c1 * f;
  ug = airy_c2 * g;
  if( (domflg & 4) == 0 )
    *aip = uf - ug;
  if( (domflg & 8) == 0 )
    *bip = airy_sqrt3 * (uf + ug);
  return(0);
}
