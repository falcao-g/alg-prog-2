#include <stdio.h>

int main() {
    FILE* arquivo = fopen("nomes.txt", "r+");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char name[100];
    while (fscanf(arquivo, "%s", name) != EOF) {
        printf("Nome: %s\n", name);
    }

    fprintf(arquivo, "\nOlá mundo!\n");

    fclose(arquivo);
    return 0;
}
