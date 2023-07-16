#include <stdio.h>
int main(void) {
  float n1, n2; 
  int escolha;
  do {
  printf("\n\nCalculadora\n");
  printf("1 - Somar\n");
  printf("2 - Subtrair\n");
  printf("3 - Multiplicar\n");
  printf("4 - Dividir\n");
  printf("5 - Sair\n");
  
  printf("Digite sua operação: ");
  scanf("%i", &escolha);
  if (escolha < 5){
     printf("Digite o primeiro valor ");
     scanf("%f", &n1);
     printf("Digite o primeiro valor ");
     scanf("%f", &n2);
  }
  if (escolha ==1){
    printf("A soma de %.1f e %.1f é %.1f", n1, n2, n1 + n2);
  }
  else if (escolha ==2){
         printf("A subtração de %.1f e %.1f é %.1f", n1, n2, n1 - n2);
       }
       else if (escolha == 3){
         printf("A multiplicação de %.1f e %.1f é %.1f", n1, n2, n1 * n2);
       }
       else if (escolha == 4){
         if (n2 == 0){
           printf("Não existe divisão por zero");
         }
         else {
              printf("A divisão de %.1f e %.1f é %.1f", n1, n2, n1 / n2);
         }
       }
  } while (escolha != 5);
  printf("Obrigado por usar a calculadora!");
  return 0;
}