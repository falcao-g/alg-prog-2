#include <stdio.h>
#define MAX 100

void LeMatriz(int n, int m, int M[MAX][MAX]) {
    for (int linha = 0; linha < n; ++linha) {
        for (int coluna = 0; coluna < m; ++coluna) {
            scanf("%d", &M[linha][coluna]);
        }
    }
}

int ContaLinhasNulas(int n, int m, int M[MAX][MAX]) {
    int linhasNulas = 0, total = 0;
    for (int linha = 0; linha < n; ++linha) {
        for (int coluna = 0; coluna < m; ++coluna) {
            total += M[linha][coluna];
            if (total > 0 || total < 0)
                break;
        }
        if (total == 0)
            linhasNulas++;
        total = 0;
    }
    return linhasNulas;
}

int ContaColunasNulas(int n, int m, int M[MAX][MAX], int &colunasNulas) {
    int total = 0;
    for (int coluna = 0; coluna < m; ++coluna) {
        for (int linha = 0; linha < n; ++linha) {
            total += M[linha][coluna];
            if (total > 0 || total < 0)
                break;
        }
        if (total == 0)
            colunasNulas++;
        total = 0;
    }
    return colunasNulas;
}

int main() {
    int n, m, M[MAX][MAX], colunasNulas = 0, linhasNulas = 0;
    scanf("%d %d", &n, &m);
    LeMatriz(n, m, M);
    colunasNulas = ContaLinhasNulas(n, m, M);
    linhasNulas = ContaColunasNulas(n, m, M, linhasNulas);

    printf("Linhas nulas = %d\nColunas nulas = %d\n", colunasNulas,
           linhasNulas);

    return 0;
}