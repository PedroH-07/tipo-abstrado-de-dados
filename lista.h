#ifndef LISTA_H
#define LISTA_H

#include "aluno.h"

typedef struct {
    Aluno dados[100];
    int tamanho;
} Lista;

#define MAX_ALUNOS 100

typedef struct {
    Aluno dados[MAX_ALUNOS];
    int tamanho;
} Lista;

int removerUltimoAluno(Lista *l);
void imprimirListaAlunos(Lista l);

int buscarAlunoPorRM(Lista l, int rm);

#endif

