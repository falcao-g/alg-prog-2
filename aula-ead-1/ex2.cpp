#include <stdio.h>

int main() {
    int mat;
    char turma;
    float nota;

    scanf("%d %c %f", &mat, &turma, &nota);

    printf("O estudante de matrícula %d, da turma %c, obteve nota %.1f.\n", mat,
           turma, nota);

    return 0;
}