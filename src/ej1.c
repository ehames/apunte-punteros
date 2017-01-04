#include <stdio.h>

int main(void)
{
	int i = 3, *p = &i;

	printf("i  = %d\n", i);
	printf("*p = %d\n", *p);

	*p = *p + 7; /* Cambio el valor de i */
	printf("i  = %d\n", i);

	return 0;
}
