#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "quick_sort.c"

#define SIZE 500000

void print_arr(int arr[])
{
    int i;
    for(i=0; i<SIZE; i++)
    {
        printf("%d\n",arr[i]);
    }
}

int main(int argc, char** argv)
{
    int arr[SIZE];
    int i, j, aux=0;
    double start = 0, finish = 0;
    float elapsed;

    for(i=0; i<SIZE; i++)
    {
        scanf(" %d",&arr[i]);
    }
    start = (double) clock() / CLOCKS_PER_SEC;
    quick_sort(arr, 0, SIZE - 1);
    finish = (double) clock() / CLOCKS_PER_SEC;

    elapsed = (double) finish - start;
    printf("%f s\n", elapsed);
    //print_arr(arr);
    return 0;
}
