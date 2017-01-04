#include <stdio.h>

int main(void)
{
	int i;
	int *pi = &i;

	char c;
	char *pc = &c;

	/* Puedo usar los operadores convencionales */
	fprintf(stdout, "Valor de pi = %p\n", pi);
	pi++;
	fprintf(stdout, "Nuevo valor de pi = %p\n", pi);

	/* Pero el resultado de la operación, depende del tipo apuntado */
	fprintf(stdout, "Valor de pc = %p\n", pc);
	pc++;
	fprintf(stdout, "Nuevo valor de pc = %p\n", pc);

	return 0;
}
