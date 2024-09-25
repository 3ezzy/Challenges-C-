#include<stdio.h>
int main() {

    char nom[50];
    char prenom[50];
    int age;
    char sexe;
    char email[100];

    printf("entrez votre Nom");
    scanf("%s",&nom);

    printf("Entrez votre prenom: ");
    scanf("%s",&prenom);


    printf("Entrez votre age: ");
    scanf("%d",&age);


    printf("Entrez votre sexe(M/F): ");
    scanf(" %c", &sexe);


    printf("Entrez votre email: ");
    scanf("%s", &email);

    printf("\n--- Informations personnelles ---\n");
    printf("Nom: %s\n", nom);
    printf("Prénom: %s\n", prenom);
    printf("Âge: %d\n", age);
    printf("Sexe: %c\n", sexe);
    printf("Email: %s\n", email);






    return 0;
    }






