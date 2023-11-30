/*
Faca um programa que leia 2 valores inteiros e chame uma funcao que receba estas 2 variaveis e troque o seu conteudo,
ou seja, esta funcao e chamada passando duas variaveis A e B por exemplo e,
apos a execucao da funcao, A conterá o valor de B e B tera o valor de A
*/

#include<stdio.h>
#include<stdlib.h>

void troca(int m, int n){
    int aux;
    aux = m; m = n; n = aux;
    printf("valores trocados:\n\t%d\n\t%d", m, n);
}

int main(){
    int a, b;
    printf("Insira dois valores:\n");
    scanf("%d %d", &a, &b);
    troca(a, b);
    return 0;
}