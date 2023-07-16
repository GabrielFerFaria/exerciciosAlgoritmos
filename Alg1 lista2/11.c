#include <stdio.h>
  int main(void) {
  	float n1,n2,n3,media;
    printf("Qual é a primeira nota?\n");
    scanf("%f", &n1);
    printf("\nQual é a segunda nota?\n");
    scanf("%f", &n2);
    printf("\nQual é a terceira nota?\n");
    scanf("%f", &n3);
    media=((n1*2)+(n2*3)+(n3*4))/(2+3+4);
    printf("\nA nota do aluno é: %f\n", media); 
  return 0;
}