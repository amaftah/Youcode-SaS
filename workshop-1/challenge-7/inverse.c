#include <stdio.h>

int main() {
    int nombre, inverse;

   
    printf("Veuillez entrer un nombre entier à trois chiffres : ");
    scanf("%d", &nombre);

   
    if (nombre >= 100 && nombre <= 999) {
       
        inverse = (nombre % 10) * 100 + ((nombre / 10) % 10) * 10 + nombre / 100;

       
        printf("Le nombre inversé est : %d\n", inverse);
    } else {
        printf("Le nombre n'est pas à trois chiffres.\n");
    }

    return 0;
}

