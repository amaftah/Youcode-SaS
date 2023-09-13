#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    
    printf("Entrez la température en Fahrenheit : ");
    scanf("%f", &fahrenheit);
    
   
    celsius = (fahrenheit - 32) / 1.8;
    
    if (celsius < 0) {
        printf("Sensation ressentie : Très froid\n");
    } else if (celsius < 10) {
        printf("Sensation ressentie : Froid\n");
    } else if (celsius < 25) {
        printf("Sensation ressentie : Chaud\n");
    } else {
        printf("Sensation ressentie : Très chaud\n");
    }
    
    return 0;
}
	
