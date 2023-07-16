#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int caso;
  float valor;
  printf("\nInforme o valor do produto?\n");
  scanf("%f", &valor);
  printf("\nQual é forma de pagamento?\n");
  printf("\n[1] Pagamento a vista, dinheiro ou cheque\n");
  printf("\n[2] Pagamento a vista, cartão de credito\n");
  printf("\n[3] Pagamento, parcelado em 2 vezes\n");
  printf("\n[4] Pagamento, parcelado em 3 vezes\n");
  scanf("%i", &caso);
  switch (caso){
    case  1:
     valor = valor - (valor * 0.05),
      printf("\nO valor pago a vista em dinheiro ou cheque é %.2f\n", valor);
    break;
    case  2:
      valor = valor - (valor * 0.10),
      printf("\n O valor pago a vista com cartao de credito é %.2f\n", valor);
    break;
    case  3:
      valor = valor,
      printf ("\nO valor total  a ser pago em duas vezes é %.2f\n", valor);
    break;
    case 4:
      valor = ((valor * 0.05) + valor),
      printf ("\nO valor total parcelado em três vezes com 5%% é %.2f\n", valor);
    break;
  }

return 0;
}

