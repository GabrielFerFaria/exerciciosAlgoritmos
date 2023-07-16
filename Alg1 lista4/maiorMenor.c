#include<stdio.h>
int main(){
 int numero, maior, menor,i;

 printf("Digite 20 números: ");
 scanf("%i", &numero);
 maior=numero;
 menor=numero;
 for(i=1; i<5; i++){
 printf("Digite 20 números: ");
 scanf("%i", &numero);
 if(numero>maior)
 maior=numero;
 else
 if(numero<menor)
    menor=numero;
 }
 printf("\nO menor numero digitado é : %d", menor);
 printf("\nO maior numero digitado é : %d", maior);

return 0;
} 