#include <math.h>
#include <stdio.h>

int main(void) 
{
  int input;
	double num1, num2;

	printf("Enter x: "); // user input
	scanf("%d", &input);


	if (input == 0) // if input is 0
	{
		printf("\nThe squareroot of 0 is 0.00");
	}
	else
	{
		num1 = 1;                         // initial
		num2 = (num1 + input / num1) / 2;
		
		while (fabs(num2-num1) > 0.00001) //absolute value
		{
			num1 = num2;
			num2 = (num1 + input / num1) / 2;
		}

		printf("\nThe squareroot of %d is: %f", input, num2); // prints result
	}
	
  return 0;
}