#include <stdio.h>
int main(void) {
  float salMinimo,salPessoa,num;
  printf("\nDigite o valor do salário mínimo:\n");
  scanf("%f",&salMinimo);
  printf("\nDigite o valor do salário da pessoa\n");
  scanf("%f", &salPessoa);
  num=salPessoa/salMinimo;
  printf("\nA pessoa ganha %f salários mínimos.\n", num);
  return 0;
}