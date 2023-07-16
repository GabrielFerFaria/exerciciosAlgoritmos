#include <stdio.h>
  int main(void) {
  	int a,b,c;
  	a=30,
  	b=20,
  	c=a+b,	
  	printf("\nValor do C: %i \n", c);
  	b=10,
  	printf("\nValor de B e C: %i, %i\n", b,c);
	c=a+b,
	printf("\nValor de A, B e C:%i, %i, %i\n", a,b,c);  
  return 0;
}