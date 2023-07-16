#include <stdio.h>
int main(void) {
  float pesoI,pesoF1,pesoF2

  printf("\nInforme seu peso:\n");
  scanf("%f", &pesoI);
  pesoF1=(pesoI*0.15)+pesoI;
  pesoF2=(pesoI*0.20)+pesoI;

  printf("\nSeu novo peso após engordar 15%% é: %f\n", pesoF1);
  printf("\nSeu novo peso após engordar 20%% é: %f\n", pesoF2);
  return 0;
}