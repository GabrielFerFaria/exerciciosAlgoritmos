#include <stdio.h>
#include <stdlib.h>
void tabuleiro (char casas2[3][3]){
    system("clear");
    printf("\nJOGO DA VELHA:\n\n");
    printf("\t %c | %c | %c \n",casas2[0][0],casas2[0][1],casas2[0][2]);
    printf("\t ---------\n");
    printf("\t %c | %c | %c \n",casas2[1][0],casas2[1][1],casas2[1][2]);
    printf("\t ---------\n");
    printf("\t %c | %c | %c \n",casas2[2][0],casas2[2][1],casas2[2][2]);
}
int main (){
  char casa[3][3]={0,0};
  tabuleiro(casa);
  char res;
  int cont_jogadas,linha,coluna,vez=0,i,j;
  do{
    cont_jogadas=1;
    for(i=0;i<=2;i++){
      for(j=0;j<=2;j++){
        casa[i][j]= ' ';
      }
    }
    do{
      tabuleiro(casa);
      if(vez%2==0){
        printf("\nJogador 1");
      }else{
        printf("\nJogador 2");
      }
      printf("\nDigite a linha: ");
      scanf("%d",&linha);
      printf("Digite a coluna: ");
      scanf("%d",&coluna);
      if(linha<1 || coluna <1 || linha>3 || coluna>3){
        linha=0;
        coluna=0;
      }else if(casa[linha-1][coluna-1] != ' '){
        linha=0;
        coluna=0;
      }else{
        if(vez%2==0){
          casa[linha-1][coluna-1] = 'X';
        }else{
          casa[linha-1][coluna-1] = 'O';
        }
        vez++;
        cont_jogadas++;
      }
      if(casa[0][0]=='X' && casa[0][1]=='X' && casa[0][2] == 'X'){cont_jogadas = 11;}
      if(casa[1][0]=='X' && casa[1][1]=='X' && casa[1][2] == 'X'){cont_jogadas = 11;}
      if(casa[2][0]=='X' && casa[2][1]=='X' && casa[2][2] == 'X'){cont_jogadas = 11;}
      if(casa[0][0]=='X' && casa[1][0]=='X' && casa[2][0] == 'X'){cont_jogadas = 11;}
      if(casa[0][1]=='X' && casa[1][1]=='X' && casa[2][1] == 'X'){cont_jogadas = 11;}
      if(casa[0][2]=='X' && casa[1][2]=='X' && casa[2][2] == 'X'){cont_jogadas = 11;}
      if(casa[0][0]=='X' && casa[1][1]=='X' && casa[2][2] == 'X'){cont_jogadas = 11;}
      if(casa[0][2]=='X' && casa[1][1]=='X' && casa[2][0] == 'X'){cont_jogadas = 11;}

      if(casa[0][0]=='O' && casa[0][1]=='O' && casa[0][2] == 'O'){cont_jogadas = 12;}
      if(casa[1][0]=='O' && casa[1][1]=='O' && casa[1][2] == 'O'){cont_jogadas = 12;}
      if(casa[2][0]=='O' && casa[2][1]=='O' && casa[2][2] == 'O'){cont_jogadas = 12;}
      if(casa[0][0]=='O' && casa[1][0]=='O' && casa[2][0] == 'O'){cont_jogadas = 12;}
      if(casa[0][1]=='O' && casa[1][1]=='O' && casa[2][1] == 'O'){cont_jogadas = 12;}
      if(casa[0][2]=='O' && casa[1][2]=='O' && casa[2][2] == 'O'){cont_jogadas = 12;}
      if(casa[0][0]=='O' && casa[1][1]=='O' && casa[2][2] == 'O'){cont_jogadas = 12;}
      if(casa[0][2]=='O' && casa[1][1]=='O' && casa[2][0] == 'O'){cont_jogadas = 12;}
     } while(cont_jogadas<=9);
     tabuleiro(casa);
     if(cont_jogadas==10){printf("Jogo empatado \n");}
     if(cont_jogadas==11){printf("Ganhador: Jogador 1 \n");}
     if(cont_jogadas==12){printf("Ganhador: jogador 2 \n");}
    printf("Deseja jogar novamente? [S/N]\n");
    scanf("%s",&res);
  }while(res=='S');
  return 0;
}