#include <stdio.h>
#include <stdlib.h>
#define TAM 20
int main (){
  int i, op[TAM], mediaId=0, mediaIdRuim=0, bom=0, otimo=0,maiorRuim=0, maiorP=0, maiorOti=0, regular=0, ruim=0, pessimo=0, id[TAM];
  float percentBom, percentReg, mediaIdR, porcenPess, diferencaI;
  for(i=0;i<TAM;i++){
    printf("\nQual a sua opinião sobre o filme ?\n [1]-otimo\n [2]-bom\n [3]-regular\n [4]-ruim\n [5]-pessimo\n");
    scanf("%i", &op[i]);
    printf("\n\nInforme a sua id:\n");
    mediaId+=id[i];
    scanf("%i", &id[i]);
    switch(op[i]){
      case 1:
        maiorOti=id[0];
        if(maiorOti>id[i]){
          maiorOti=id[i];
        }
        otimo++;
      break;
      case 2:
        bom++;
      break;
      case 3:
        regular++;
      break;
      case 4:
        maiorRuim=id[0];
        if(maiorRuim>id[i]){
          maiorRuim=id[i];
        }
        ruim++;
        mediaIdRuim+=id[i];
      break;
      default:
        maiorP=id[0];
        if(maiorP>id[i]){
          maiorP=id[i];
        }
        pessimo++;
      break;
    }

  }
  printf("\nA quantia de resposta otimo é: %i\n", otimo);
  printf("\n\nA diferença de percentual entre respostas bom e regular é de: %.2f\n\n", (float)100*(bom-regular)/TAM);
  printf("\n\nA media da id das pessoas que avaliaram como ruim é %.2f\n\n", (float)(mediaIdRuim)/ruim);
  printf("\n\nA porcenatgem de respostas pessimo é de:  %.2f%% e a maior id que achou pessimo foi:  %i\n\n", (float)pessimo*100/TAM, maiorP);
  printf("\n\nA diferença de id entre a maior id que respondeu ótimo e a maior id que respondeu ruim é: %i\n\n", abs(maiorOti-maiorRuim));
  return 0;
}
