#include <stdio.h>

void swap_v1(int a, int b)
{
	int tmp = 0;

	tmp = a;
	a = b;
	b = tmp;
}

void swap_v2(int *pa, int *pb)
{
	int tmp = 0;

	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main(void)
{
	int i = 1, j = 2;

	printf("i = %d, j = %d\n", i, j);
	swap_v1(i,j);
	printf("i = %d, j = %d\n", i, j);
	swap_v2(&i, &j);
	printf("i = %d, j = %d\n", i, j);

	return 0;
}
