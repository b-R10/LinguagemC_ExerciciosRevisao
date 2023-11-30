#include <stdio.h>

int main(){
    int i=3, j=5;
    int *p, *q;
    p = &i;
    q = &j;
    // printf("\n\t%d", *p);
    // printf("\n\t%d", **&p);
    // printf("\n\t%d\n", *q);

    printf("%d\n %d\n %d\n",
            (*p - *q),
            (**&p),
                /* nesse caso
                    &p : endereço de p
                    *&p : conteúdo do endereço de p
                    **&p : conteúdo do endereço que está armazenado em p
                */
            (3* - *p/(*q)+7)
                /* nesse caso
                    3 * (- 3) / 5 + 7
                */
            );
    return 0;
}