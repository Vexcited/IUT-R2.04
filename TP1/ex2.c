#include<stdio.h>

int main (void) {
	int n1;
	int n2;

	printf("Entrez un entier: ");
	scanf("%d", &n1);

	printf("Entrez un deuxième entier: ");
	scanf("%d", &n2);

	if (n1 > n2) {
		printf("%d est plus grand que %d\n", n1, n2);
	}
	else if (n1 < n2) {
		printf("%d est plus petit que %d\n", n1, n2);
	}
	else {
		printf("Les deux entiers que vous avez entré sont égaux.\n");
	}

	return 0;
}

