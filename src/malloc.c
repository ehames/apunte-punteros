#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *p;
	int i = 7;

	p = malloc(100);

	strcpy(p, "Hello World");
	fprintf(stdout, "p apunta a %s\n", p);
	fprintf(stdout, "el valor de i es %d\n", 7);

	free(p);

	return 0;
}
