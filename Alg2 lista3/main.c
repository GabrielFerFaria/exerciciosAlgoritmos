#include <stdio.h>


void par_impar(int n, int nFn);
int main()
{
    int num, numFinal;
    printf("Primeiro número do intervalo:\n");
    scanf("%d",&num);  
 
    printf("Último número do intervalo:\n");
    scanf("%d",&numFinal);

    printf("Números pares/ímpares de %d até %d são: ",num,numFinal);
    par_impar(num,numFinal);

    return 0;
}
void par_impar(int n, int nFn)
{
    if(n>nFn)
        return;
    printf("%d, ",n);
    par_impar(n + 2, nFn);
}