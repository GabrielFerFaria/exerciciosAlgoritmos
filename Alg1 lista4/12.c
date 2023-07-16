#include <stdio.h>
int main(void){
  int num,i, c1=0,c2=0,c3=0,c4=0, c5=0;
  printf("Digite números: \n");
  while (i>=0){
    scanf("%d",&i);
      switch(i){
        case 0 ... 25 :
          c1++;
        break;
        case 26 ... 50 :
          c2++;
        break;
        case 51 ... 75 :
          c3++;
        break;
        case 76 ... 100 :
          c4++;
        break;
        default:
          c5++;
        break;
        }
  }
printf("\nNúmeros no primeiro intervalo são: %d", c1);
printf("\nNúmeros no segundo intervalo são: %d", c2);
printf("\nNúmeros no terceiro intervalo são: %d", c3);
printf("\nNúmeros no quarto intervalo são: %d", c4);
printf("\nNúmeros em nenhum intervalo são: %d", c5);
  return 0;
}