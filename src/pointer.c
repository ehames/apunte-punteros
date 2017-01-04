#include <stdio.h>

int main(void)
{
	int *p, *q;
	int i = 1024;

	/* Los punteros no son inicializados en su declaración */
	fprintf(stdout, "Valor inicial de p = %p\n", p);
	p = &i;

	/* Ahora p apunta a la dirección de i */
	fprintf(stdout, "Nuevo valor de p = %p\n", p);
	fprintf(stdout, "Valor apuntado por p = %d\n", *p);

	/* Cambiemos el valor de la dirección apuntada */
	*p = 1025;
	fprintf(stdout, "Nuevo valor apuntado por p = %d\n", *p);
	fprintf(stdout, "Nuevo valor de i = %d\n", i);

	/* Ahora q apunta a la misma dirección que p */
	q = p;
	fprintf(stdout, "Valor de q = %p\n", q);

	/* Puedo modificar i a través de q */
	*q = 1026;
	fprintf(stdout, "Nuevo valor de i = %d\n", i);

	return 0;
}
