/*
    Nome:   William Matheus de Souza Cunha
    Mat:    2215310030

    Atividade 06: Lista Encadeada
	Lista encadeada 2
*/

#include <stdio.h>
#include <stdlib.h>

/* definição da estrutura de dados */
typedef struct no No;

struct no
{
	int dado;
	No* prox;
};

/*--------------------------------------------------------------------------*/
No* criar()
{
	return NULL;
}

/*--------------------------------------------------------------------------*/
No* inserir(No *lista, int dado)
{
	No *novo;

	novo = (No *)malloc(sizeof(No));
	novo->dado = dado;
	novo->prox = lista;

	return novo;
}

/*--------------------------------------------------------------------------*/
No* excluir(No *lista)
{
	No *temp;

    temp = lista;
    lista = lista->prox;

	temp->prox = NULL;
    free(temp);

	return lista;

}

/*--------------------------------------------------------------------------*/
void imprimir(No *lista)
{
	No *temp;

	temp = lista;

	while( temp != NULL )
	{
		printf( "%d ", temp->dado );
		temp = temp->prox;
	}

	printf("\n");
}

/*--------------------------------------------------------------------------*/
int buscar(No *lista, int dado)
{
	No *temp;

	temp = lista;

	while( temp != NULL )
	{
		if (temp->dado == dado)
			return 1;

		temp = temp->prox;
	}

	return 0;
}

/*--------------------------------------------------------------------------*/
No* excluir_elemento(No *lista, int dado)
{
    No *temp = lista;
	No *ant = NULL;

	if (temp != NULL && temp->dado == dado)
	{
		lista = temp->prox;
		free(temp);
		return lista;
	}

    while (temp != NULL && temp->dado != dado)
    {
		ant = temp;
		temp = temp->prox;
    }

	if (ant != NULL)
	{
		ant->prox = temp->prox;
		free(temp);
	}

	return lista;
}
