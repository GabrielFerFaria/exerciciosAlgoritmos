#include <stdio.h>
#define TAM 7

int main(void) {
  int vet[TAM], soma=0, i, num;
 printf("\nInforme 7 números para saber a sua posição dentro do vetor: \n");
  for(i=0; i<TAM; i++){
    scanf("%i", &vet[i]);  
  }
  for(i=0; i<TAM; i++){
    printf("--> %i está na posição %i do vetor\n", vet[i], i+1);
  }
  
  printf("\n\nInforme um número para descobrir em que posição ele está: \n\n");
  scanf("%i", &num);
  for(i=TAM;i>=0;--i){
    if(num==vet[i]){
      break;
    }
  }
  printf("--> %i está na posição %i do vetor\n\n", num, i);
  printf("A substituição dos vetores pela soma do elemento anterior é:\n");
  for(i=0;i<TAM;i++){
    vet[i]+=vet[i-1];
    printf("-->\t%i\t\n", vet[i]);
  }
  return 0;
}