#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *super_malloc(int size)
{
	char *ptr = NULL;

	ptr = malloc(size);
	if (ptr) {
		memset(ptr, 0, size);
	} else {
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	return ptr;
}


int main(void)
{
	const int N = 15;
	char *a, *b;

	a = super_malloc(N);
	b = super_malloc(N);

	strcpy(a, "Por el Río Paraná venía navegando...");

	printf("La cadena a='%s'\n", a);
	printf("La cadena b='%s'\n", b);

	printf("a[15]='%c'\n", a[20]);

	return 0;
}
