/*
Escreva uma função com protótipo
    void somabit (int b1, int b2, int *vaium, int *soma);
que recebe três bits (inteiros 0 ou 1): b1 , b2 e *vaium e devolve um bit soma que armazena o
resultado da soma dos três primeiros, e o novo bit "vai-um" em *vaium.
*/

void somabit(int b1, int b2, int *vaium, int *soma) {
    // Realiza a soma dos três bits
    *soma = (b1 ^ b2) ^ *vaium;
    // Atualiza o vai-um para a próxima iteração
    *vaium = (b1 & b2) | ((b1 ^ b2) & *vaium);
}

int main() {
    int bit1, bit2, vaium, soma;

    // Solicita ao usuário para inserir os bits
    printf("Insira o primeiro bit (0 ou 1): ");
    scanf("%d", &bit1);
    printf("Insira o segundo bit (0 ou 1): ");
    scanf("%d", &bit2);
    printf("Insira o vai-um (0 ou 1): ");
    scanf("%d", &vaium);

    // Chama a função somabit
    somabit(bit1, bit2, &vaium, &soma);

    // Exibe o resultado da soma
    printf("Soma: %d\nVai-um: %d\n", soma, vaium);

    return 0;
}