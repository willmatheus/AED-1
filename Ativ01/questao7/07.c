/*
    Nome:   William Matheus de Souza Cunha
    Mat:    2215310030

    Atividade 01: Revisão na Linguagem C
    Questão 07
*/

#include <stdio.h>
#include "processamento.c"


int main(int argc, char** argv)
{
    int n;

    printf("Digite a ordem da matriz quadrada: ");
    scanf("%d", &n);

    quadrado_magico(n);

    return 0;
}


