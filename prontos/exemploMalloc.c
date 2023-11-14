#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int n1;
    int n2;
    int n3;
} Aluno;

typedef struct {
    Aluno* alunos;
} Turma;

int main() {
    Turma A;

    // Solicitando ao usuário o número de alunos na turma
    int numAlunos;
    printf("Digite o numero de alunos na turma: ");
    scanf("%d", &numAlunos);
    
    // Alocando memória para o array de alunos
    A.alunos = (Aluno*)malloc(numAlunos * sizeof(Aluno));

    // Atribuindo valores para cada aluno
    for (int i = 0; i < numAlunos; i++) {
        printf("Digite as notas do aluno %d:\n", i+1);
        printf("Nota 1: ");
        scanf("%d", &A.alunos[i].n1);
        printf("Nota 2: ");
        scanf("%d", &A.alunos[i].n2);
        printf("Nota 3: ");
        scanf("%d", &A.alunos[i].n3);
    }

    // Exibindo os valores das notas dos alunos
    for (int i = 0; i < numAlunos; i++) {
        printf("Aluno %d: ", i+1);
        printf("Nota 1: %d, ", A.alunos[i].n1);
        printf("Nota 2: %d, ", A.alunos[i].n2);
        printf("Nota 3: %d\n", A.alunos[i].n3);
    }

    // Liberando a memória alocada para o array de alunos
    free(A.alunos);

    return 0;
}