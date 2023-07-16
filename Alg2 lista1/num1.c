#include <stdio.h>

int main(void) {
  float cateto1, cateto2, area;
  
  printf("Informe o valor do primeiro cateto: \n");
  scanf("%f",&cateto1);
  
  printf("informe o valor do segundo cateto:\n");
  scanf("%f",&cateto2);
    
    area= (cateto1*cateto2)/2;

  printf("\nA área do triangulo retângulo é: %0.2f",area);
 
  return 0;
}