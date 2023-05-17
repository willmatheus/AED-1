/*
    Nome:   William Matheus de Souza Cunha
    Mat:    2215310030

    Atividade 01: Revisão na Linguagem C
    Questão 03
*/

#include <stdio.h>

int main(int argc, char** argv)
{
    float nota[4], soma;
    float media;
    int i;

    for (i = 0; i < 4; i++)
    {
        scanf("%f", &nota[i]);
        soma += nota[i];
    }

    media = soma/4;

    printf("Notas: ");

    for (i = 0; i < 4; i++)
    {
        printf("%f ", nota[i]);
    }

    printf("\n");

    printf("Média = %f", media);

    return 0;
}
