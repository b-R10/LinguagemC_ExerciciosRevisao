/*
Faca um programa que leia tres valores inteiros e chame uma funcao que receba estes 3 valores de entrada e
retorne eles ordenados, ou seja, o menor valor na primeira variavel, o segundo menor valor na variavel do meio,
e o maior valor na ultima variavel. A funcao deve retornar o valor 1 se os tres valores forem iguais e 0 se
existirem valores diferentes. Exibir os valores ordenados na tela.
*/

#include <stdio.h>
#include <stdlib.h>

void ordenar(int *a, int *b, int *c){
    int temp;
    if(*a > *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if(*b > *c){
        temp = *b;
        *b = *c;
        *c = temp;
    }
    if(*a > *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main(){
    int a, b, c;
    printf("Insira três valores inteiros:\n");
    scanf("%d %d %d", &a, &b, &c);
    ordenar(&a, &b, &c);
    printf("%d\t%d\t%d", a, b, c);
    return 0;
}