/*
    Nome:   William Matheus de Souza Cunha
    Mat:    2215310030

    Atividade 01: Revisão na Linguagem C
    Questão 04
*/

#include <stdio.h>
#include "processamento.c"

int main(int argc, char** argv)
{
    float media[10], nota[4];
    int i, j;
    int cont = 0;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%f", &nota[j]);
        }

        media[i] = calcular_media(nota);  /* vector that receives the averages and
                                            stores them */
        if (media[i] >= 7.0)
        {
            cont++;              /* a counting variable to save the number
                                    of students */
        }
    }
    printf("%d alunos com nota maior ou igual 7.0\n", cont);

    return 0;
}
