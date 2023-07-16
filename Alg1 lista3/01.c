#include <stdio.h>

int main(void) {
  int num1,num2,dif;
  printf("\nInsira um valor:\n");
  scanf("%i", &num1);
  printf("\nInsira outro valor:\n");
  scanf("%i", &num2);
  dif=num1-num2;
  if(num1<num2){
    dif=dif*(-1);
    printf("\nA diferença entre os valores é: %i\n", dif);
  }
  else{
    printf("\nA diferença entre os valores é %i\n", dif);
  }
  return 0;
}