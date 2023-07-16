#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int hab,id[hab],i,salMAcima=0,maiorId=0,menorId=0, menorAx;
  char sexo;
  float sal,media;
  printf("Quantos habitantes tem na cidade: ");
  scanf("%d", &hab);
    for(i=0;i<hab;i++){
    printf("\nQual sua idade? ");
    scanf("%i", &id[hab]);
    printf("\nQual seu sexo? [M]ou[F]: ");
    scanf("%s", &sexo);
    printf("\nQual é o seu salário: ");
    scanf("%f", &sal);
    media=media+sal;
    if(sexo=='F' && sal<=1500.00){
      salMAcima++;
    }
    if(i==0){
      menorId=id[hab];
      maiorId=id[hab];

    }
    else if(id[hab]<menorId){
      menorId=id[hab];
    }
    else if(id[hab]>maiorId){
      maiorId=id[hab];
    }
    menorAx=menorId;
  }
  media=media/hab;
  printf("\nMédia dos salários: %.2f\n", media);
  printf("\nMaior idade %d anos\n", maiorId);
  printf("\nMenor idade %d anos\n", menorId);
  printf("\nMulheres com salários até R$1500: %d\n\n\n", salMAcima);
  return 0;
}