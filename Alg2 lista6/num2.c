//primeiro caso (6 e 9)
#include <stdio.h>
int main() {
int mat[3] = {5, 9 , 11};
int *ptr;
ptr = mat;
printf(" %d", *(ptr));
printf(" %d", *(ptr + 2));

return 0;
}
//segundo caso (5 e 11)