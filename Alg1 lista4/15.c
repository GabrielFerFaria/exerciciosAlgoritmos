#include<stdio.h>
int main(){
    long int i=0,soma=0,repetir;
    for (repetir=7;repetir<=33550336;repetir+=2){
      for (i=1;i<=repetir/2;i++){
          if (repetir%i==0){ 
              soma=soma+i;
          }
      }
      if (soma==repetir){
             printf("numero perfeito: %ld\n",soma);
      }
      soma = 0;
    }
    return 0;
}
