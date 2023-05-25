/*
    Nome:   William Matheus de Souza Cunha
    Mat:    2215310030

    Atividade 01: Revisão na Linguagem C
    Questão 06
*/

#include <stdio.h>
#include <stdlib.h>
#include "processamento.c"

int main(int argc, char** argv)
{
    double **M;
    int i, j;
    int m, n, p;

    scanf("%d %d %d", &m, &n, &p);
    M = multiplicar_matrizes(m, n, n ,p);

    for(i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%lf ", *(*(M+i)+j));
        }
        printf("\n");
    }

    return 0;
}
