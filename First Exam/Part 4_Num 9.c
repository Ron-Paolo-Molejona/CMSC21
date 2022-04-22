#include<stdio.h>
int main(void)
{
	int size; // for input
	char check = 'y'; // for while loop
	
	do
	{
	  printf("Enter square size: "); // input from user
	  scanf("%d", &size);
	
	  for(int i = 1; i <= size; i++) // for each row
	  {
	    for(int k = 1; k <= size; k++) // for each column
	    {
		    if(i == 1 || k == 1 || i == size || k == size)
	      {
	        /* Print star for 1st, Nth row and column */
	        printf("*"); //prints star for 1st and last row
	      }             // and on the sides 
	      else
	      {
	  	    printf(" "); //for the spaces in center
	      }
	    }
	    printf("\n"); // to move to the next row
	  }
			
		do
		{
			printf("Print another square? Enter y or n: ");
			scanf(" %c", &check);

			if (check != 'y' && check != 'n')
			{
				printf("Not a valid choice.\n");
			}
			
		} while (check != 'y' & check != 'n');
		
	} while (check == 'y');
	
	printf("END");

	return 0;
}

