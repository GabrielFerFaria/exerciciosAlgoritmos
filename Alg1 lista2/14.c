#include <stdio.h>
#include <math.h>
int main(void) {
  float x1,x2,y1,y2,ptoAB;
  printf("\nDigite as coordenadas do ponto A: \n");
  scanf("%f", &x1);
  printf("\nDigite as coordenadas do ponto B: \n");
  scanf("%f", &x2);
  printf("\nDigite as coordenadas do ponto C: \n");
  scanf("%f", &y1);
  printf("\nDigite as coordenadas do ponto D: \n");
  scanf("%f", &y2);
  ptoAB = sqrtf((x1 - x2)+(y1 - y2));
  printf("\nA distancia entre o ponto A é  B é igual a %.2f\n", ptoAB);
return 0;
}
