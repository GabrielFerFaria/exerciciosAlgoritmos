#include <stdio.h>
  int main(void) {
  	float frango,anelC,anelA,custoFrango;
    printf("\nQuantos frangos vão ser marcados?\n");
    scanf("%f", &frango);
    anelC=4.0;
    anelA=3.50;
    custoFrango=(anelC+anelA)*frango;
    printf("\nVão gastar um total de %f reais marcando os frangos da granja!\n", custoFrango);
  return 0;
}