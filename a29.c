/*
Escreva um programa que receba um número inteiro representando a quantidade total de
segundos e, usando passagem de parâmetros por referência, converta a quantidade informada
de segundos em Horas, Minutos e Segundos.
Imprima o resultado da conversão no formato HH:MM:SS.
Utilize a seguinte função protótipo:
    void converteHora (int total_segundos, int *hora, int *min, int *seg);
*/
#include <stdio.h>
#include <stdlib.h>

void converteHora(int total_segundos, int *hora, int *min, int *seg);

int main(){
    int segundos_totais, horas, minutos, segundos;
    printf("Insira a quantidade total de segundos: ");
    scanf("%d", &segundos_totais);

    converteHora(segundos_totais, &horas, &minutos, &segundos);
        // envia como parâmetros
            // segundos totais
            // endereço de horas
            // endereço de minutos
            // endereço de segundos

    printf("%d:%d:%d", horas, minutos, segundos);

    return 0;
}

void converteHora(int total_segundos, int *hora, int *min, int *seg){
    *hora = total_segundos/3600;
    *min = (total_segundos%3600)/60; // o resto da divisão das horas dividido por 60 fornece os segundos
    *seg = total_segundos%60;        // o resto da divisão do total por 60 resulta nos segundos que sobra,
}