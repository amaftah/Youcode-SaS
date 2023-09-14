#include <stdio.h>

int main() {
    int nombre;


    printf("Veuillez entrer un nombre entier : ");
    scanf("%d", &nombre);

   
    printf("La valeur équivalente en octal est : %o\n", nombre);
    
    printf("La valeur équivalente en hexadécimal est : %X\n", nombre);

    return 0;
}

