/*
Implemente uma funcao que calcule a area da superfıcie e o volume de uma esfera de raio R.
Essa funcao deve obedecer ao prototipo:
    void calc_esfera(float R, float *area, float *volume)
A area da superfıcie e o volume sao dados, respectivamente, por:
    A = 4 ∗ p ∗ R²
    V = 4/3 ∗ p ∗ R³
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume){      // recebe o valor do raio, o endereco de area 
    float M_PI;                                             // e o endereco de volume
    *area = 4 * M_PI * pow(R,2);
    *volume = (4/3) * M_PI * pow(R,3);
    printf("area = %f\nvolume = %f\n", *area, *volume);
}

int main(){
    float raio, area, volume;

    printf("Insira o raio da circunferencia:");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);


    return 0;
}