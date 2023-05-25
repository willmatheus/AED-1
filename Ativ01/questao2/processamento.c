#include <stdio.h>

void inverter_vetor(float vet[10])
{
    int i;

    // loop starting from beginning to end
    for (i = 9; i >= 0; i--)
    {
        printf("%f ", vet[i]);
    }
}
