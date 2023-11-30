/*
Função fatorial que recebe um inteiro n e retorna o fatorial de n.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fatorial(int b){
    for(int i=b-1; i>0; i--)
        b *= i;
    return b;
}

int main(){
    setlocale(LC_ALL, " portuguese");
    printf("Insira um número inteiro: ");
    int n, a;
    scanf("%d", &n);
    a = fatorial(n);
    printf("%d", a);
    return 0;
}