#include <stdio.h>
#include <ctype.h> // Inclure l'en-tête pour tolower

int main() {
    char caractere;

    // Demander à l'utilisateur de saisir un caractère
    printf("Veuillez entrer un caractère : ");
    scanf(" %c", &caractere);

    // Convertir le caractère en minuscule pour simplifier la vérification
    caractere = tolower(caractere);

    // Utiliser une instruction switch pour vérifier si le caractère est une voyelle
    switch (caractere) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c est une voyelle.\n", caractere);
            break;
        default:
            printf("%c n'est pas une voyelle.\n", caractere);
            break;
    }

    return 0;
}

