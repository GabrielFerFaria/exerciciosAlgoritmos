#include <stdio.h>
#define TAM 11

int main(void) {
  int vet[TAM]= {2, 4, 35, 50, 23, 17, 9, 12, 27, 5} , soma=0,  maior, i;
 printf("\nVetor = {2; 4; 35; 50; 23; 17; 9; 12; 27; 5}\n");
 
 maior=vet[0];
  for(i=0; i<TAM; i++){
    soma+=vet[i];
    if(vet[i]>maior){
      maior=vet[i];
    }
  }
  printf("\nO maior valor é %i\n", maior);
  printf("A media dos elementos é %.2f\n", soma/10.00);  

  return 0;
}
