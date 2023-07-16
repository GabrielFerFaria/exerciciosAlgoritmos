#include <stdio.h>
int main(){
	float h = 1,den = 1;
	int i, n;
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		den = den * i;
		h = h + 1 / den;
	}
	printf("Valor de H = %.2f\n", h);
	return 0;
}
