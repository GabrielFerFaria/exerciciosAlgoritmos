#  scanf("%f", &b1);
  printf("\n Digite o tamanho da base menor: \n");
  scanf("%f", &b2);
  printf ("\n Diga a altura do trapézio \n");
  scanf("%f", &h);
  area = (b1 + b2)*h/2;
  printf("\n A area do trapézio é de %.2f", area);
  return 0;
}include <stdio.h>
int main(void) {
  float b1,b2,area,h;
  printf("\n Digite o tamanho da base maior: \n");
