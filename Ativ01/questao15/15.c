#include <stdio.h>
#include <math.h>
#include "processamento.c"

int main(int agrc, char** argv)
{
    int intervalo;

    struct dma
    {
        int dia;
        int mes;
        int ano;
    };

    struct dma dma1;
    struct dma dma2;

    printf("Digite o dia/mês/ano: ");
    scanf("%d %d %d", &dma1.dia, &dma1.mes, &dma1.ano);

    printf("Digite o dia/mês/ano: ");
    scanf("%d %d %d", &dma2.dia, &dma2.mes, &dma2.ano);

    intervalo = intervalo_datas(dma1.dia, dma1.mes, dma1.ano, dma2.dia, dma2.mes, dma2.ano);
    printf("O intervalo entre as datas é igual a: %d dias\n", intervalo);

    return 0;
}
