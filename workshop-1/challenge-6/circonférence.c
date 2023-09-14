#include <stdio.h>
#include <math.h>

int main() {
    double rayon, circonference;
    const double pi = 3.14159265359;

    // Demander à l'utilisateur de saisir le rayon du cercle
    printf("Veuillez entrer le rayon du cercle : ");
    scanf("%lf", &rayon);

    // Calculer la circonférence du cercle
    circonference = 2 * pi * rayon;

    // Afficher la circonférence
    printf("La circonférence du cercle est : %lf\n", circonference);

    return 0;
}

