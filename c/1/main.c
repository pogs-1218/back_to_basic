#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

/*
// 1. (C99) Declarations don't have to come before statements.
//   * test with the old compiler(gcc < 4.5)
//   * https://gcc.gnu.org/c99status.html

// 2. f(void) vs f()
//   in declaration, f(void) means that 'no parameters' but f() means that 'unspecified number of parameters'
//   in definition, both of them, 'no parameters'
//   * ref: https://github.com/torvalds/linux/blob/5b7c4cabbb65f5c469464da6c5f614cbd7f730f2/include/sound/aci.h#L88
//   Q. Is there a different object file produced by a compiler?
//   * Rule of thumb: Use f(void)!
//  Check. -Wstrict-prototypes

// 3. floating type precision
//  Q. What's the meaning of single-precision, double-precision.
//  Check. IEEE Floating-Point Standard (IEEE Standard 754, IEC 60559)

2023-02-22 TODO
 1. Download and install old version gcc compilers.
 2. Compile and run it with c89 features only.
*/

int main(void) {
  printf("%ld\n", sizeof(int)); 
  printf("%d\n", INT_MAX);
  printf("%d\n", INT_MIN);

  int a = 10;
  printf("%x\n", a);
  printf("%o\n", a);
  printf("%d\n", a);

  // overflow test
  int b = INT_MAX;
  printf("%d\n", ++b);
  printf("%d\n", ++b);

  // max of char c: 128 -> alloc 255(already overflow)
  // tips: use signed char or unsigned char instead of char.
  char c = UCHAR_MAX;
  printf("%d\n", ++c);

  unsigned char uc = UCHAR_MAX;
  printf("%d\n", ++uc);
  
  return 0;
}
