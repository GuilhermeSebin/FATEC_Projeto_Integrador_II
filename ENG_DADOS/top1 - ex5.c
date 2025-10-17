#include <stdio.h>

int main(){

float nota;

printf("Nota: ");
scanf("%f", &nota);

if (nota >= 6){
    printf("Aluno aprovado");
} else {
     printf("Aluno reprovado");}

     return 0;
}
