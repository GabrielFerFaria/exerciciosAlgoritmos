#include <stdio.h>
int main(void) {
  int num ;
  printf("\nInforme um número:\n");
  scanf("%i", &num);

  switch(num){
    case 0 ... 24 :
      printf("\nSeu número está no primeiro intervalo");
    break;
    case 25:
      printf("\nSeu número está no primeiro e no segundo intervalo");
    break;
    case 26 ... 49 :
      printf("\nSeu número está no segundo intervalo");
    break;
    case 50:
      printf("\nSeu número está no segundo e no terceiro intervalo");
    break;
    case 51 ... 74 :
      printf("\nSeu número está no terceiro intervalo");
    break;
    case 75:
      printf("\nSeu número está no teceiro e no quarto intervalo");
    break;
    case 76 ... 100 :
      printf("\nSeu número está no quarto intervalo");
    break;
    default:
      printf("\nFora do intervalo");
    break;
  }
return 0;
}
