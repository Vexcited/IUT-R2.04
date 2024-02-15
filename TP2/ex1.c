#include <stdio.h>

void notation_tableau () {
	char str1[80];
	char str2[80];

	printf("Saisir une chaîne: ");
	fgets(str1, 80, stdin);

	for (int i = 0; str1[i] != '\0'; i++) {
		str2[i] = str1[i];
	}

	printf("str1: %s", str1);
	printf("str2: %s", str2);
}

char *copiechaine(char *dest, char *src) {
	char *ptr1;
	char *ptr2;

	ptr1 = src;
	ptr2 = dest;

	while (*ptr1 != '\0') {
		*ptr2 = *ptr1;
		ptr1++;
		ptr2++;
	}

	*ptr2 = *ptr1;

	return dest;
}

void notation_ptr () {
	char str1[80];
	char str2[80];
	char *p;

	printf("Saisir une chaîne: ");
	fgets(str1, 80, stdin);

	p = copiechaine(str2, str1);
	
	printf("str1: %s", str1);
	printf("str2: %s", p);
}

int main(void) {
	// notation_tableau();
	notation_ptr();
	return 0;
}
