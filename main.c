#include <stdio.h>
#include "aluno.h"
#include "lista.h"

// ex 03 funcao auxiliar para mostrar resultado da busca
void mostrarBuscaAluno(Lista l, int rm) {
    int idx = buscarAlunoPorRM(l, rm);
    if (idx != -1) {
        printf("Aluno com RM %d encontrado no índice %d:\n", rm, idx);
        imprimirAluno(l.dados[idx]);
    } else {
        printf("Aluno com RM %d não encontrado.\n", rm);
    }
}

int main() {
    // ex 01 alterar nota
    // Cria um aluno chamado "Pedro" com RM 123 e nota inicial 7.5
    Aluno aluno = criarAluno("Pedro", 123, 7.5);

    // Imprime os dados do aluno antes de alterar a nota
    printf("Antes: ");
    imprimirAluno(aluno);

    // Altera a nota do aluno para 9.0
    aluno.nota = 9.0;

    // Imprime os dados do aluno após a alteração da nota
    printf("Depois: ");
    imprimirAluno(aluno);

    // ex 03 buscar aluno
    Lista l;
    l.tamanho = 0;
    // Adiciona alguns alunos à lista
    l.dados[l.tamanho++] = criarAluno("Pedro", 123, 7.5);
    l.dados[l.tamanho++] = criarAluno("Maria", 456, 8.0);
    // Executa buscas e mostra resultados
    mostrarBuscaAluno(l, 123);
    mostrarBuscaAluno(l, 999);

    return 0;

// ex 02 remover último aluno
printf("\nRemovendo o último aluno...\n");
    if (removerUltimoAluno(&l)) {
        printf("Remoção bem sucedida!\n");
    } else {
        printf("Falha na remoção (lista vazia).\n");
    }
    imprimirListaAlunos(l);

    return 0;
}