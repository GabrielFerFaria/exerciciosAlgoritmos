#include <stdio.h>
  int main(void) {
  	float raio,p,area;

    p=3.14;
    
    printf("\nEscreva o raio da pizza\n");
    scanf("%f", &raio);
    
    area=p*(raio*raio);
    
    printf("\nA área da pizza é de: %f cm³\n", area);
  return 0;
}