//8. Considerando o seguinte trecho de algoritmo, o que acontece na execução desse algoritmo dadas as seguintes condições? 
//a) O primeiro valor entrado é 5 e o segundo é 14. 
//jogo 3
//b) O primeiro valor entrado é -5 e o segundo é 14.
//jogo 4
//c) O primeiro valor entrado é 5 e o segundo é -14.
// jogo 4
//d) O primeiro valor entrado é -5 e o segundo é -14.
// jogo 3
//e) O primeiro valor entrado é 14 e o segundo é -5.
// jogo 4
#include <stdio.h>

int main(void) {
  float x,y;
  printf("\nInforme o valor de x e y\n");
  scanf("%f %f", &x, &y);
  if (12 - 7 > y && 13 - x >=  27){
    if (x * y > 0) {
      printf ("jogo 1");
    }
    else{
      printf ("jogo 2");
    }
    
  } 
  else{
    if (x * y > 0 ){
      printf ("jogo 3");
    }
    else{
      printf ("jogo 4");
    }
  }
  return 0;
}