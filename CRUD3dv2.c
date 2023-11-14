#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int n1;
    int n2;
    int n3;
} Materia;

typedef struct {
    Materia* materias;
} Aluno;

typedef struct {
    Aluno* alunos;
} Turma;

typedef struct {
    Turma* colegio;
}

int main() {
    Turma minhaTurma;

    // Solicitando ao usuário o número de alunos na turma
    int numAlunos;
    printf("Digite o numero de alunos na turma: ");
    scanf("%d", &numAlunos);
    
    // Alocando memória para o array de alunos
    minhaTurma.alunos = (Aluno*)malloc(numAlunos * sizeof(Aluno));

    // Atribuindo valores para cada aluno
    for (int i = 0; i < numAlunos; i++) {
        printf("Digite as notas do aluno %d:\n", i+1);
        printf("Nota 1: ");
        scanf("%d", &minhaTurma.alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%d", &minhaTurma.alunos[i].nota2);
        printf("Nota 3: ");
        scanf("%d", &minhaTurma.alunos[i].nota3);
    }

    // Exibindo os valores das notas dos alunos
    for (int i = 0; i < numAlunos; i++) {
        printf("Aluno %d: ", i+1);
        printf("Nota 1: %d, ", minhaTurma.alunos[i].nota1);
        printf("Nota 2: %d, ", minhaTurma.alunos[i].nota2);
        printf("Nota 3: %d\n", minhaTurma.alunos[i].nota3);
    }

    // Liberando a memória alocada para o array de alunos
    free(minhaTurma.alunos);

    return 0;
}