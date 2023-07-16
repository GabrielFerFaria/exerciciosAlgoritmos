#include <stdio.h>

int pot(int x, int y);

int main () {
  int x,y,resultado;
  printf("Insira a base: \n");
  scanf("%d",&x);
  printf("Insira o expoente: \n");
  scanf("%d",&y);
  resultado=pot(x, y);
  printf("Resultado: %d", resultado);

  return 0;
} 

int pot(int x, int y){

  if(y==0){
    return 1;
  }
  else{
    return (x*pot(x, y-1));
  }
}