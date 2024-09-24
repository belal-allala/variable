#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    float xa , ya , za , xb , yb ,zb;
    float d , c;
    printf("entrer la cordonner X de A : ");
    scanf("%f" , &xa);
    printf("entrer la cordonner y de A : ");
    scanf("%f" , &ya);
    printf("entrer la cordonner Z de A : ");
    scanf("%f" , &za);
    printf("entrer la cordonner X de B : ");
    scanf("%f" , &xb);
    printf("entrer la cordonner y de B : ");
    scanf("%f" , &yb);
    printf("entrer la cordonner Z de B : ");
    scanf("%f" , &zb);
    c=pow((xb-xa) ,2)+pow((yb-ya) ,2)+pow((zb-za),2);
    d=pow(c,0.5);
    printf("la distance entre A et B  est :%.2f",d);
    return 0;
}