#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    float rayon, volume;
    printf("entrez le rayon de la sphere : ");
    scanf("%f", &rayon);
    volume = (4.0/3.0) * 3.14 * pow(rayon, 3);
    printf(" le volume de la sphere est :%.2f",volume);
    return 0;
}