/*
Escreva um programa que contenha duas variaveis inteiras.
Compare seus endereços e exiba o maior endereço.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int comparacao_endereco(int *m, int *n){
    if(m > n)
        return m;
    else
        return n;
}

int main(){
    setlocale(LC_ALL, "portuguese");
    int a = 3, *b = &a, c = 9, *d = &c;
    int f = comparacao_endereco(b, d);
    printf("O maior endereço é: %d", f);
    return 0;
}