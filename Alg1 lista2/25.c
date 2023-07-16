#include <stdio.h>
  int main(void) {
  	float salario,venda,total;

    printf("\nQual o salario fixo da rede capivara: \n");
    scanf("%f", &salario);
    printf("\nQuantas vendas foram feita: \n");
    scanf("%f", &venda);
    total=salario + salario * 3 / 100 * venda;
    printf("\nSeu salario no final do mês é de: %f\n", total);
  return 0;
}