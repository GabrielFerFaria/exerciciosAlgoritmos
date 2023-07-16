#include <stdio.h>
#define LINHA 5
#define COLUNA 5
int main (){
  int m [LINHA][COLUNA], i, j, trans [LINHA][COLUNA];
  printf("Infome os elementos da matriz para obter sua trasnposta.\n");
  for(i=0;i<LINHA;i++){
    for(j=0;j<COLUNA;j++){
      scanf("%i", &m[i][j]);
      
    }
  }
  
  for(i=0;i<LINHA;i++){
    for(j=0;j<COLUNA;j++){
      trans[i][j]=m[j][i];
      printf("%i\t", m[i][j]);
    }
    printf("\n");
  }
  printf("A matriz transposta da matriz informada é:\n");
  for(i=0;i<LINHA;i++){
    for(j=0;j<COLUNA;j++){
     printf("%i\t", trans[i][j]);  
      
    }
    printf("\n");
  }
  return 0;
}