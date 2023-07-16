#include<stdio.h>
#define LINHA 5
#define COLUNA 5
int main(){
  int A[LINHA][COLUNA], B[LINHA][COLUNA], i, j, z, multi[LINHA][COLUNA], somaEnt[LINHA][COLUNA], somap=0, somas=0, matrizax=0;
  printf("\nDigite os elementos da matriz A: \n");
  for(i=0;i<LINHA;i++){
    for(j=0;j<COLUNA;j++){
      scanf("%i", &A[i][j]);
      if(i==j){
        somap+=A[i][j];
      }
      if(i+j==LINHA-1){
        somas+=A[i][j];
      }
    }
  }
  printf("\nA soma da diagonal principal da matriz A é %i \n", somap);
  printf("\nA soma da diagonal secundaria da matriz A é %i \n", somas);
  printf("\nDigite os elementos da matriz B: \n");
  somas=0;
  somap=0;
  for(i=0;i<LINHA;i++){
    for(j=0;j<COLUNA;j++){
      scanf("%i", &B[i][j]);
      somaEnt[i][j]=A[i][j]+B[i][j];
      if(i==j){
        somap+=B[i][j];
      }
      if(i+j==LINHA-1){
        somas+=B[i][j];
      }
    }
  }
  printf("\nA soma da diagonal principal da matriz B é:  %i \n", somap);
  printf("\nA soma da diagonal secundaria da matriz B é:  %i \n", somas);
  printf("\nA soma entre a matriz A e B é :\n");
  somas=0;
  somap=0;
  for(i=0;i<LINHA;i++){
    for(j=0;j<COLUNA; j++){
      printf("%i\t", somaEnt[i][j]);
      for(z=0;z<COLUNA;z++){
        matrizax=matrizax+(A[i][z]*B[z][j]);

      }
      multi[i][j]=matrizax;
      matrizax=0;
    }
    printf("\n");
  } 
  printf("\nA multiplicação entre as matrizes\n");
  for(i=0;i<LINHA;i++){
    for(j=0;j<COLUNA;j++){
      printf("%i\t", multi[i][j]);
    }
    printf("\n");
  }
  return 0;
}