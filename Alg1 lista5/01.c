#include <stdio.h>
#define TAM 3

int main(void) {
  int A[TAM], B[TAM],i, C[TAM];
  
  printf("\nDigite um numero: \n");
  for (i=0; i<TAM; i++){
   scanf("%i", &A[i]); 
  }
  printf("\nDigite outro numero: \n");
  for (i=0; i<TAM; i++){
    scanf("%i", &B[i]); 
  }
  for(i=0;i<TAM; i++){
    C[i]=A[i]+B[i];
    printf("\nA soma dos numeros da posição %i dos vetores A e B é: %i\n", i+1, C[i]);
  }
  

  return 0;
}
