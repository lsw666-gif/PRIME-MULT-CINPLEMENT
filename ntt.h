#ifndef NTT_H
#define NTT_H

#include <stdint.h>

#define MONT -917984     // MONT = pow(2,32,8949761) print("MONT:", MONT - 8949761) //2^16 mod q
#define QINV 1350004737  // QINV = pow(8949761,-1,2**32) //q^-1 mod 2^16
#define NQINV 2944962559 // NQINV =
#define KYBER_Q 8949761
#define ROOT_OF_UNITY 10666

int32_t montgomery_reduce(int64_t a);

int32_t barrett_reduce(int32_t a);

void ntt(int32_t poly[4096]);

void invntt(int32_t poly[4096]);

int32_t barrett_reduce(int32_t a);

void basemul(int32_t r[2], const int32_t a[2], const int32_t b[2], int32_t psai);

void basemul_montgomery(int32_t* r, const int32_t* a, const int32_t* b);

#endif
