#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    float a , b , c , Mg;
    printf("entrer la valeur de 1er nombre : ");
    scanf("%f" , &a);
    printf("entrer la valeur de 2er nombre : ");
    scanf("%f" , &b);
    printf("entrer la valeur de 3er nombre : ");
    scanf("%f" , &c);
    Mg=pow((a*b*c) , 0.33);
    printf("la moyenne geometrique est :%.2f",Mg);
    return 0;