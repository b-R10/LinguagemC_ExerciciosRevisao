/*
Escreva uma funçao que aceita como parametro um array de inteiros com N valores, e determina o maior elemento
do array e o numero de vezes que este elemento ocorreu no array.
Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a funcção deve retorna
para o programa que a chamou o valor 15 e o numero 3 (indicando que o numero 15 ocorreu 3 vezes).
A funcao deve ser do tipo void.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void maiorElemento(int *enderecoVetor, int contagem){
    int aux = -1.0e3;
    int contador = 1;
    for(int i=0; i<contagem; i++){
        if(enderecoVetor[i]==aux)
            contador++;
        if(enderecoVetor[i]>aux)
            aux = enderecoVetor[i];
    }
    printf("Maior: %d, ocorreu %d vez(es)", aux, contador);
}

int main(){
    int N;
    printf("Insira o número de posições dentro do array:");
    scanf("%d", &N);

    int vetor[N];
    for(int i=0; i<N; i++){
        printf("Insira o valor para a posição %d:\n", i+1);
        scanf("%d", &vetor[i]);
    }

    maiorElemento(vetor, N);

    return 0;
}