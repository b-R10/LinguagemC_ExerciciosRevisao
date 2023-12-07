/*
Crie uma função que receba dois parametros: um array e um valor do mesmo tipo do array.
A funcao devera preencher os elementos de array com esse valor.
Nao utilize ındices para percorrer o array, apenas aritmetica de ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>

void preencherArray(int *ponteiro_vetor, int tamanho , int valor){      // o ponteiro ponteiro_vetor recebe o endereço vetor
    printf("%d, %d\n", ponteiro_vetor,          // o endereço que o ponteiro primeiro_vetor recebeu e
                        *ponteiro_vetor);       // depois, o valor que o ponteiro aponta

    for(int *i = ponteiro_vetor; i<ponteiro_vetor+tamanho; i++)         // i recebe o valor apontado pelo endereço que o 
        *i = valor;                                                     // ponteiro_vetor recebeu. E dura enquanto i < que
                                                                        // o endereço do ponteiro_vetor + a quantidade de 
                                                                        // posições(tamanho)
}

int main(){
    int vetor[5]={0,0,0,0,0};
    int a=9;

    for(int i=0;i<5;i++)            // imprime os valores do vetor antes de chamar a função
        printf("%d, ", vetor[i]);
    printf("\n");

    printf("%d, %d, %p\n", vetor,           // imprime o endereço de vetor no formato inteiro,
                          *vetor,           // imprime o valor apontado pelo endereço,
                          &vetor);          // e imprime endereço do vetor em formato hexadecimal

    preencherArray(vetor, 5, a); // preencherArray recebe o vetor, o tamanho do vetor, e o valor a ser inserido

    for(int i=0;i<5;i++)            // imprime os valores do vetor após chamar a função
        printf("%d, ", vetor[i]);

    return 0;
}