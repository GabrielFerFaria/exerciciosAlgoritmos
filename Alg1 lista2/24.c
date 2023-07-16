#include <stdio.h>
int main(void) {
  float produto, final;
  printf("\n Informe o valor do produto \n");
  scanf("%f", &produto);
  final = (produto * 10) / 100;
  produto = produto  - final;
  printf("\n O valor do produto com desconto é %.2f", produto);
  return 0;
}