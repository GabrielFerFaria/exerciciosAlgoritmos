#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int a, b, c;
  printf("Digite três valores:\n");
  scanf("%i %i %i", &a, &b, &c);
  if (a==b || b==c || a==c){
    printf("Os valores não são distintos\n");
  }
 if (a>b && a>c && b>c){
   printf("A ordem é %i %i %i", a, b, c);
 }
else if(a>b && a>c && c>b){
  printf("A ordem é %i %i %i", a, c, b);
}
  else if (b>a && b>c && a>c){
    printf("A ordem é %i %i %i", b, a, c);
  }
else if (b>a && b>c && c>a){
  printf("A ordem é %i %i %i", b, c, a);
}
else if (c>a && c>b && a>b){
  printf("A ordem é %i %i %i", c, a, b);
}
else if (c>a && c>b && b>a){
  printf("A ordem é %i %i %i", c, b, a);
}

return 0;
}
