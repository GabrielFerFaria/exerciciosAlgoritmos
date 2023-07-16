#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 0, num;
    scanf("%i",&num);
    if(num==0);{
        i=1;
    else{
    
       while(num!=0){
            i++;
            num/=10;
        }
    }
      }
    printf("A quantia de digitos é de %i", i);
    return 0;
}