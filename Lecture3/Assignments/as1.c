#include <stdio.h>
#include <stdbool.h>

int main(void) 
{

	int age;
	bool teenager = false;

	printf("Enter age: ");
	scanf("%d", &age);
	
	if (age >= 13 && age <= 19)
	{
 		teenager = true;
	}

	printf("Result: %s", teenager ? "true" : "false");


 return 0;
}