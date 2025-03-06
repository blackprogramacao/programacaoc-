#include <stdio.h>
#include <string.h>

typedef struct {
    char carta;
    char estado;
    char *cidade;
    char *codigo;
    int populacao;
    int pontoturisco;
    float area;
    float pib;
} carta;

int main() {
    carta carta1 = {'1', 'A', "São Paulo", "A01", 12325000, 50, 1521.11, 699.28};
    carta carta2 = {'2', 'B', "Rio de Janeiro", "B02", 6775561, 40, 1200.50, 450.30};

    if (carta1.populacao > carta2.populacao) {
        printf("Carta 1 tem maior populacao.\n");
    } else {
        printf("Carta 2 tem maior populacao.\n");
    }

    if (carta1.pib > carta2.pib) {
        printf("Carta 1 tem maior PIB.\n");
    } else {
        printf("Carta 2 tem maior PIB.\n");
    }

    return 0;
}
