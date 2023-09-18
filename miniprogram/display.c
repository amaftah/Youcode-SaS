#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DATA 100

// Arrays to store data
char nom[MAX_DATA][50];
char prenom[MAX_DATA][50];
int age[MAX_DATA];
int nombreDonnees = 0;

// Function to display data
void afficherDonnees() {
    for (int i = 0; i < nombreDonnees; i++) {
        printf("Nom : %s, Prénom : %s, Âge : %d\n", nom[i], prenom[i], age[i]);
    }
}

// Function to add data
void ajouterDonnee() {
    if (nombreDonnees < MAX_DATA) {
        printf("Entrez le nom : ");
        scanf("%s", nom[nombreDonnees]);
        printf("Entrez le prénom : ");
        scanf("%s", prenom[nombreDonnees]);
        printf("Entrez l'âge : ");
        scanf("%d", &age[nombreDonnees]);
        nombreDonnees++;
        printf("Donnée ajoutée avec succès.\n");
    } else {
        printf("Le nombre maximum de données a été atteint.\n");
    }
}

// Search function

//void 



int main() {
    int choix;

    do {
        printf("\nMenu d'application\n");
        printf("[1] Afficher les données\n");
        printf("[2] Ajouter une donnée\n");
        printf("[3] Rechercher sur une donnée\n");
        printf("[4] Supprimer une donnée\n");
        printf("[5] Supprimer les données répétées\n");
        printf("[6] Générer le wordlist\n");
        printf("Tapez votre choix [1-6] : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                afficherDonnees();
                break;
            case 2:
                ajouterDonnee();
                break;
            case 3:
               // rechercherDonnee();
                break;
            case 4:
               // supprimerDonnee();
                break;
            case 5:
               // supprimerRepetitions();
                break;
            case 6:
               // genererWordlist();
                break;
            default:
                printf("Choix invalide.\n");
        }
    } while (choix != 7);

    return 0;
}
