#include <stdio.h>

int main() {
    int valeur1, valeur2;
    int somme;

    // Demander à l'utilisateur de saisir deux valeurs entières
    printf("Veuillez entrer la première valeur entière : ");
    scanf("%d", &valeur1);

    printf("Veuillez entrer la deuxième valeur entière : ");
    scanf("%d", &valeur2);

    // Calculer la somme des deux valeurs
    somme = valeur1 + valeur2;

    // Vérifier si les deux valeurs sont identiques
    if (valeur1 == valeur2) {
        // Si elles sont identiques, renvoyer le triple de leur somme
        somme *= 3;
    }

    // Afficher le résultat
    printf("La somme est : %d\n", somme);

    return 0;
}

