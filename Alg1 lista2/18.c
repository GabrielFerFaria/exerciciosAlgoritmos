#include <stdio.h>
  int main(void) {
  	float salarioDi,salarioEx,salarioLi,salarioBr,horasD,horasEx;
    printf("\nDigite a quantidade de horas diárias: \n");
    scanf("%f", &horasD);
    printf("\nDigite a quantidade de horas extras:\n");
    scanf("%f",&horasEx);
    salarioDi=(horasD*10);
    salarioEx=((horasEx*15)*48/12),
    salarioBr=(salarioEx+(salarioDi*365)/12);
    salarioLi=(salarioBr-(salarioBr*10)/100);
    printf("\nSeu salário bruto é: %f\n", salarioBr);
    printf("\nSeu salário líquido é: %f\n", salarioLi);
  return 0;
}