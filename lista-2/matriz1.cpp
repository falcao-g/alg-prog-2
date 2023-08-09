#include <stdio.h>
#define MAX 100

int leDimensao() {
    int n;
    do {
        printf("Digite a dimensao da matriz (entre 0 e 100): ");
        scanf("%d", &n);
    } while (n < 1 || n > MAX);
    return n;
}

void leMatriz(int n, int M[MAX][MAX]) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            printf("Digite o elemento (%d, %d): ", i, j);
            scanf("%d", &M[i][j]);
        }
}

int somaDPrincipal(int M[MAX][MAX], int n) {
    int i, soma;
    soma = 0;
    for (i = 0; i < n; i++)
        soma += M[i][i];
    return soma;
}

int somaDSecundaria(int n, int M[MAX][MAX], int &soma) {
    int i;
    soma = 0;
    for (i = 0; i < n; i++)
        soma += M[i][n - i - 1];
    return soma;
}

void imprimeMatriz(int n, int M[MAX][MAX]) {
    int i, j;
    for (i = 0; i < n; i++) {
        printf("|");
        for (j = 0; j < n; j++)
            printf("%3d", M[i][j]);
        printf("|\n");
    }
}

void imprimeSomas(int n, int M[MAX][MAX], int somaP, int somaS) {
    printf("Soma da diagonal principal: %d\n", somaDPrincipal(M, n));
    printf("Soma da diagonal secundaria: %d\n", somaDSecundaria(n, M, somaS));
}

int main() {
    int n, somaP, somaS;
    int M[MAX][MAX];
    n = leDimensao();
    leMatriz(n, M);
    imprimeMatriz(n, M);
    imprimeSomas(n, M, somaP, somaS);
    return 0;
}
