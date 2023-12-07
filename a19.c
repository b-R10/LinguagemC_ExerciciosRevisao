/*
Elabore uma funcao que receba duas strings como parametros e verifique se a segunda string ocorre dentro da primeira.
Use aritmetica de ponteiros para acessar os caracteres das strings
*/

#include <stdio.h>
#include <stdlib.h>

int verificar(char *a, char*b){
    while(*a != '\0'){      // percorre a primeira string
        char *p1 = a;
        char *p2 = b;
        while(*p1 != '\0' && *p2 != '\0' && *p1 == *p2){        // percorre a segunda string somente se houver coincidencia
            p1++;
            p2++;
        }
        if(*p2 == '\0'){
            return 1;
        }
        a++;
    }
    return 0;
}

int main(){
    char *a1 = "Ola, mundo.";
    char *a2 = "mundo";
    if(verificar(a1, a2))       // se retorna 1, a condição é verdadeira
        printf("A segunda ocorre dentro da primeira");
    else                        // se retorna 0, a condição é falsa
        printf("A segunda não ocorre dentro da primeira");
    return 0;
}