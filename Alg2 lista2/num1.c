#include <stdio.h>

int main(void) {
  char nome[30],sexo[20];
  int idade;
  float altura;
  FILE *pont_arq;

  pont_arq = fopen("dados.txt", "w");
  
    if(pont_arq == NULL)
    {
      printf("Erro na abertura do arquivo");
      return 1;
    }
  
    printf("Digite seu nome: ");
    scanf("%s", nome);
  
    printf("Digite seu sexo (Masculino, Feminino ou Não Desejo Informar): ");
    scanf("%s", sexo);
 
    printf("Digite sua idade: ");
    scanf("%d", &idade);
 
    printf("Digite sua altura em metros:");
    scanf("%f", &altura);
  
    fprintf(pont_arq, "Nome:%s\n", nome);
    fprintf(pont_arq, "Sexo:%s\n", sexo);
    fprintf(pont_arq, "Idade:%d\n", idade);
    fprintf(pont_arq, "Altura:%0.2f m\n", altura);
  
  
  fclose(pont_arq);
  
  printf("Dados gravados com sucesso!");
  
  return 0;
}