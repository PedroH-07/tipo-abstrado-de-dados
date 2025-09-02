#include <stdio.h>
#include "aluno.h"
#include "lista.h"

// ex 01 alterar nota
int main() {
    // Cria um aluno chamado "Pedro" com RM 123 e nota inicial 7.5
    Aluno aluno = criarAluno("Pedro", 123, 7.5);

    // Imprime os dados do aluno antes de alterar a nota
    printf("Antes: ");
    imprimirAluno(aluno);

    // Altera a nota do aluno para 9.0
    aluno.nota = 9.0;


    Lista turma;
    turma.quantidade = 3;
    turma.alunos[0] = criarAluno("Ana", 101, 7.5);
    turma.alunos[1] = criarAluno("Bruno", 102, 8.0);
    turma.alunos[2] = criarAluno("Carlos", 103, 6.5);

    // Calcula e imprime a média das notas dos alunos da lista
    float media = calcularMedia(turma);
    printf("Média das notas: %.2f\n", media);





    

    // Imprime os dados do aluno após a alteração da nota