/*
Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada 
e retorne o maior valor na primeira variavel e o menor valor na segunda variavel.
Escreva o conteúdo das 2 variáveis na tela
*/
#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b){
    if(*a < *b){
        int aux = *a;
        *a = *b;
        *b = aux;
    }
}

int main(){
    int valor1, valor2;
    printf("Insira dois valores inteiros:\n");
    scanf("%d", &valor1);
    scanf("%d", &valor2);
    troca(&valor1, &valor2);
    printf("%d\t%d", valor1, valor2);
    return 0;
}