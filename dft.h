// Copyright (c) 2023 Zachary Todd Edwards
// MIT License

#ifndef DFT_H_INCLUDED
#define DFT_H_INCLUDED

#include <complex.h>

/**
 * @brief Performs the Fourier transform. This interface is intended to be used
 * with dynamic loading. This function will handle copying the input dataset for
 * the DFT and do some simple error checking.
 *
 * @param X Input dataset, will be overwritten by results.
 * @param N Size of input dataset.
 *
 * @return  0 on success, -1 on failure (usually malloc failed).
 */
int fourier_transform(double complex* X, long N);

/**
 * @brief The Discrete Fourier Transform. Used for frequency analysis on
 * waveform samples. This is an implementation of the conventional DFT, which
 * takes O(N^2) time. This implementation is intended for benchmarking and is
 * likely not optimal. This implementation does not require the input be a power
 * of two in size.
 *
 * @param x Input dataset
 * @param X Array to store results in, must be the same size as x
 * @param N Size of the input and output datasets.
 */
void dft(double complex* x, double complex* X, long N);

#endif