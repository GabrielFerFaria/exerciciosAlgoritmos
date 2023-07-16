#include <stdio.h>
int main(void){
  float media=0,i,num, x=0;
  printf("Digite 10 números: \n");
  for (i=0;i<10;i++){
    scanf("%f",&num);  
    media=media+num;
    x++;
  }
  media=media/x;
  printf("\nA média é: %.1f",media);

  return 0;
}