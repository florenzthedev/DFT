# DFT
An implementation of the conventional Discrete Fourier Transform algorithm in C

Can be built by running `make`, requires a C99 compiler (not VC++). Run using `dft [filename]` where the file contains a list of complex numbers formatted as `[real],[imaginary]` with one per line. An example with a 3hz sine wave sampled at 8hz is in `3hz.csv`. The example input set from the Wikipedia page on the DFT is in `test.csv`.
