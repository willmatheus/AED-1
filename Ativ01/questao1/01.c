/*
    Nome:   William Matheus de Souza Cunha
    Mat:    2215310030

    Atividade 01: Revisão na Linguagem C
    Questão 01
*/

#include <stdio.h>

int main(int argc, char** argv)
{
    int vet[5], i;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", vet[i]);
    }

    return 0;
}
