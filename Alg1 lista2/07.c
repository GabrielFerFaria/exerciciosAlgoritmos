#include <stdio.h>
int main(void) {

int anos,meses,dias,totalDeDias;

printf("Digite o ano que nasceu:\n");
scanf("%i", &anos);
printf("\nDigite o mês que nasceu:(Jan=1,Fev=2...)\n");
scanf("%i",&meses);
printf("\nDigite o dia que nasceu:\n");
scanf("%i", &dias);

totalDeDias=totalDeDias+anos*360,
totalDeDias=totalDeDias+meses*30,
totalDeDias=totalDeDias+dias,

printf("\nO total de dias que você viveu é: %i dias\n", totalDeDias);

return 0;
}