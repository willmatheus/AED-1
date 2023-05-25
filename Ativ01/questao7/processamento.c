#include <stdio.h>
#define max 20

void quadrado_magico(int n)
{
    int matrix[max][max];
    int i, j, num;
    int soma, soma_dp = 0, soma_ds = 0, soma_l = 0, soma_c = 0;
    int falha = 0;

    num = n-1;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Digite o elemento[%dx%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                soma_dp += matrix[i][j];
            }
            if (i + j == num)
            {
                soma_ds += matrix[i][j];
            }
        }
    }

    if (soma_ds != soma_dp)
    {
        falha++;
    }

    for (i = 0; i < n; i++)
    {
        soma_l = 0;
        soma_c = 0;
        for (j = 0; j < n; j++)
        {
           soma_l += matrix[i][j];
           soma_c += matrix[j][i];
        }
        if (soma_l != soma_dp || soma_c != soma_ds)
        {
            falha++;
        }
    }
    if (falha == 0)
    {
        printf("Soma de cada linha: %d\n", soma_l);
        printf("Soma de cada coluna: %d\n", soma_c);
        printf("Soma da diagonal principal: %d\n", soma_dp);
        printf("Soma da diagonal secundaria: %d\n", soma_ds);
        printf("A matriz eh um quadrado magico!\n");
    }
    else
    {
        printf("A matriz nao eh um quadrado magico!");
    }

}
