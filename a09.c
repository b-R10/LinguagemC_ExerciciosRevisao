#include <stdio.h>
#include <ctype.h>

void maiuscula(char *s){        // recebe a string palavra no ponteiro *s
                                // utilizar a passagem por referência faz com que sejam alterados os valores armazenados onde s aponta
                                // assim, vão ser alterados os caracteres da variável palavra(apontada por s) e não em uma "cópia" recebida
    int i=0;
    // printf("%d\n", *s);
    // printf("%s\n", s);
    while (s[i] != '\0'){       // enquanto o caracter na posição i seja diferente de void, realizar o laço
        s[i]=toupper(s[i]);     // transforma o caracter selecionado em maiusculo
        i++;                    // adiciona 1 ao contador
    }
    return;
}

int main(){
    char palavra[10];
    scanf("%s", palavra);
    maiuscula(palavra);         // passa como referência a string palavra
    printf("%s\n", palavra);
    return 0;
}