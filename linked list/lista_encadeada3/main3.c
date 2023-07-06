/*
    Nome:   William Matheus de Souza Cunha
    Mat:    2215310030

    Atividade 06: Lista Encadeada
	Lista encadeada 3
*/

#include "lista_encadeada3.h"

int main(int argc, char** argv)
{
    No *lista;
	int i, n;

	lista = criar(); //lista = NULL;

	for (i = 0; i < 500; i++)
	{
		scanf("%d", &n);
		adicionar_inicio(&lista, n);
	}

	for (i = 0; i < 500; i++)
	{
		scanf("%d", &n);
		adicionar_fim(&lista, n);
	}

	return 0;
}
