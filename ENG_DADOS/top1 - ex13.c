#include <stdio.h>

int main(){

int soma=0, num=2;

while (soma < 100){
    soma = (soma + num);
    num = (num + 2);
    printf("%d ", soma);
    }

    printf("\nA soma e: %d", soma);


return 0;
}
