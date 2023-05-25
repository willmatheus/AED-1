#include <stdio.h>
#include <math.h>


// calculates the interval
int intervalo_datas(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2)
{
    int intervalo;

    intervalo = (fabs(ano1 - ano2) * 365);      /* calculates the magnitude of the difference
                                                    between dates*/
    intervalo -= (fabs(mes1 - mes2) * 30);
    intervalo -= (fabs(dia1 - dia2));

    return intervalo;
}
