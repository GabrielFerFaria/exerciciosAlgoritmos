#include <stdio.h>

int main(void) {
  int  i1, i2, i3, i4, i5,quan,quan2,quan3,totalB, totaln;
  float n;
  i1 = i2 = i3 = i4 = i5 = quan = quan2 = quan3 = totalB = totaln = 0;
  
  printf("\nEleições\n");
  printf("\nJoão número 1\nMarcos número 2\nEdilene número 3\nVotos em Branco 4\nVotos nulos 5\n");
  
  printf("\nDigite um número: ");
  scanf("%f", &n);
  while(n > 0){    
    if(n==1){
      printf("Quantos votos João teve?");
      scanf("%i",&quan);
      i1++;
    }else if(n==2){
      printf("Quantos votos Marcos teve?");
      scanf("%i",&quan2);
      i2++;
    }else if(n==3){
      printf("Quantos votos Edilene teve?");
      scanf("%i",&quan3);
      i3++;
    }
    else if(n==4){
      printf("Quantos votos Brancos teve?");
      scanf("%i",&totalB);
      i4++;
    }
    else if(n==5){
      printf("Quantos votos Nulos teve?");
      scanf("%i",&totaln);
      i5++;
    }
    printf("\nDigite um número: ");
    scanf("%f", &n);
  }
  printf("\nO total de votos para João foi %i\n", quan);
  printf("\nO total de votos para Marcos foi %i\n", quan2);
  printf("\nO total de votos para Edilene foi %i\n", quan3);
  printf("\nO total de votos Brancos foi %i\n", totalB);
  printf("\nO total de votos Nulos foi %i\n", totaln);
  printf("\nA procentagem de votos de João foi %.2f%%\n",(quan*100.00)/(quan+quan2+quan3+totalB+totaln));
  printf("\nA procentagem de votos de João foi %.2f%%\n",(quan2*100.00)/(quan+quan2+quan3+totalB+totaln));
  printf("\nA procentagem de votos de João foi %.2f%%\n",(quan3*100.00)/(quan+quan2+quan3+totalB+totaln));
  return 0;
}
