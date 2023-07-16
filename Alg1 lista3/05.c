#include <stdio.h>
int main(void){
  int codigo;
  printf("\nDigite o código do produto\n");
  scanf("%i", &codigo);
  switch(codigo){
    case 1:
      printf("\nAlimento perecivel.\n");
    break;
    case 2 ... 3:
      printf("\nAlimento não perecivel.\n");
    break;
    case 4 ... 6:
      printf("\nVestuário.\n");
    break;
    case 7:
      printf("\nHigiene pessoal.\n");
    break;
    case 8 ... 12:
      printf("\nLimpeza.\n");
    break;
    default:
     printf("Invalido!");
    break;
  }
}
