#include <stdio.h>

int main(void) 
{

	int num, ones, tens;

	printf("Enter a two-digit number: ");
	scanf("%d", &num);

	printf("Number entered in words: ");
		
	if (num == 11)
	{
		printf("eleven");
	}
	else if ( num == 12)
	{
		printf("twelve");
	}
	else
	{
 		ones = num % 10;
		tens = num - ones;

		if (tens == 10)
		{
			if (ones == 3)
			{
				printf("thirteen");
			}
			else if (ones == 4)
			{
				printf("fourteen");
			}
			else if (ones == 5)
			{
				printf("fifteen");
			}
			else if (ones == 6)
			{
				printf("sixteen");
			}
			else if (ones == 7)
			{
				printf("seventeen");
			}
			else if (ones == 8)
			{
				printf("eighteen");
			}
			else if (ones == 9)
				printf("nineteen");
			else
				printf("ten");
		}
		else if (tens == 20)
		{
			printf("twenty");
		}
		else if (tens == 30)
		{
			printf("thirty");
		}
		else if (tens == 40)
		{
			printf("fourty");
		}
		else if (tens == 50)
		{
			printf("fifty");
		}
		else if (tens == 60)
		{
			printf("sixty");
		}
		else if (tens == 70)
		{
			printf("seventy");
		}
		else if (tens == 80)
		{
			printf("eighty");
		}
		else if (tens == 90)
		{
			printf("ninety");
		}

		if (tens >= 20)
		{
			if (ones == 1)
			{
				printf("-one");
			}
			else if (ones == 2)
			{
				printf("-two");
			}
			else if (ones == 3)
			{
				printf("-three");
			}
			else if (ones == 4)
			{
				printf("-four");
			}
			else if (ones == 5)
			{
				printf("-five");
			}
			else if (ones == 6)
			{
				printf("-six");
			}
			else if (ones == 7)
			{
				printf("-seven");
			}
			else if (ones == 8)
			{
				printf("-eight");
			}
			else if (ones == 9)
			{
				printf("-nine");
			}
		}
	}

 return 0;
}