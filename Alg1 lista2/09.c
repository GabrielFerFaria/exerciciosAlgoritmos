#include <stdio.h>

int main(void) {
  float kg, g, total;
   
   printf("quantas gramas deu seu prato de refeição: ");
   scanf("%f", &g);
   
  kg=g/1000;
  
  total=kg*20;
  
printf("o valor a se pagar é: %f",total);

  return 0; 
}
