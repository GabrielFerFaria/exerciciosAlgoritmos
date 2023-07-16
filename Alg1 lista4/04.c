#include <stdio.h>
int main(void){
  int soma=0,i,num;
  printf("Digite 15 números: \n");
  for (i=0;i<15;i++){
    scanf("%d",&num);  
    soma=soma+num;
  }
  printf("\nO total da soma é: %d",soma);

  return 0;
}