#include "lista.h"
#include <stdio.h>

int removerUltimoAluno(Lista *l) {
    if (l->tamanho == 0)
        return 0; // Falha: lista vazia
    l->tamanho--;
    return 1; // Sucesso
}

void imprimirListaAlunos(Lista l) {
    printf("Lista de Alunos:\n");
    for (int i = 0; i < l.tamanho; i++) {
        imprimirAluno(l.dados[i]);
    }
    if (l.tamanho == 0) printf("(lista vazia)\n");
}