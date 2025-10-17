#include <stdio.h>

int main (){

int i=0;
float idade, soma=0, media;

while (1){
    printf("Entre com uma idade. Digite um numero negativo para encerrar. ");
    scanf("%f", &idade);

    if (idade < 0){
        break;
        }
    soma = (soma + idade);
    i++;
    }

    if (i > 0){
        media = (soma / i);
        printf("A media das idades e: %.2f\n", media);
    } else {
        printf("Nenhuma idade foi inserida.");
        }


return 0;
}
