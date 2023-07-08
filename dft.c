// Copyright (c) 2023 Zachary Todd Edwards
// MIT License

#include "dft.h"

#include <assert.h>
#include <stdlib.h>
#include <string.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int fourier_transform(double complex* X, long N) {
  assert(X != NULL);
  double complex* x = malloc(sizeof(double complex) * N);
  if(x == NULL) return -1;
  memcpy(x, X, sizeof(double complex) * N);
  memset(X, 0, sizeof(double complex) * N);
  dft(x, X, N);
  free(x);
  return 0;
}

void dft(double complex* x, double complex* X, long N) {
  for (int k = 0; k < N; k++)
    for (int n = 0; n < N; n++)
      X[k] += x[n] * cexp(-(((I * 2 * M_PI) / N) * k * n));
}