#include <stdio.h>
#include <stdlib.h>

// these functions separate even and odd numbers in two different vectors and return them
int* vet_par(int vet[20])
{
    int i, j = 0;
    int *par = (int *) malloc(20*sizeof(int)); // dynamic allocation of even vector

    for (i = 0; i < 20; i++)
    {
        if (vet[i] % 2 == 0)        // even verification
        {
            *(par+j) = vet[i];
            j++;
        }
    }

    for (i = 0; i < j; i++)
    {
        printf("%d ", *(par+i));    // print even numbers
    }
    printf("\n");

    return par;
}


int* vet_impar(int vet[20])
{
    int i, j = 0;
    int *impar = (int *) malloc(20*sizeof(int));   // dynamic allocation of odd vector

    for (i = 0; i < 20; i++)
    {
        if (vet[i] % 2 == 1)        // odd verification
        {
            *(impar+j) = vet[i];
            j++;
        }
    }

    for (i = 0; i < j; i++)
    {
        printf("%d ", *(impar+i));      // print odd numbers
    }
    printf("\n");

    return impar;
}
