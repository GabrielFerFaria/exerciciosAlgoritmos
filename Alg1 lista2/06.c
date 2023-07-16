#include <stdio.h>
int main(void) {

int horas,min,seg;

printf("\nDigite a duração do evento em segundos:\n");
scanf("%i", &seg);	

horas=seg/3600,
min=(seg-(horas*3600))/60,
seg=(seg-(horas*3600)-(min*60)),

printf("\nO tempo que durou o evento é: %i:%i:%i\n", horas,min,seg);

return 0;
} 