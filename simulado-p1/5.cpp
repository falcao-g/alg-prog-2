#include <stdio.h>
#include <string.h>

struct tProduto {
    int codigo;
    char nome[30];
    double preco;
};

void Cadastro(struct tProduto prod[10], int *n) {
    struct tProduto novoProduto;
    scanf("%d", &novoProduto.codigo);
    scanf("%s", novoProduto.nome);
    scanf("%lf", &novoProduto.preco);
    prod[(*n)++] = novoProduto;
}

void Imprime(struct tProduto prod[10], int n) {
    printf("LISTAGEM\n");
    for (int i = 0; i < n; i++) {
        printf("%d %s\n", prod[i].codigo, prod[i].nome);
    }
}

int Busca(struct tProduto prod[10], int n, int codigo) {
    for (int i = 0; i < n; i++) {
        if (prod[i].codigo == codigo) {
            return i;
        }
    }
    return -1;
}

int main() {
    int N;
    scanf("%d", &N);
    struct tProduto produtos[10];
    int numProdutos = 0;

    for (int i = 0; i < N; i++) {
        Cadastro(produtos, &numProdutos);
    }

    Imprime(produtos, numProdutos);

    int codigoParaBuscar;
    scanf("%d", &codigoParaBuscar);

    int indice = Busca(produtos, numProdutos, codigoParaBuscar);

    if (indice != -1) {
        printf("Preço: R$ %.2lf\n", produtos[indice].preco);
    } else {
        printf("Inexistente\n");
    }

    return 0;
}