#include <stdio.h>

void bubble_sort(int arr[], int n)
{
    int i, j, temp;
    int contador1 = 0;
    int contador2 = 0;

    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            contador1++;

            if (arr[j] > arr[j+1])
            {
                contador2++;

                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
