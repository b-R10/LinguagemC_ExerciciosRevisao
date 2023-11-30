/*
Função para imprimir todos os valores primos entre A e B recebidos como parâmetro.
Utilizar a função anterior.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void primo(int f){
    int g=0;
    for(int j=2; j<f; j++){
        if(f%j == 0){
            g++;
        }
    }
    if(g == 0){
        printf("%d\n", f);
    }
}

void numeros(int c, int d){
    for(int i=c++; i<d; i++){
        primo(i);
    }
}

int main(){
    setlocale(LC_ALL, "portuguese");
    int a, b;
    printf("Insira dois números inteiros:");
    scanf("%d %d", &a, &b);
    numeros(a, b);
    return 0;
}