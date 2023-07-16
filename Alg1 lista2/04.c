#include <stdio.h>
int main(void) {
  int x,y,z;
x=1,
y=2,
z=y-x,
printf("\nValor de Z:%i\n",z);
x=5,
y=x+z,
printf("\nvalor de X,Y,Z: %i, %i, %i\n", x,y,z);
return 0;
}