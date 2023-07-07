#ifndef DFT_H_INCLUDED
#define DFT_H_INCLUDED

#include <complex.h>

void fourier_transform(double complex *X, long N);
void dft(double complex* x, double complex* X, long N);

#endif