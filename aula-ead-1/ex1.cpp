#include <stdio.h>

int main() {
    int x, y;
    printf("Digite os valores dos dois inteiros: ");
    scanf("%d %d", &x, &y);

    int soma = x + y;

    printf("%d\n", soma);

    return 0;
}