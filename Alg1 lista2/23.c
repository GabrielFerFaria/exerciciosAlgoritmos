#include <stdio.h>
#include <stdlib.h>
int main (void){
  float volume, agua, suco, vodka;
  printf("Informe a quantia de bebida que será feita ");
  scanf("%f", &volume);
  volume = volume / 7,
  agua= volume * 4,
  suco= volume * 2,
  vodka= volume * 1,
  printf("Para fazer a bebida é  necessário  %.2f litros de agua   %.2f litros de suco %.2f litros de vodka", agua,suco, vodka);
  return 0;
}