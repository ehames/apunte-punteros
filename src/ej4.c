#include <stdio.h>

int main(void)
{
	int a[] = {0,1,2,3};

	printf(" *a  = %d\n", *a);
	printf("a[%d] = %d\n", 0, a[0]);
	printf("a[%d] = %d\n", 1, *(a+1));
	printf("a[%d] = %d\n", 2, *(2+a));
	printf("a[%d] = %d\n", 3, 3[a]);

	return 0;
}
