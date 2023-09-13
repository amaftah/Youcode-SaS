#include <stdio.h>

int main() {
    // Déclaration des variables pour stocker les informations personnelles
    char nom[50];
    char prenom[50];
    int age;
    char sexe;
    char numeroTelephone[20];

    // Saisie des informations personnelles depuis le clavier
    printf("Entrez votre nom : ");
    scanf("%s", nom);

    printf("Entrez votre prénom : ");
    scanf("%s", prenom);

    printf("Entrez votre âge : ");
    scanf("%d", &age);

    printf("Entrez votre sexe (M/F) : ");
    scanf(" %c", &sexe);

    printf("Entrez votre numéro de téléphone : ");
    scanf("%s", numeroTelephone);

    // Affichage des informations personnelles
    printf("\nInformations personnelles :\n");
    printf("Nom : %s\n", nom);
    printf("Prénom : %s\n", prenom);
    printf("Âge : %d\n", age);
    printf("Sexe : %c\n", sexe);
    printf("Numéro de téléphone : %s\n", numeroTelephone);

    return 0;
}
