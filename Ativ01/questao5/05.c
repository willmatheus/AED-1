/*
    Nome:   William Matheus de Souza Cunha
    Mat:    2215310030

    Atividade 01: Revisão na Linguagem C
    Questão 05
*/

#include <stdio.h>
#include <stdlib.h>
#include "processamento.c"

int main(int argc, char** argv)
{
    int vet[20], i;
    int *par;
    int *impar;

    for (i = 0; i < 20; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 20; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");

    par = vet_par(vet);         /* two functions to separate
                                odd numbers from even numbers*/
    impar = vet_impar(vet);

    free(par);
    free(impar);

    return 0;
}
