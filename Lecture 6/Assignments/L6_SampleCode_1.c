//the more efficient/improved code for the avg grade

#include <stdio.h>

#define n_students 5

int main (void){
	
	float grades[n_students], average = 0, sum = 0;
	int i;
	
	printf("Enter scores one by one: ");
	
	for (i = 0; i < n_students; i++){
		
		printf("Enter grade for Student %d: ", i+1);
		scanf("%f", &grades[i]);
	}
	
	for(i = 0; i < n_students; i++){
		
		sum += grades[i];
	}
	
	average = sum / n_students;
	
	printf("%.2f\n", average);
	
	return 0;
}