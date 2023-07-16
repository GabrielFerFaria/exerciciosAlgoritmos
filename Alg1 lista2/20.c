#include <stdio.h>
  int main(void) {
  	float lata,garrafa600,garrafa2l,total;

    printf("\nDigite a quantidade de latas de 350ml:\n");
    scanf("%f", &lata);
    printf("\nDigite a quantidade de garrafas de 600ml:\n");
    scanf("%f", &garrafa600);
    printf("\nDigite a quantidade de garrafas de 2l:\n");
    scanf("%f", &garrafa2l);
    total=lata*0.350+garrafa600*0.600+garrafa2l*2;
    printf("\nTotal: %f litros\n", total);
  return 0;
}