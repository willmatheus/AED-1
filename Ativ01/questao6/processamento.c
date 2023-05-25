#include <stdio.h>
#define max 100

double** multiplicar_matrizes(int l1, int c1, int l2, int c2)
{
    int i, j, k;
    double aux;
    double m1[l1][c1], m2[l2][c2];

    for (i = 0; i < l1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%lf", &m1[i][j]);
        }
    }

    for (i = 0; i < l2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%lf", &m2[i][j]);
        }
    }

    double **m3 = (double **) malloc(l1*sizeof(double *));

    for (i = 0; i < c2; i++)
    {
        *(m3+i) = (double *) malloc(c2*sizeof(double));
    }

    for (i = 0; i < l1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            aux = 0;
            for (k = 0; k < l1; k++)
            {
                aux += m1[i][k]*m2[k][j];
                *(*(m3+i)+j) = aux;
            }
        }
    }

    return m3;
}
