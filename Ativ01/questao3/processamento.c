#include <stdio.h>

// function receives a vector and returns the average
float calcular_media(float notas[4])
{
    int i;
    float soma = 0;

    for (i = 0; i < 4; i++)
    {
        printf("%f ", notas[i]);  //printing the values
        soma += notas[i];
    }


    return soma/4;
}
