/*
Crie um programa que contenha um array de inteiros contendo 5 elementos.
Utilizando apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
*/

#include <stdio.h>
#include <stdlib.h>

void dobro(int *a){
    for(int i=0; i<5; i++)
        printf("%d\n", 2*(a[i]));
}

int main(){
    int vetor[5]={0,1,2,3,4};
    dobro(vetor);
    return 0;
}