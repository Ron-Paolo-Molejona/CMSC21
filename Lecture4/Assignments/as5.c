#include<stdio.h>
int main(void)
{
  int num_day, start_day;
	
  printf("Enter number of days in month: ");
  scanf("%d",&num_day);
	
  printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d",&start_day);
	
  for (int i = 1; i < start_day; i++)
	{
		printf(" ");
	}
	
  for (int i = 1; i <= num_day; i++)
	{
  	printf(" %2d",i);
		
    if( (start_day + i - 1 ) % 7 == 0)
   	{
		 printf("\n");
		}
  }
	
  return 0;
}

