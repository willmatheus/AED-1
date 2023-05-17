/*
    Nome:   William Matheus de Souza Cunha
    Mat:    2215310030

    Atividade 01: Revisão na Linguagem C
    Questão 02
*/

#include <stdio.h>

int main(int argc, char** argv)
{
    float vet[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        scanf("%f", &vet[i]);
    }

    for (i = 9; i >= 0; i--)
    {
        printf("%f\n", vet[i]);
    }

    return 0;
}
