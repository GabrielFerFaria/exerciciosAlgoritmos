#include <stdio.h>
#include <math.h>

int main(void) {
  int num;
    printf("\nInsira um número: \n");
    scanf("%i", &num);
    if(num>0){
      num=pow(num,2);
      printf("\nO valor quadrado do número é: %i\n", num);
    }
    else if(num==0){
      printf("\nSeu número é zero\n");
    }
    else{
      num=num*3;
      printf("\nO valor triplo do número é: %i\n", num);
    }
  return 0;
}