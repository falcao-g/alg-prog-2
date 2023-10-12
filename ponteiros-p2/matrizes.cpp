#include <stdio.h>

using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 3;
    int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int *p;

    // itera sobre uma matriz toda em um loop
    for (p = &matrix[0][0]; p <= &matrix[ROWS - 1][COLS - 1]; p++) {
        printf("%d ", *p);
    }
    printf("\n");

    return 0;
}
