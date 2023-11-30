/*
    Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
    Imprima o endereço de cada posicao dessa matriz. 
*/
#include<stdio.h>
#include<stdlib.h>

void endereco(float matriz1[3][3]){
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++){
            printf("endereço = %p\n", &matriz1[i][j]);
        }
}

int main(){
    float matriz[3][3];
    endereco(matriz);
    return 0;
}