#include <stdio.h>
#include <stdlib.h> // para usar abs()

int main(){

int n1, n2, sub;

printf("Entre o primeiro numero: ");
scanf("%d", &n1);
printf("Entre o segundo numero: ");
scanf("%d", &n2);

sub = (n1 - n2);
sub = abs(sub);

printf("A subtracao e: %d", sub);






return 0;
}
