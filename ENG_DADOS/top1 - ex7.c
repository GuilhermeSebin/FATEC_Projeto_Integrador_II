#include <stdio.h>

int main(){
float n1, n2, n3, media;

printf("Nota 1:");
scanf("%f", &n1);
printf("Nota 2:");
scanf("%f", &n2);
printf("Nota 3:");
scanf("%f", &n3);

media = (n1 + n2 + n3) / 3;

if (media >= 6){
    printf("Aluno aprovado, sua media e %.2f\n", media);
} else {
    printf("Aluno reprovado, sua media e %.2f\n", media);}


return 0;
}
