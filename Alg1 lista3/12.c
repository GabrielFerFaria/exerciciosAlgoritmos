#include<stdio.h>
int main(void){
  int horaI, horaF,minI,minF, totalH,totalM;
  printf("Insira a hora e o minuto inicial do evento:\n");
  scanf("%i %i", &horaI,&minI);
  printf("\nInsira a hora  e o minuto final do evento:\n");
  scanf("%i %i", &horaF,&minF);
  
  totalH= horaF -horaI;
  totalM= minF - minI;
  
  if (totalH < 0){
   totalH = totalH +24;
  }
  if(totalM < 0){
    totalM=totalM+60;
    totalH=totalH - 1;
  }

printf("A duração do evento no total é: %i:%i",totalH,totalM);

return 0;
}