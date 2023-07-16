#include <stdio.h>
int main(void) {
  int a,b;
a=10,
b=a+1,
a=b+1,
b=a+1,
  printf("\nValor de A:%i\n",a);
a=b+1,
  printf("\nValor de A e B:%i, %i\n", a,b);
return 0;
}