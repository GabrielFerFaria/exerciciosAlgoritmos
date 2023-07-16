int main(void) {
 
 float porc_nulo,porc_valido,porc_branco;
int voto_nulo,voto_valido,voto_branco,total_eleitores;

printf("\nDigite o total de eletiores:\n");
scanf("%i", &total_eleitores);
printf("\nDigite o númeo de votos em branco:\n");
scanf("%i", &voto_branco);
printf("\nDigite o número de votos nulos:\n");
scanf("%i", &voto_nulo);
printf("\nDigite o número de votos validos:\n");
scanf("%i", &voto_valido);

porc_branco= voto_branco * 100 / total_eleitores;
porc_nulo= voto_nulo * 100 / total_eleitores;
porc_valido= voto_valido * 100 / total_eleitores;

printf("\nTotal de votos em branco %.0f %%\n", porc_branco);
printf("\nTotal de votos em nulo %.0f %%\n", porc_nulo);
printf("\nTotal de votos em valido %.0f %%\n", porc_valido);
printf("\nNão eleja político corrupto!\n");

return 0;
}