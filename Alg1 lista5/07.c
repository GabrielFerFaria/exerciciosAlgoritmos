#include <stdio.h>
#define LINHA 8
#define COLUNA 8
int main (){
  int j, i, peao=0, vazio=0, bispo=0, torre=0, rei=0, rainha=0, cavalo=0, tab[LINHA][COLUNA] = {{1, 3,	0,	5,	4,	0,	2,	1}, {1,	0,	1,	0,	0,	1,	0,	0}, {0,	0,	0,	0,	1,	0,	6,	0}, {1, 0,	0,	1,	1,	0,	0,	1}, {0,	1,	0,	4,	0,	0,	1,	0}, {0,	0,	3,	1,	0,	0,	1,	1}, {1,	0,	6,	6,	0,	0,	1,	0}, {1,	0,	5,	0,	1,	1,	0,	6}};
  for(i=0;i<LINHA;i++){
    for(j=0;j<COLUNA;j++){
      printf("%i\t", tab[i][j]);
      switch(tab[i][j]){
        case 0:
          vazio++;
        break;
        case 1:
          peao++;
        break;
        case 2:
          cavalo++;
        break;
        case 3:
          torre++;
        break;
        case 4:
          bispo++;
        break;
        case 5:
          rei++;
        break;
        default:
          rainha++;
        break;
      }
    }
    printf("\n");
  }
  printf("\nA quantidade de espaços vazios é: %i\n", vazio);
  printf("\nA quantidade de peões é de: %i\n", peao);
  printf("\nA quantidade de cavalos é de: %i\n", cavalo);
  printf("\nA quantidade de torres é de: %i\n", torre);
  printf("\nA quantidade de bispos é de: %i\n", bispo);
  printf("\nA quantidade de reis é de: %i\n", rei);
  printf("\nA quantidade de rainhas é de: %i\n", rainha);
  printf("\nA soma total entre bispos é: %i", bispo);
  return 0;
}
