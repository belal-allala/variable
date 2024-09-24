#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float ms , kmh;
    printf("entrer la vitesse en km//h : ");
    scanf("%f" , &kmh);
    ms = kmh * 0.27778;
    printf(" la vitesse en m//s : %f", ms);
    return 0;
}
