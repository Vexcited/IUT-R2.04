#include<stdio.h>

int main (void) {
	short int tab[10];

	for (int i = 0; i < 10; i++) {
		printf("Entrez l'entier pour l'index %d: ", i);
		scanf("%hd", &tab[i]);
	}

	for (int i = 0; i < 10; i++) {
		printf("%d %d\n", tab[i], &tab[i]);
	}

	return 0;
}

