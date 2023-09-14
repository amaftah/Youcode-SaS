#include <stdio.h>

int main(){

	int a, b, c ,d;

	float somme , moyenne;
	
	printf("entre la valeur de a\n");
	scanf("%d", &a);
	
	printf("entre la valeur de b\n");
	scanf("%d", &b);

	printf("entre la valeur de c\n");
	scanf("%d", &c);

	printf("entre la valeur de d\n");
	scanf("%d", &d);

		
	somme = a + b + c + d;

	moyenne = somme / 4;

	printf("La somme des nombres est : %.2f\n", somme);
    	printf("La moyenne des nombres est : %.2f\n", moyenne);
	
	return(0);
}
