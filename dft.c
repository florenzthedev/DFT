#include "dft.h"
#include <stdio.h>
#include <stdlib.h>

double complex* dft(double complex *x, double complex *X, int N){
  for(int i = 0; i < N; i++)
    X[i] = CMPLX(0.0, 0.0);

  for(int k = 0; k < N; k++)
    for(int n = 0; n < N; n++)
      X[k] += x[n] * cexp(-(((I * 2 * M_PI) / N) * k * n));

  return X;
}

void print_complex_set(double complex *x, int N){
  printf("{");
  printf("%.1f%+.1fi", creal(x[0]), cimag(x[0]));
  for(int i = 1; i < N; i++)
    printf(", %.1f%+.1fi", creal(x[i]), cimag(x[i]));
  printf("}\n");
}