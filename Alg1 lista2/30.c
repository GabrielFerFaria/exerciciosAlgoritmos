#include <stdio.h>
#include <math.h>
int main(void) {
  float cat1,cat2,hip,rcat;
  printf("\nQual é o primeiro cateto?\n");
  scanf("%f", &cat1);
  printf("\nQual é o segundo cateto?\n");
  scanf("%f", &cat2);
  cat1=pow(cat1,2);
  cat2=pow(cat2,2);
  rcat=cat1+cat2;
  rcat=sqrt(rcat);
  hip=rcat;
  printf("\nO valor da hipotenusa é: %f\n", hip);
  return 0;
}