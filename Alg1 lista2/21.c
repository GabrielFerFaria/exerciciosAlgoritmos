#include <stdio.h>
  int main(void) {
  	float moeda5,moeda10,moeda25,moeda50,moeda1real,total;

    printf("\nQuantas moedas de 5 centavos?\n");
    scanf("%f", &moeda5);
    printf("\nQuantas moedas de 10 centavos?\n");
    scanf("%f", &moeda10);
    printf("\nQuantas moedas de 25 centavos?\n");
    scanf("%f", &moeda25);
    printf("\nQuantas moedas de 50 centavos?\n");
    scanf("%f", &moeda50);
    printf("\nQuantas moedas de 1 real?\n");
    scanf("%f", &moeda1real);
    total=(moeda5*0.05)+(moeda10*0.10)+(moeda25*0.25)+(moeda50*0.50)+ moeda1real;
    printf("\nVocê tem %.2f reais em moedas\n", total);
  return 0;
}