#include <stdio.h>
int main(void) {
  float salario,c1,c2,restoSalario;
  salario = 1200.00;
  c1 = (300.00*0.02)+300.00;
  c2 = (140.00*0.02)+140.00;
  restoSalario = salario -c1-c2;
  printf("\n Vai sobrar %.2f",restoSalario);
  return 0;
}