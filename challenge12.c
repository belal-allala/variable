#include <stdio.h>

int main() {
    int nombre, lmille, cent, dix, unite, inverce;

    printf("Entrer un nombre a 4 chiffres : ");
    scanf("%d", &nombre);

    lmille = (nombre / 1000) % 10;
    cent = (nombre / 100) % 10;
    dix = (nombre / 10) % 10;
    unite = nombre % 10;

    inverce = (unite * 1000) + (dix * 100) + (cent * 10) + lmille;

    printf("L'inverse de %d est %d\n", nombre, inverce);

    return 0;
}