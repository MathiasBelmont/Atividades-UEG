#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int conteudo;
    struct celula *proximo;
} celula;

celula *criaCelula(int conteudo)
{
    celula *novaCelula = (celula *)malloc(sizeof(celula));
    novaCelula->conteudo = conteudo;
    novaCelula->proximo = NULL;
    return novaCelula;
}

typedef struct guiche
{
    int Contador;
    int NumGuiche;
    celula *Inicio;
    celula *Fim;
} guiche;

guiche ListaGuiche[10];

int statusListaVazia(int Guiche)
{
    return ListaGuiche[Guiche].Inicio == NULL;
}

void criaFilaGuiche();

void imprimeFila(int Guiche);

void colocaFilaGuiche(int Valor, int Guiche)
{
    celula *novaCelula = criaCelula(Valor);
    if (statusListaVazia(Guiche))
    {
        ListaGuiche[Guiche].Inicio = novaCelula;
        ListaGuiche[Guiche].Fim = novaCelula;
    }
    else
    {
        ListaGuiche[Guiche].Fim->proximo = novaCelula;
        ListaGuiche[Guiche].Fim = novaCelula;
    }
}

celula *buscaRemoveLista(int senha, celula *inicio);

int main()
{
    int Valor;
    criaFilaGuiche();

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            Valor = rand() % 10;
            colocaFilaGuiche(Valor, i);
        }
    }

    // imprimir
    for (int i = 0; i < 10; i++)
    {
        printf("Guiche n%i:", i);
        imprimeFila(i);
        printf("\n\n");
    }

    // Atender os carros
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            ListaGuiche[i].Inicio = buscaRemoveLista(j, ListaGuiche[i].Inicio);
            ListaGuiche[i].Contador++;
        }
    }

    printf("Atendendo...\n\n");

    // imprimir após atender
    for (int i = 0; i < 10; i++)
    {
        printf("Guiche n%i:", i);
        imprimeFila(i);
        printf("\n\n");
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Carros atendidos no guiche n%i : %i\n", i, ListaGuiche[i].Contador);
    }

    return 0;
}

celula *buscaRemoveLista(int senha, celula *inicio)
{
    celula *atual = inicio;
    celula *anterior = NULL;

    while (atual != NULL && atual->conteudo != senha)
    {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == NULL)
    {
        return inicio;
    }

    if (anterior != NULL)
    {
        anterior->proximo = atual->proximo;
    }
    else
    {
        inicio = atual->proximo;
    }

    free(atual);
    return inicio;
}

void imprimeFila(int Guiche)
{
    celula *atual = ListaGuiche[Guiche].Inicio;

    while (atual != NULL)
    {
        printf("Carro:%d ->", atual->conteudo);
        atual = atual->proximo;
    }
}

void criaFilaGuiche()
{
    for (int i = 0; i < 10; i++)
    {
        ListaGuiche[i].Contador = 0; // Inicializar o contador para zero
        ListaGuiche[i].Inicio = NULL;
        ListaGuiche[i].Fim = NULL;
    }
}

