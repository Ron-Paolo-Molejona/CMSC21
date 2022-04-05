#include <stdio.h>
int main(void)
{
	int i, num = 2;
	
  for (int i = 0; i < 10; i++) 
	{
    if (i == 0)
      printf("%d - 1\n", i);
    else
      num = num * 2;
			printf("%d - %d\n", i+1, num);
	}
	
	return 0;
}

