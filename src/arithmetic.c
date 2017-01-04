#include <stdio.h>

#define N 8

int main(void)
{
	int array[N] = {0, 1, 2, 3, 4, 5, 6, 7};
	int *p = NULL;
	int i = 0;

	p = array;

	fprintf(stdout, "Valor apuntado por p = %d\n", *p);
	fprintf(stdout, "Valor apuntado por p = %d\n", p[0]);

	for (i = 0; i < N; i++) {
		fprintf(stdout, "Valor apuntado por p = %d\n", *p);
		p++;
	}


	return 0;
}
