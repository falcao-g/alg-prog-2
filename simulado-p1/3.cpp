#include <math.h>
#include <stdio.h>

struct hora {
    int hora;
    int minuto;
    int segundo;
};

int main() {
    hora h1, h2;

    int segundos_h1, segundos_h2, h_diff, m_diff, s_diff, diferenca;

    scanf("%d:%d:%d %d:%d:%d", &h1.hora, &h1.minuto, &h1.segundo, &h2.hora,
          &h2.minuto, &h2.segundo);

    segundos_h1 = h1.hora * 3600 + h1.minuto * 60 + h1.segundo;
    segundos_h2 = h2.hora * 3600 + h2.minuto * 60 + h2.segundo;

    diferenca = abs(segundos_h2 - segundos_h1);

    h_diff = diferenca / 3600;
    m_diff = (diferenca % 3600) / 60;
    s_diff = (diferenca % 3600) % 60;

    printf("%02d:%02d:%02d\n", h_diff, m_diff, s_diff);

    return 0;
}