#include <stdio.h>

int main()
{
	int a = 55, b = 66, c = 77;

	printf("The address of a before is %p\n", &a);
	printf("The address of b before is %p\n", &b);
	printf("The address of c before is %p\n", &c);

	a++;
	b++;
	c++;

	printf("\nThe address of a after is  %p\n", &a);
	printf("The address of b after is  %p\n", &b);
	printf("The address of c after is  %p\n", &c);

	return 0;
}
