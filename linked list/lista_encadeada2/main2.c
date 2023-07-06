/*
    Nome:   William Matheus de Souza Cunha
    Mat:    2215310030

    Atividade 06: Lista Encadeada
	Lista encadeada 2
*/

#include "lista_encadeada2.h"

int main(int argc, char** argv)
{
    No *lista;
	int i, n;

	lista = criar(); //lista = NULL;

	for (i = 0; i < 1000; i++)
	{
		scanf("%d", &n);
		lista = inserir(lista, n);
	}

	return 0;
}
