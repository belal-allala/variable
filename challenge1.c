#include <stdio.h>

int main() {
    char nom[50], prenom[50], sexe;
    int age;
    char email[100];

    printf(" entrer vos informations personnelles :\n");
    printf("Nom : ");
    scanf("%s", nom);

    printf("Prenom : ");
    scanf("%s", prenom);

    printf("Age : ");
    scanf("%d", &age);

    printf("Sexe (M/F) : ");
    scanf(" %c", &sexe); 

    printf("Adresse email : ");
    scanf("%s", email);

    printf("vos informations sont les suivantes :\n");
    printf("Nom : %s\n", nom);
    printf("Prenom : %s\n", prenom);
    printf("Age : %d ans\n", age);
    printf("Sexe : %c\n", sexe);
    printf("Adresse email : %s\n", email);

    return 0;
}