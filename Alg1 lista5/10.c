#include <stdio.h>
#define LINHA 3
#define COLUNA 3
int main (){
  int m[LINHA][COLUNA], i, j, av=0, Vet[LINHA*COLUNA], quantiaV ;
  printf("\n\nInforme os elementos da matriz:\n");
  for(i=0;i<LINHA;i++){
    for(j=0;j<COLUNA;j++){
      scanf("%i", &m[i][j]);
      
    }
  }
  printf("\nA matriz informada é :\n");
  for(i=0;i<LINHA;i++){
    for(j=0;j<COLUNA;j++){
      printf("%i\t", m[i][j]);Vet[av]=m[i][j];
      av++;
    }
    printf("\n");
  }
  printf("\nA matriz transformada em vetor ficou: \n");
  quantiaV=LINHA*COLUNA;
  for(av=0;av<quantiaV;av++){
    printf("%i\t", Vet[av]);
  }
  return 0;
}
