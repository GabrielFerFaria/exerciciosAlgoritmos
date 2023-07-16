
#include <stdio.h>
int main() {
int num1=2,num2=3;
int *ptr,*ptr2;
ptr =&num1;
ptr2 = &num2;
*ptr=*ptr+*ptr2;
printf("%d",*ptr);

return 0;
}
