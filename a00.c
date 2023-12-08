/*
Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char.
Associe as variaveis aos ponteiros (use &).
Modifique os valores de cada variavel usando os ponteiros.
Imprima os valores das variáveis antes e após a modificação. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int a, *d;
    float b, *f;
    char c, *g;
    printf("Insira um valor inteiro:");
    scanf("%d", &a);
    printf("Insira um valor real:");
    scanf("%f", &b);
    printf("Insira um caracter:");
    scanf(" %c", &c);
    d = &a;
    f = &b;
    g = &c;
    printf(" a = %d, b = %f, c = %c,\nd = %p, f = %p, g = %p", a, b, c, d, f, g);
    *d += 2;
    *f *= 2;
    *g = 'g';
    printf(" a = %d, b = %f, c = %c,\nd = %p, f = %p, g = %p", a, b, c, d, f, g);
    return 0;
}
