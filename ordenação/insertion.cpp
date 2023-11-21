#include <stdio.h>
#define MAX 100000

void insertion(int n, int v[MAX]) {  // O(n^2)
    int i, j, x;

    for (i = 1; i < n; i++) {
        x = v[i];
        for (j = i - 1; j >= 0 && v[j] > x; j--)
            v[j + 1] = v[j];
        v[j + 1] = x;
    }
}

int main() {
    int n, v[MAX], i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    insertion(n, v);

    for (i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");

    return 0;
}