// Estrutura do Aluno
typedef struct {
    int matricula;
    char nome[50];
    float nota;
} Aluno;

// Estrutura da Lista Sequencial
typedef struct {
    Aluno alunos[100];
    int quantidade;
} Lista;



float calcularMedia(Lista l) {
    float soma = 0.0;
    int i;

    if (l.quantidade == 0) return 0.0;

    for (i = 0; i < l.quantidade; i++) {
        soma += l.alunos[i].nota;
    }

    return soma / l.quantidade;
}