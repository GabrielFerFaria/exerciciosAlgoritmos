#include <stdio.h>
int main(void){
  float media=0,i, x;
  printf("Digite números: \n");
  while (i>=0){
    scanf("%f",&i);  
    media=media+i;
    x++;
  }
  media=media/x;
  printf("\nA média é: %.1f",media);
  return 0;
}