include <stdio.h>

long fatorial1(long n)
{
    if ((n == 1) || (n == 0))   {
        return 1;
    }
    else    {
        return ( fatorial1(n-1)*n);
    }
}

long fatorial2(int n)
{
    long fat;

    if  ((n == 1) || (n == 0))   {
        fat = 1;
    }

    else    {
        for (fat = 1; n > 1; n--)   {
            fat *= n;
        }
    }
    return fat;
  
int main(int argc, char** argv)
{
    long int n;
    long int fat1, fat2;
    scanf("%ld", &n);
    
    fat1 = fatorial1(n);
    fat2 = fatorial2(n);
    printf("%ld\n", fat1);
    printf("%ld\n", fat2);

    return 0;
}   
