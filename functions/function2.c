#include <stdio.h>

// Prototype de la fonction
int Somme(int a, int b);

int main() {
    int num1, num2, resultat;

    // Demande à l'utilisateur d'entrer deux entiers
    printf("Entrez le premier entier : ");
    scanf("%d", &num1);

    printf("Entrez le deuxième entier : ");
    scanf("%d", &num2);

    // Appel de la fonction Somme
    resultat = Somme(num1, num2);

    // Affichage du résultat
    printf("La somme de %d et %d est : %d\n", num1, num2, resultat);

    return 0;
}

// Définition de la fonction Somme
int Somme(int a, int b) {
    return a + b;
}

