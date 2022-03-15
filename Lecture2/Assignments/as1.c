#include <stdio.h>

int main(void) {
	
	int temp, num1, num2;
	
	
  printf("Please enter a 2-digit number: ");
	scanf("%d", &temp);

	num1 = temp % 10;
	temp = temp / 10;
	num2 = temp % 10;


	printf("Reverse: %d%d", num1, num2);
	
  return 0;
}