#include <stdio.h>
#include <stdlib.h>
#include "dft.h"

#define MAX_SAMPLES 127

int main(int argc, char *argv[]){
  if(argc != 2){
    printf("Usage %s [filename]\n",argv[0]);
    return EXIT_FAILURE;
  }

  FILE* fp = fopen(argv[1], "r");
  if(fp == NULL){
    printf("Error opening file.");
    return EXIT_FAILURE;
  }

  double complex x[MAX_SAMPLES];
  double temp_real, temp_imag;
  int N = 0;
  while(fscanf(fp, "%lf,%lf", &temp_real, &temp_imag) > 0 
        && N < MAX_SAMPLES) {
        x[N++] = CMPLX(temp_real,temp_imag);
    }
  fclose(fp);

  double complex X[N];
  dft(x,X,N);

  printf("%s\nx: ",argv[1]);
  print_complex_set(x,N);
  printf("X: ");
  print_complex_set(X,N);

  return EXIT_SUCCESS;
}
