#include <stdio.h>

int main(void)
{
	int array[] = {2, 3, 5, 7};
	int *p;

	fprintf(stdout, "array[2] = %d\n", array[2]);
	fprintf(stdout, "*(array + 2) = %d\n", *(array + 2));
	fprintf(stdout, "*(2 + array) = %d\n", *(2 + array));
	fprintf(stdout, "2[array] = %d\n", 2[array]);

	fprintf(stdout, "\n\n");
	/* Podemos hacer lo mismo con un puntero */
	p = array;

	fprintf(stdout, "p[2] = %d\n", p[2]);
	fprintf(stdout, "*(p + 2) = %d\n", *(p + 2));
	fprintf(stdout, "*(2 + p) = %d\n", *(2 + p));
	fprintf(stdout, "2[p] = %d\n", 2[p]);

	/* podemos tomar cualquier índice */
	fprintf(stdout, "p[55] = %d\n", p[55]);

	return 2;
}
