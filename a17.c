/*
Crie um programa que contenha um array contendo 5 elementos inteiros.
Leia esse array do teclado e imprima o endereço das posiçoes contendo valores pares.
*/

#include <stdio.h>
#include <stdlib.h>

void pares(int vetor[5]){
    for(int i=0; i<5; i++)
        if(vetor[i]%2 == 0)
            printf("%d\n", vetor[i]);
}

int main(){
    int vetor[5]={1,2,3,4,5};
    pares(vetor);
    return 0;
}