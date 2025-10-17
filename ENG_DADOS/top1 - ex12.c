#include <stdio.h>

int main(){

float idade, soma=0, media;
int i = -1;


while (idade >= 0){
    i++;
    soma = (soma + idade);
    printf("Entre com uma idade. Digite -1 para parar: ");
    scanf("%f", &idade);


}

media = (soma / (i));
printf("A media de idades e: %.2f\n", media);


return 0;
}
