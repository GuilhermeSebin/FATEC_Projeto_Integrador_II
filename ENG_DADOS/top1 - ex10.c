#include <stdio.h>

int main(){

int num, i;

printf("Entre com um numero: ");
scanf("%d", &num);

i = 0;

while (i <= num) {
    printf("%d ", i);
    i++;
}

return 0;
}
