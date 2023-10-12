#include <stdio.h>

int euclides(int a, int b) {
    if (b == 0) {
        return a;
    }
    return euclides(b, a % b);
}

int main() {
    int a = 10;
    int b = 5;
    printf("%d\n", euclides(a, b));
    return 0;
}