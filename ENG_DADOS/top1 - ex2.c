#include <stdio.h>

int main(){
int c1, c2, h;

printf("Cateto 1: ");
scanf("%d", &c1);
printf("Cateto 2: ");
scanf("%d", &c2);

h = ((c1*c1) + (c2*c2)) * 1/2;
printf("Hipotenusa e: %d\n", h);
return 0;
}
