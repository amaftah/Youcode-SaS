#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;

    // Demander à l'utilisateur de saisir les coefficients a, b et c
    printf("Veuillez entrer les coefficients de l'equation (a, b, c) : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculer le discriminant
    discriminant = b * b - 4 * a * c;

    // Vérifier la nature des solutions
    if (discriminant > 0) {
        // Deux solutions réelles distinctes
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Les solutions sont : %.2lf et %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        // Une seule solution réelle (racine double)
        root1 = -b / (2 * a);
        printf("La solution est : %.2lf\n", root1);
    } else {
        // Pas de solution réelle (solutions complexes)
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Les solutions complexes sont : %.2lf + %.2lfi et %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}

