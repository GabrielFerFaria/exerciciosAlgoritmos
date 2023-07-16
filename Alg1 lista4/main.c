#include <stdio.h>
int main(void){
int sexo, id, maior, menor, cont = 1;
float alt, mid = 0, falt = 0, f, m, perc_id = 0;
while(cont <= 5){
printf("\nDigite o Sexo (1-F/2-M): ");
scanf("%d", &sexo);
printf("Digite a idade: ");
scanf("%d", &id);
 printf("Digite a altura: ");
scanf("%f", &alt);
 if(cont == 1){
maior = menor = id;
}
if(id > maior){
  maior = id;
}
if(id < menor){
  menor = id;
}
if(sexo == 1){
  falt += alt;
  f++;
}else{
  mid += id;
  m++;
}
if(id >= 18 && id <= 65){
  perc_id++;
}
cont++;
}
printf("%f \t%f\t%f", m, f, perc_id);

falt = (falt/f);
mid = mid/m;
m = (100*m)/(cont-1);
f = (100*f)/(cont-1);
perc_id = (perc_id*100)/(cont-1);

printf("\nMaior Idade: %d\n", maior);
printf("Menor Idade: %d\n", menor);
printf("Média de Idade dos Homens: %.2f\n", mid);
printf("Média de altura das mulheres: %.2f\n", falt);
printf("Porcentagem de Homens: %.2f\n", m);
printf("Porcentagem de Mulheres: %.2f\n", f);
printf("Porcentagem de pessoas com idade entre 18 e 65 anos: %.2f", perc_id);
 return 0;
}