/*
Escreva uma funcao que dado um numero real passado como parametro, retorne a parte inteira e a parte fracionaria deste numero.
Escreva um programa que chama esta funcao.
Prototipo: void frac(float num, int* inteiro, float* frac);
*/

#include <stdio.h>
#include <stdlib.h>

void separar(float num, int *inteira, float *fracionaria){
    *inteira = (int)num;            // o valor apontado pelo endereço dentro de inteira é alterado para inteiro
    *fracionaria = num - *inteira;  // o valor apontado pelo endereço dentro de fracionária recebe num - a parte
}                                   // inteira

int main(){
    float numero;
    int parteInteira;
    float parteFracionaria;

    printf("Insira um número real: ");
    scanf("%f", &numero);

    separar(numero, &parteInteira, &parteFracionaria);
        // recebe valor de numero
        // recebe o endereço de parteInteira
        // recebe o endereço de parteFracionaria

    printf("%d\n%f", parteInteira, parteFracionaria);

    return 0;
}