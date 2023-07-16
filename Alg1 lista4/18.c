#include <stdio.h>
int main(void) {
  int i, numero, fatorial;
  fatorial = 1;
  printf("Digite o número: ");
  scanf("%d", &numero);
  for (i=1; i<=numero; i++){
     fatorial = fatorial * i;
  }
  printf("\nFatorial de %d é %d", numero, fatorial);
  return 0;
}
