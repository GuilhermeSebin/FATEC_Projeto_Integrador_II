/* Tópico 3 - Exercício 01 */
#include <stdio.h>
int main(){
    int alunos, i;
    int aprovados = 0;
    float nota;
printf("Quantos alunos deseja registrar? ");
scanf("%d", &alunos);
for (i = 1; i <= alunos; i++){
    printf("Qual a nota do aluno? %d ", i);
    scanf("%f", &nota);
    if (nota > 6.0) {
       aprovados++;
        }
    }
printf("Alunos aprovados: %d\n", aprovados);
return 0;
}
