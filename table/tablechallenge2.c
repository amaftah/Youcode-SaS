#include <stdio.h>

int main() {
    int nombre[10];
    int i;
    int plusPetit, plusGrand;

    // Demander à l'utilisateur d'entrer 10 nombres entiers
    printf("Veuillez entrer 10 nombres entiers :\n");
    for (i = 0; i < 10; i++) {
        printf("Nombre %d : ", i + 1);
        scanf("%d", &nombre[i]);
    }

    // Initialiser les valeurs de plusPetit et plusGrand avec le premier nombre du tableau
    plusPetit = plusGrand = nombre[0];

    // Parcourir le tableau pour trouver le plus petit et le plus grand nombre
    for (i = 1; i < 10; i++) {
        if (nombre[i] < plusPetit) {
            plusPetit = nombre[i];
        }
        if (nombre[i] > plusGrand) {
            plusGrand = nombre[i];
        }
    }

    // Afficher le tableau, le plus petit et le plus grand nombre
    printf("\nLe tableau des nombres entiers : ");
    for (i = 0; i < 10; i++) {
        printf("%d ", nombre[i]);
    }

    printf("\nLe nombre le plus petit est : %d\n", plusPetit);
    printf("Le nombre le plus grand est : %d\n", plusGrand);

    return 0;
}


