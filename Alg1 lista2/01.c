#include <stdio.h>
int main(void) {

int A, B, C;

A=20,
B=10,

printf("O valor de A é %i e o valor de B é %i . \n", A, B);

C=A,
A=B,
B=C,

printf ("\nO valor de de B em A %i e de A em B é %i. \n", A, B);

return 0;
}