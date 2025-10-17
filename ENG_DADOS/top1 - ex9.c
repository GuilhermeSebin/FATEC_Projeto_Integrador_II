#include <stdio.h>

int main(){

int num;
int fat = 1;

printf("Entre com um numero e descubra seu fatorial: ");
scanf("%d", &num);


int i = 1;

while (i <= num) {
    fat = fat * i;
    i++;

    }
    printf("O fatorial do numero e: %d\n", fat);

    return 0;
}
