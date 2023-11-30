/*
Elaborar um programa que leia dois valores inteiros (A e B).
Em seguida faça uma função que retorne a soma do dobro dos dois numeros lidos.
A função deverá armazenar o dobro de A na propria variável A e o dobro de B na propria variavel B. 
*/

#include <stdio.h>
#include <stdlib.h>

int SomaDobro(int *C, int *D){
    *C = *C + *C;
    *D = *D + *D;
    int F = *C + *D;
    return F;
}

int main(){
    int A, B;
    printf("Insira dois números inteiros: ");
    scanf("%d %d", &A, &B);
    int E = SomaDobro(&A, &B);
    printf("%d", E);
    return 0;
}