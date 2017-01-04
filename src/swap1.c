#include <stdio.h>

/* Intercambia el valor de dos variables */
void swap(int a, int b)
{	
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

int main(void)
{
	int a = 5;
	int b = 7;

	fprintf(stdout, "Antes de swap a = %d, b = %d\n", a, b);
	swap(a, b);
	fprintf(stdout, "Después de swap a = %d, b = %d\n", a, b);

	return 0;
}

