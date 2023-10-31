#include <stdio.h>
#include <locale.h>
#include <ctype.h>

void criar();
//void crColegio();
//void crTurma();
//void crNota();

/*
criar -> switch classico 123 - colegio, turma,aluno
crColegio -> quant colegio para cadastrar (struct)
crTurma -> quant turma para cadastrar
crNota ->  notas de alunos por turma
*/

void ler();
//void lerTudo();
//void lerColegio();
//void lerTurma();
//void lerNota();

/* ler -> switch 4 - tudo, 
colegio (n turmas por colegio),
turma (n de alunos por turma),
 notas(notas por aluno)
 
lerTudo -> 3 for alinhados
for alinhados com if para exibicao
*/


void atualizar();
//void atColegio();
//void atTurma();
//void atNota();

/* atualizar -> switch classico 123 - colegio, turma, aluno
colocar id do colegio,turma,aluno
alterar nota,
alterar alunos na turma
alterar colegios no sistema
*/

void excluir();
//void exColegio();
//void exTurma();
//void exNota();

/*excluir -> switch classico 123 - colegio, turma, aluno
exColegio -> numera colegios disponiveis, excluir um
exTurma -> numera turmas disponiveis, excluir um
exNota -> numera alunos disponiveis, exluir uma das notas
*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    char opc;
    
    printf("\n CLedsonB - 2023\n\n");
    printf("\t Sistema centralizado de notas\n\n");
    printf(" [C] - Criar cadastro\n");
    printf(" [V] -  Ver cadastro\n");
    printf(" [A] -  Atualizar cadastro\n");
    printf(" [E] -  Excluir cadastro\n");
    
    printf("\n Digite um dos caracteres disponíveis  : ");
    scanf(" %c", &opc);
    fflush(stdin);
    opc = tolower(opc);
    
    if (opc == 'c') {
        criar();
    } else if (opc == 'v') {
        ler();
    } else if (opc == 'a') {
        atualizar();
    } else if (opc == 'e') {
        excluir();
    }
}

void criar(){
}
void ler(){
}
void atualizar(){
}
void excluir(){
}
