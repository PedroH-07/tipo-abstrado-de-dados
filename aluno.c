#include <stdio.h>
#include <string.h>
#include "aluno.h"
#include "lista.h"
Aluno criarAluno(const char *nome, int rm, float nota) {
    Aluno a;
    strncpy(a.nome, nome, sizeof(a.nome));
    a.rm = rm;
    a.nota = nota;
    return a;
}
void imprimirAluno(Aluno a) {
    printf("Nome: %s | RM: %d | Nota: %.2f\n", a.nome, a.rm, a.nota);
}
int buscarAlunoPorRM(Lista l, int rm) {
    for (int i = 0; i < l.tamanho; i++) {
        if (l.dados[i].rm == rm) {
            return i;
        }
    }
    return -1;
}