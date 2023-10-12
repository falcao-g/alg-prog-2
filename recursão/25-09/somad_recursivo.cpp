#include <stdio.h>

int soma(int n) {
    if (n / 10 == 0) {
        return n;
    } else {
        return n % 10 + soma(n / 10);
    }
}

int main() {
    int n = 12345;
    printf("%d\n", soma(n));
    return 0;
}