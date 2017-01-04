#include <stdio.h>

int main(void)
{
	int i[]={0,1,2,3}, j = 0, *p = &i[0];

	for (j = 0; j < 4; j++) {
		/* Imprime el valor apuntado por p */
		printf("i[%d]  = %d\n", j, *p); 
		/* p apunta al elemento siguiente */
		p++;
	}

	return 0;
}
