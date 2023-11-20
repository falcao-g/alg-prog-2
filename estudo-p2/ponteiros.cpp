#include <stdio.h>

int main() {
    int vet[5] = {1, 2, 3, 4, 5};
    int *p;
    p = vet;

    int mat[2][2] = {{1, 2}, {3, 4}};
    int *pt;
    pt = &mat[0][0];

    char *pa;
    pa = "abc";

    char planetas[][9] = {"Mercurio", "Venus", "Terra",  "Marte", "Jupiter",
                          "Saturno",  "Urano", "Netuno", "Plutao"};

    char data[13] = "9 de outubro";
}