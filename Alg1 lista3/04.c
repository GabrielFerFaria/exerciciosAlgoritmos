#include<stdio.h>
int main(void){
float a,b,c;
printf("\nDigite a primeira medida:");
scanf("%f",&a);
printf("\nDigite a segunda medida:");
scanf("%f",&b);
printf("\nDigite a terceira medida:");
scanf("%f",&c);
if((a<=0)||(b<=0)||(c<=0)){
printf("\nOs valores nao podem formar um triangulo\n");
}
else if((a==b)&&(a==c)&&(b==c)){
printf("\nO triangulo é equilatero\n");
}
else if((a==b)||(a==c)||(b==c)){
printf("\nO triangulo é isosceles\n");
}else if((a!=b) && (a!=c) &&(b!=c)){
printf("\nO triangulo é escaleno\n");
}
return 0;
}