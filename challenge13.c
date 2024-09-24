#include <stdio.h>

int main() {
    int decimal, binaire = 0, power = 1;

    printf("Entrez un nombre entier : ");
    scanf("%d", &decimal);

    while (decimal >= 1) {
        binaire = binaire + (decimal % 2) * power;
        decimal /= 2;
        power *= 10;
    }

    printf("Le nombre binaire est : %d\n", binaire);

    return 0;
}