#include <stdio.h>
  int main(void) {
  	float queijo,presunto,hamburguer,sanduba;

    printf("Quantos sanduíches vai fazer?\n");
    scanf("%f", &sanduba);
    queijo=50;
    presunto=50;
    hamburguer=100;
    queijo=(queijo*sanduba)/1000;
    presunto=(presunto*sanduba)/1000;
    hamburguer=(hamburguer*sanduba)/1000;
    printf("\nSão necessários %f quilos de queijo, %f quilos de presunto, %f quilos de hamburguer\n", queijo,presunto,hamburguer);
  return 0;
}