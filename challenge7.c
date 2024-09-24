#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float a , b , c , M;
    printf("entrer la valeur de 1er nombre : ");
    scanf("%f" , &a);
    printf("entrer la valeur de 2er nombre : ");
    scanf("%f" , &b);
    printf("entrer la valeur de 3er nombre : ");
    scanf("%f" , &c);
    M=(a*2+b*3+c*5)/10;
    printf("la moyenne est :%.2f",M);
    return 0;
}