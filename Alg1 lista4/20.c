#include<stdio.h>
int main(){
int ano=0,anoH=0,mes=0,mesH=0,dias=0,diasH=0,totalDeDias=0,totalDeDiasH=0,totalFinal=0;
printf("\nEscolha um ano: \n");
scanf("%d", &ano);
printf("\nEscolha um mês: \n");
scanf("%d", &mes);
printf("\nEscolha um dia: \n");
scanf("%d", &dias);

totalDeDias=totalDeDias + ano*365;
totalDeDias=totalDeDias + mes*30;
totalDeDias=totalDeDias + dias; 

printf("\nEm que ano estamos?\n");
scanf("%d", &anoH);
printf("\nEm que mês estamos?\n");
scanf("%d", &mesH);
printf("\nEm que dia estamos?\n");
scanf("%d", &diasH);

totalDeDiasH=totalDeDiasH + anoH*365;
totalDeDiasH=totalDeDiasH + mesH*30;
totalDeDiasH=totalDeDiasH + diasH;
totalFinal=totalDeDias-totalDeDiasH;
if(totalFinal<0){
  totalFinal=totalFinal*(-1);
}
printf("O número de dias entre essas datas é %d", totalFinal);
return 0;
}
