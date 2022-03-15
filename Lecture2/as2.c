#include <stdio.h>

int main(void) {
	
	int temp, num1, num2, num3;
	
	
  printf("Please enter a 3-digit number: ");
	scanf("%d", &temp);

	num1 = temp % 10;
	temp = temp / 10;
	num2 = temp % 10;
	num3 = temp / 10;


	printf("Reverse: %d%d%d", num1, num2, num3);
	
  return 0;
}