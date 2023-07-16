#include <stdio.h>
int main(void){
int multi=1,i,num;
printf("Digite 15 números: \n");
for (i=0;i<15;i++){
	scanf("%d",&num); 
	multi=multi*num;
}
printf("\nO total da multiplicação é: %d",multi);
return 0;
}
