#include <stdio.h>
int main(void){
  float media=0,i,num, x, y;
  printf("Digite a quantidade de números: \n");
  scanf("%f", &y);
  printf("Digite %.0f números: \n", y);
  for (i=0;i<y;i++){
    scanf("%f",&num);  
    x=1;
    media=(media+num)/x;
    x++;
  }
  media=media/y;
  printf("\nA média é: %.1f",media);
  return 0;
}