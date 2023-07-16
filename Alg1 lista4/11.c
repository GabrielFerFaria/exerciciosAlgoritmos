#include <stdio.h>

int main(void) {
int i=0, x, y, v1 = 0,v2 = 0,v3 = 0,vb = 0,vn = 0;
printf("Quantas pessoas vão votar?\n");
scanf("%i", &y);
printf("[1] Voto para candidato 1\n");
printf("[2] Voto para candidato 2\n");
printf("[3] Voto para candidato 3\n");
printf("[4] Voto em branco\n");
printf("[5] Voto nulo\n");
for(i=0;i<y;i++){
  printf("\n\n");
  scanf("%i", &x);
  switch(x){
    case 1:
      v1++;
    break;
    case 2:
      v2++;
    break;
    case 3:
      v3++;
    break;
    case 4:
      vb++;
    break;
    case 5:
      vn++;
    break;
    default:
      printf("Opção inválida!\n");
    break;   
  }
}
printf("O total de votos para o candidato 1 são %i\n", v1);
printf("O total de votos para o candidato 2 são %i\n", v2);
printf("O total de votos para o candidato 3 são %i\n", v3);
printf("O total de votos em branco são %i\n", vb);
printf("O total de votos nulos são %i\n", vn);
printf("A porcentagem de votos para o candidato 1 são %.2f%%\n", (v1*100.0)/(v1+v2+v3+vn+vb));
printf("A porcentagem de votos para o candidato 2 são %.2f%%\n", (v2*100.0)/(v1+v2+v3+vn+vb));
printf("A porcentagem de votos para o candidato 3 são %.2f%%\n", (v3*100.0)/(v1+v2+v3+vn+vb));
return 0;
}