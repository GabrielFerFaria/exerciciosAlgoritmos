#include <stdio.h>
int main(void) {
int unid,cent,dez,num;
printf("\nDigite um número entre 100 e 999:");
scanf("%i", &num);
cent=num/100,
dez=(num%100)/10,
unid=num%10,
printf("\nA centena: %i. Dezena: %i. Unidade: %i\n", cent,dez,unid);
return 0;
}