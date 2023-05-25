#include <stdio.h>

int main(int argc, char** argv)
{
    char *string1 = "Estrutura de dados";
    char string2[] = "Estrutura de dados";
    int i;

    for (i = 0; i < 18; i++)
    {
        printf("%c", string1[i]);
    }

    printf("\n");

    for (i = 0; i < 18; i++)
    {
        printf("%c", *(string2+i));
    }

    return 0;
}
