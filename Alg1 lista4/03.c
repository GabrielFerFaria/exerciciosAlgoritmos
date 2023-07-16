#include <stdio.h>
int main(void) {
int i;
printf("Números pares de 100 a 300\n");
for (i=100; i<=300; i++){
if (i%2 == 0){
printf("%d\t", i);
}
}
return 0;
}
