#include <stdio.h>

int main()
{
    int numero;

    scanf("%d", &numero);

    int ultimoDigito = numero % 10;
    int novoNumero = numero / 10;
    int penultimoDigito = novoNumero % 10;

    int soma = ultimoDigito + penultimoDigito;

    printf("A soma dos dois últimos digítos do número %d é %d\n", numero, soma);

    return 0;
}