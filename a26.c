/*
Implemente uma funcao que receba como parametro um array de numeros reais de tamanho N e
retorne quantos numeros negativos ha nesse array. Essa funcao deve obedecer ao prototipo: 
int negativos(float *vet, int N);
*/

#include <stdio.h>
#include <stdlib.h>

int negativos(float *vet, int N);

int main(){
    int N;
    printf("Insira o número de posições dentro do array:");
    scanf("%d", &N);

    float vetor[N];
    for(int i=0; i<N; i++){
        printf("Insira o valor para a posição %d:\n", i+1);
        scanf("%f", &vetor[i]);
    }

    int quantidade = negativos(vetor ,N);
    printf("%d numeros negativos", quantidade);

    return 0;
}

int negativos(float *vet, int n){
    int contador=0;
    for(int i=0;i<n;i++)
        if(vet[i]<0)
            contador++;
    return contador;
}