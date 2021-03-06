/**
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */

typedef union __mingw_ldbl_type_t
{
  long double x;
  __extension__ struct {
    unsigned int low, high;
    int sign_exponent : 16;
    int res1 : 16;
    int res0 : 32;
  } lh;
} __mingw_ldbl_type_t;

typedef union __mingw_fp_types_t
{
  long double *ld;
  __mingw_ldbl_type_t *ldt;
} __mingw_fp_types_t;

#define __FP_SIGNBIT  0x0200
int __signbitl (long double x);


int __signbitl (long double x) {
#ifdef __x86_64
    __mingw_fp_types_t ld;
    ld.ld = &x;
    return ((ld.ldt->lh.sign_exponent & 0x8000) != 0);
#else
  unsigned short sw;
  __asm__ __volatile__ ("fxam; fstsw %%ax;"
	   : "=a" (sw)
	   : "t" (x) );
  return (sw & __FP_SIGNBIT) != 0;
#endif
}

int __attribute__ ((alias ("__signbitl"))) signbitl (long double);
