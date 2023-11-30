/*
    Crie um programa que contenha uma funcao que permita passar por parametro dois numeros inteiros A e B.
    A funcao devera calcular a soma entre estes dois numeros e armazenar o resultado na variavel A.
    Esta funcao nao devera possuir retorno, mas devera modificar o valor do primeiro parametro.
    Imprima os valores de A e B na funcao principal
*/

#include <stdio.h>
#include <stdlib.h>

void modificar(int *num1, int num2){
    *num1 += num2;
}

int main(){
    int A, B;
    printf("Insira dois números inteiros:\n");
    scanf("%d %d", &A, &B);
    modificar(&A, B);
    printf("A = %d, B = %d", A, B);
    return 0;
}