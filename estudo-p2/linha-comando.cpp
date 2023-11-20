#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    // valores pela linha de comando

    // vetor de strings
    printf("%s\n", argv[1]);

    // contador
    printf("%d\n", argc);

    // conversão de tipos
    int x = atoi(argv[1]);
    float y = atof(argv[2]);
    printf("%d\n", x);
}