#include <stdio.h>
#include <math.h>
int main(void) {
  float area, perimetro, diagonal, base, altura;

  printf("Informe a base do retangulo:\n");
  scanf("%f",&base);
  
  printf("Agora informe a altura:\n");
  scanf("%f",&altura);

    area=base*altura;
    perimetro=(base+altura)*2;
    diagonal=pow(base,2)+pow(altura,2);
    diagonal=sqrt(diagonal);

  printf("A área do retangulo é: %0.2f\nO perimetro: %0.2f\nA diagonal: %0.2f ",area,perimetro,diagonal);

  return 0;
}