#include <stdio.h>
#include "aluno.h"

// ex 01 alterar nota
int main() {
    // Cria um aluno chamado "Pedro" com RM 123 e nota inicial 7.5
    Aluno aluno = criarAluno("Pedro", 123, 7.5);

    // Imprime os dados do aluno antes de alterar a nota
    printf("Antes: ");
    imprimirAluno(aluno);

    // Altera a nota do aluno para 9.0
    aluno.nota = 9.0;

    // Imprime os dados do aluno após a alteração da nota