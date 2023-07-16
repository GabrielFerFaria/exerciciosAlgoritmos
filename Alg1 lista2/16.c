#include<stdio.h>
int main (void){
float valor,raf; int gab_mat;
 printf("Informe o valor da conta:\n");
 scanf("%f", &valor);
 gab_mat=valor/3,
 raf= valor-gab_mat*2;
 printf("O preço que Gabriel teve que pegar é de %i\n O preço que Matheus vai pagar é de %i\n O preço que Rafael vai pagar é de %.2f\n",gab_mat,gab_mat,raf);
  return 0;
}