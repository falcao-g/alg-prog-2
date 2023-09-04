#include <stdio.h>
#include <string.h>

struct {
    char nome[15];
    float potencia;
    float horas;
} eletrodomestico[5];

int main() {
    float total = 0;

    for (int i = 0; i < 5; i++) {
        scanf(" %15[^\n]", eletrodomestico[i].nome);
        scanf("%f", &eletrodomestico[i].potencia);
        scanf("%f", &eletrodomestico[i].horas);
        total += eletrodomestico[i].potencia * eletrodomestico[i].horas;
    }

    float dias;
    scanf("%f", &dias);

    printf("%.2f\n", total * dias);

    for (int i = 0; i < 5; i++) {
        printf("%.2f\n", eletrodomestico[i].potencia *
                             eletrodomestico[i].horas / total * 100);
    }

    return 0;
}