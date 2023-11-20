#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int *p, *M, m = 3, n = 3;

    M = (int *)malloc(m * n * sizeof(int));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int a = i * n + j;
            scanf("%d", &M[a]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int a = i * n + j;
            printf("%d", M[a]);
        }
    }

    return 0;
}