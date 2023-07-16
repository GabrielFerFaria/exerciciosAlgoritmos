#include <stdio.h>

int main(void) {
  int i, num, fat, n;
  float res;
  printf("Digite o número:\n");
  scanf("%i", &n);
  res = 1;
  num = 1;
  while (num <= n){
     fat = 1;
     for (i=1; i<=num; i++){
       fat = fat * i;
     }
     res = res + (1 / fat);
     num = num + 1;
  }
  printf("\nO valor de H é %.2f", res);
  return 0;
}