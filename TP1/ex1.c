#include<stdio.h>

int main (void) {
	int n;

	printf("Entrer un entier: ");
	scanf("%d", &n);

	printf("Prédecesseur: %d %x %o\n", n-1, n-1, n-1);
	printf("Sucesseur: %d %x %o\n", n+1, n+1, n+1);

	return 0;
}
