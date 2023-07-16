#include <stdio.h>
int main(void) {

float vcombustivel, L, reais;

printf("\nBem Vindo ao posto Ibiranga\n");
printf ("\nInforme o valor da gasolina?\n");
scanf ("%f", &vcombustivel);
printf ("\nInforme quantos reais deseja abastecer\n");
scanf ("%f", &reais);

L=reais/vcombustivel, 

printf ("\nVocê abasteceu %.2f litros.\n", L);

return 0;
}