#include <stdio.h>
int main(void) {
  int numero, somapar=0, somaimpar=0, totpar = 0, totimpar=0; 
  float mpar, mg;
  printf("\nPara Sair do programa digite 0.\n\n");
  do{
    printf("Digite um número:  ");
    scanf("%d", &numero);
    if (numero>0){
      if (numero % 2==0){
       totpar+=1; 
       somapar+=numero; 
      }
      else{
       totimpar+=1; 
       somaimpar+=numero;
      }
    }
  } while(numero!=0);
  if (somapar >0 || somaimpar>0){
    if (totpar>0)
       mpar = (float) somapar/totpar;
       mg = (float) (somapar+somaimpar)/(totpar+totimpar);
    printf("\nQuantidade dos números pares: %d", totpar);
    printf("\nQuantidade dos números impares: %d", totimpar);
    printf("\nMédia dos valores pares: %.2f", mpar);
    printf("\nMédia geral dos números : %.2f", mg);
  }
  else
     printf("\nPrograma encerrado");
  return 0;
}
