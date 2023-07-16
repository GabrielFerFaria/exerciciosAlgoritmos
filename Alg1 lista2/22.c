#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void){
float h, hip, s;
printf("\nDigite a sombra do predio\n");
scanf("%f", &s);
printf("Digite a hipotenusa formada entre a sombra e altura\n");
scanf("%f", &hip);
h=sqrt(pow(hip,2.0)-pow(s,2.0));
printf("\nA altura é\n %.2f", h);
return 0;
}