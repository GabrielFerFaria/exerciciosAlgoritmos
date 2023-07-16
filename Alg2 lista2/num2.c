#include <stdio.h>

int main(void) {
  char c[50];
  FILE *pont_arq;

  pont_arq = fopen("dados.txt", "r");
  
    if(pont_arq == NULL)
    {
      printf("Erro na abertura do arquivo");
      return 1;
    }
    printf("Lendo arquivo e exibindo a primeira linha\n\n");
    
    fgets(c, 50, pont_arq);
    puts(c);
          

  fclose(pont_arq);
  
  return 0;
}