/*
    Função base_ln que recebe um inteiro k e retorna a soma dos k primeiros termos da série:
        1 + 1/1! + 1/2! + 1/3! + …
    Utilize a função fatorial.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fatorial(int b){
    if(b == 0)
        return 1;
    else{
        for(int i=b-1; i>0; i--)
            b *= i;
        return b;
    }
}

float base_ln(int k){
    float c, d=0.0; 
    for(int i = 0; i<k; i++){
        c = fatorial(i);
        d += 1.0/c;
        printf("%f\n", d);
    }
    return d;
}

int main(){
    setlocale(LC_ALL, " portuguese");
    printf("Insira um número inteiro: ");
    int k; float a;
    scanf("%d", &k);
    a = base_ln(k);
    printf("%f", a);
    return 0;
}