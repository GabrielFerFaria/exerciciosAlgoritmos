#include <stdio.h>
int main(void) {
  float x, y;

  printf("Pontos no Plano Cartesiano\n");
  printf("\nDigite o valor de x:");
  scanf("%f", &x);
  printf("\nDigite o valor de y:");
  scanf("%f", &y);
  if (x == 0 && y ==0){ 
    printf("Ponto sobre a origem");
  }
  else if (x == 0){ 
     printf("O ponto está no eixo Y");
    }
      else if (y == 0){ 
        printf("O ponto está no eixo x");
          }
            else if (x>0){
              if (y>0){
                printf("O ponto está no quadrante 1");
              }
              else{
                printf("O ponto está no quadrante 4");
              }
            }
            else {
              if (y>0){ 
                printf("O ponto está no quadrante 2");
              }
              else{
                printf("O ponto está no quadrante 3");
              } 
            }
  return 0;
}