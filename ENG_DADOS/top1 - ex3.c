#include <stdio.h>

int main(){
int numero;

printf("Digite um numero inteiro maior que zero: ");
scanf("%d", &numero);

if (numero % 2 == 0) {
    printf("numero par");
} else {
   printf("numero impar");}
   return 0;
}
