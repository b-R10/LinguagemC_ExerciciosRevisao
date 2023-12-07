/*
Crie uma função que receba como parâmetro um array e o imprima.
Não utilize índices para percorrer o array, apenas aritmetica de ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>

void imprimirVetor(int *ponteiro, int tamanho){     // o ponteiro recebe o endereço do vetor, tamanho recebe o inteiro
    for(int *i=ponteiro; i<ponteiro+tamanho; i++)   // o ponteiro i recebe o endereço de de vetor e realiza o for enquanto
        printf("%d, ", *i);                         //  i < o endereço + o a quantidade de posições que tamanho indica
}

int main(){
    int vetor[10]={0,1,2,3,4,5,6,7,8,9};

    imprimirVetor(vetor, 10);       // recebe o endereço de vetor e o tamanho do vetor       

    return 0;
}