#include <stdio.h>

int main() {
    int tableau[10]; // Déclaration du tableau d'entiers de 10 éléments
    int i;

    // Initialisation du tableau avec les nombres de 1 à 10
    for (i = 0; i < 10; i++) {
        tableau[i] = i + 1;
    }

    // Affichage du tableau en séparant les valeurs par des virgules
    for (i = 0; i < 10; i++) {
        printf("%d", tableau[i]); // Affiche la valeur actuelle

        // Si ce n'est pas la dernière valeur, ajoute une virgule
        if (i < 9) {
            printf(", ");
        }
    }

    printf("\n"); // Saut de ligne pour une meilleure présentation

    return 0;
}

