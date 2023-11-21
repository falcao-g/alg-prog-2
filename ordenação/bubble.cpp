#include <stdio.h>
#define MAX 100000

void bubble(int n, int v[MAX]) {  // O(n^2)
    int i, j, aux;

    for (i = n - 1; i > 0; i--)
        for (j = 0; j < i; j++)
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
}

int main() {
    int n, v[MAX], i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    bubble(n, v);

    for (i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");

    return 0;
}