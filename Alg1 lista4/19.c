#include <stdio.h>
int main(void) {
  int i, seq, ant1, ant2, sequencia;
  ant1 = 0;
  ant2 = 1;
  printf("Fibonacci Digite o número: ");
  scanf("%i", &seq);
  if (seq == 1){
     printf("0\n");
  }
  else if(seq == 2){
     printf("0\t1\n");
  }
  else {
      printf("0\t1\t");
      for (i = 3; i<=seq; i++){
         sequencia = ant1 + ant2;
         printf("%i\t", sequencia);
         ant1 = ant2;
         ant2 = sequencia;
      } 
  }
  return 0;
}
