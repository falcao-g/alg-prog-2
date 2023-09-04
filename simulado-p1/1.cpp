#include <stdio.h>
#include <string.h>

struct tAluno {
    char nome[30];
    int matricula;
    char curso[30];
} alunos[5];

int main() {
    for (int i = 0; i < 5; i++) {
        scanf("%d", &alunos[i].matricula);
        scanf(" %30[^\n]", alunos[i].nome);
        scanf(" %30[^\n]", alunos[i].curso);
    }

    char pesquisa[30];
    scanf(" %30[^\n]", pesquisa);

    for (int i = 0; i < 5; i++) {
        if (strcmp(alunos[i].curso, pesquisa) == 0) {
            printf("%d %s\n", alunos[i].matricula, alunos[i].nome);
        }
    }

    return 0;
}