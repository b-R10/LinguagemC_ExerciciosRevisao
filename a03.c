/*
Construa uma função que retorna 1 se o valor passado como parâmetro for primo, e 0 caso contrário.
*/

#include <stdio.h>
#include <stdlib.h>

int teste(int b){
    int c = 0;
    for(int i=2;i<=b;i++){
        if(b%i == 0){
            c++;
        }
    }
    if(c == 1){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int a;
    printf("Insira um número inteiro: ");
    scanf("%d", &a);
    int d = teste(a);
    printf("%d", d);
    return 0;
}