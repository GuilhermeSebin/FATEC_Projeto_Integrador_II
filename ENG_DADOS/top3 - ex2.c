/*Top3 - ex2*/

#include <stdio.h>
#include <stdbool.h>
//funcao
bool primo(int num){
    if (num <= 1)
    return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0){
            return false;
            }
        }
        return true; }
//funcao principal
int main(){
    int num;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &num);

    if (primo(num)){
        printf("O numero %d e primo.", num);
    } else {
        printf("O numero %d nao e primo.", num);
return 0;
    } }

