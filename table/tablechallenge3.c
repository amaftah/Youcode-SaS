#include <stdio.h>

int main() {
    int tableau[10];
    int temp;

    // Demander à l'utilisateur de saisir 10 nombres entiers
    printf("Veuillez saisir 10 nombres entiers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &tableau[i]);
    }

    // Tri à bulles pour trier le tableau de manière décroissante
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (tableau[j] < tableau[j + 1]) {
                // Échanger les éléments si nécessaire
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    // Afficher le tableau trié
    printf("Tableau trié de plus grand au plus petit:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}

