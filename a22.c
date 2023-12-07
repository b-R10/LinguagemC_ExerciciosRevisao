/*
Considere a seguinte declaração: int A, *B, **C, ***D;
Escreva um programa que leia a variavel a e calcule e exiba o dobro, o triplo e o quadruplo
desse valor utilizando apenas os ponteiros B, C e D. 
O ponteiro B deve ser usada para calcular o dobro, C o triplo e D o quadruplo
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int A = 10, *B, **C, ***D;
    B = &A;
    C = &A;
    D = &A;

    printf("%d", *B*2);
    printf("%d", *C*3);
    printf("%d", *D*4);

    return 0;
}