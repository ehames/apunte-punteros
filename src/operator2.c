#include <stdio.h>

int main(void)
{
	int *q;
	int i = 1;

	q = &i;

	/* Puedo usar los operadores convencionales sobre el valor apuntado */
	(*q)++; /* Asocia de derecha a izquierda así que necesitamos () */
	fprintf(stdout, "Nuevo valor de i = %d\n", i);

	++*q;
	fprintf(stdout, "Nuevo valor de i = %d\n", i);

	*q = *q + 1;
	fprintf(stdout, "Nuevo valor de i = %d\n", i);
	return 0;
}
