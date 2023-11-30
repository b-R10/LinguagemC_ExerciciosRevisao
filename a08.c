#include <stdio.h>

void calcula (float r, float *p, float *a){     // recebe dois endereços para ponteiros
    *p = 2 * 3.14 * r;
    *a = 3.14 * r * r;
    return;             // em um procedimento, não existe retorno. Este programa não vai ser executado corretamente
}

int main() {
    float r, p, a;
    scanf("%f", &r);        // add valor a r
    printf("%f\n", &p);
    printf("%f\n", p);
    printf("%f\n", a);
    calcula(r, &p, &a);
    printf("raio = %f, perimetro = %f, area = %f\n", r, p, a);
    return 0;
}