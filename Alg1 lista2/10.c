#include <stdio.h>
int main(void) {

int mes,dia,diaF; 

printf("\nInforme o mês atual?\n");
scanf("%i", &mes);
printf("\nEm que dia do mês vc está:\n");
scanf("%i", &dia);

diaF=(mes-1)*30+dia,

printf("\nSe passaram %i dias desde o início do ano.\n", diaF);

return 0;
}