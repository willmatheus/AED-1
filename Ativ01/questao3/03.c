/*
    Nome:   William Matheus de Souza Cunha
    Mat:    2215310030

    Atividade 01: Revisão na Linguagem C
    Questão 03
*/

#include <stdio.h>
#include "processamento.c"

int main(int argc, char** argv)
{
    float notas[4], soma;
    float media;
    int i;

    for (i = 0; i < 4; i++)
    {
        scanf("%f", &notas[i]);
    }

    printf("Notas: ");

    // function that calculates average
    media = calcular_media(notas);

    printf("\n");

    printf("Média = %f", media);

    printf("\n");


    return 0;
}
