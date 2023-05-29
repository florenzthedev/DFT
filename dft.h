#ifndef DFT_H_INCLUDED
#define DFT_H_INCLUDED

#include <complex.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double complex* dft(double complex *x, double complex *X, int N);
void print_complex_set(double complex *x, int N);

#endif