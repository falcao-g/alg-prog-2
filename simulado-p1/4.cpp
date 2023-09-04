#include <stdio.h>
#include <string.h>

struct data {
    int d;
    int m;
    int a;
};

int dias(data d);

int main(void) {
    data d;
    int dia;

    scanf("%d/%d/%d", &d.d, &d.m, &d.a);

    dia = dias(d);

    if (dia == 0)
        printf("Domingo\n");
    else if (dia == 1)
        printf("Segunda-feira\n");
    else if (dia == 2)
        printf("Terca-feira\n");
    else if (dia == 3)
        printf("Quarta-feira\n");
    else if (dia == 4)
        printf("Quinta-feira\n");
    else if (dia == 5)
        printf("Sexta-feira\n");
    else if (dia == 6)
        printf("Sabado\n");

    return 0;
}

int f(int a, int m) {
    if (m <= 2) {
        a--;
    }

    return a;
}

int g(int m) {
    if (m <= 2) {
        m += 13;
    } else {
        m++;
    }

    return m;
}

int dias(data d) {
    int f(int a, int m);
    int g(int m);

    int a = f(d.a, d.m);
    int m = g(d.m);

    int dias = (1461 * a) / 4 + (153 * m) / 5 + d.d;

    dias = (dias - 621049) % 7;

    return dias;
}