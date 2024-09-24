#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int c;
    printf("entrer la temperature en Celsius : ");
    scanf("%d" , &c);
    if (c < 0) 
        printf("l\'eau est solide");
    else if (0<=c && c<100)
        printf("l\'eau est liquide");
    else
        printf("l\'eau est gaz");
    return 0;
}