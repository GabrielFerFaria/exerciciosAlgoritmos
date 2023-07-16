#include <stdio.h>
  int main(void) {
  	int cPequeno,cMedio,cGrande;
    int vPequeno,vMedio,vGrande;
    int tPequeno,tMedio,tGrande;
    int total;

    vPequeno=15,
    vMedio=20,
    vGrande=25,
    printf("\nQuantas camisas pequenas foram vendidas?\n");
    scanf("%i", &cPequeno);
    printf("\nQuantas camisas médias foram vendidas?\n");
    scanf("%i", &cMedio);
    printf("\nQuantas camisas grandes foram vendidas?\n");
    scanf("%i", &cGrande);
    tPequeno=vPequeno*cPequeno,
    tMedio=vMedio*cMedio,
    tGrande=vGrande*cGrande,
    total=tPequeno+tMedio+tGrande,
    printf("\nO valor das camisas pequenas foi de: %i\n", tPequeno);
    printf("\nO valor das camisas médias foi de: %i\n", tMedio);
    printf("\nO valor das camisas grandes foi de: %i\n", tGrande);
    printf("\nO total arrecadado é: %i\n", total);

  return 0;
}