#ifndef LISTA_H
#define LISTA_H

#include "aluno.h"

#define MAX_ALUNOS 100

typedef struct {
    Aluno alunos[MAX_ALUNOS]; // array de alunos
    int quantidade;           // quantidade de alunos inseridos
} Lista;

// Inicializa a lista de alunos
void inicializarLista(Lista* l);

// Insere um aluno na lista, retorna 1 se OK, 0 se cheia
int inserirAluno(Lista* l, Aluno a);

// Calcula a média das notas dos alunos da lista
float calcularMedia(Lista l);

#endif