#include <stdio.h>

// function that receives a vector and returns the average
float calcular_media(float notas[4])
{
    int i;
    float soma = 0;

    for (i = 0; i < 4; i++)
    {
        soma += notas[i];
    }


    return soma/4;
}
