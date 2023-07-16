#include <stdio.h>
#define TAM 5

int main(void) {
  int vet[TAM], soma=0, i;
  
  printf("\nInforme os números:\n");

  for(i=0; i<TAM; i++){
    scanf("%i", &vet[i]);
    soma+=vet[i];
  }
  printf("A soma dos elementos é %i\n", soma);  

  return 0;
}
