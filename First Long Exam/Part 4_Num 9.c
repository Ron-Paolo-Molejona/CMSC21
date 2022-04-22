#include <stdio.h>
int main()
{
	int row, column;
	int size;           // for input
	char cont = 'y';    // for while loop
	
	while(cont = 'y')
	{
		printf("Enter square size:"); // input from user
		scanf("%d", &size);
		
		for( row = 1 ;row <= size ; row++) // for each row (changed value to 1 so it would work)
		{
			for( column = 1 ; column <= size ;column++) // for each column (changed value to 1 so it would work)
			{
				if (row == 1 || column == 1|| row == size|| column == size) //print star for 1st and last row, and sides
				{
					printf("*");
				}
				else
				{
					printf(" "); //for spaces in center
				}
			}
		printf("\n"); // to move to next row
		}
		
		printf("Print another square? Enter y or n: "); // input to continue
		scanf(" %c", &cont);
	
		if (cont == 'n') // if n, ends
		{
			printf("END");
			break;
		}
		else if (cont != 'y') // checks if its not y/n
		{
			printf("Not a valid choice. \n");
			printf("Print another square? Enter y/n: ");
			scanf(" %c", &cont);
		} // if it passes, the loop starts over
	}
	
return 0;
}