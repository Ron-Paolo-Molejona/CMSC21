#include <stdio.h>
int main(void)
{
 	int i = 8, j = 8, k = 8;

	while (i < 10)
	{
		printf("A");
		i += 1;
	}

	for (; i < 10;)
	{
		printf("B");
		j += 1;
	}

	do
	{
		printf("C");
    k += 1;
	} while (k < 10);
}
