#include <stdio.h>
int main(void) {
  char cargo ;
  float salario ;

  printf("\n\nInforme seu cargo: \n\n");
  printf("\n[1] Tecnico");
  printf("\n[2] Gerente");
  printf("\n[3] Demais\n");
   printf("\n\n\n");
  scanf("%c", &cargo);
  printf("\nsalario:\n");
  scanf("%f", &salario);

  switch(cargo){
    case '1':
      salario = salario + (salario*0.5);
      printf("\nSeu novo salário é: R$ %.2f", salario );
    break;
    case '2':
      salario = salario + (salario*0.3);
      printf("\nSeu novo salário é: R$ %.2f", salario );
    break;
    case '3':
      salario = salario + (salario*0.2);
      printf("\nSeu novo salário é: R$ %.2f", salario );
    break;
    default:
    printf("\nOpção inválida!");
    break;
  }

return 0;
}