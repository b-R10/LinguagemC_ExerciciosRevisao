/*
    Crie um programa que contenha um array de float contendo 10 elementos.
    Imprima o endereco de cada posicao desse array.
*/
#include <stdio.h>
#include <stdlib.h>

void funcao(float *vetor1);

int main(){
    float vetor[10] = {0.3, 1.5684, 2.4385, 3.12312, 4.14342 , 5.454, 6.456, 7.1273, 8.487, 9.7465};
    funcao(vetor);
    return 0;
}

void funcao(float *vetor1){
    int i=0;
    while(i < 10){
        printf("endereço %d =  %p\n", i+1, &vetor1[i]);
        i++;
    }
}