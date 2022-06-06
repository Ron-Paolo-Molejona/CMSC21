#include <stdio.h> 
#include <math.h>

struct line{ 
	struct point{
		float x;
		float y; 
	}point1, point2; 
	float *midpoint; 
	float slope; 
	float distance;
	float intercept;
};

//for solving the slope
float solveSlope(struct line ss){
	ss.slope = (ss.point2.y - ss.point1.y) / (ss.point2.x - ss.point1.x);
	
	return ss.slope; //returns the value to be printed
}

//for solving midpoint
void *solveMidpoint(struct line sm){
	float mpoint1 = (sm.point1.x + sm.point2.x) / 2;
	float mpoint2 = (sm.point1.y + sm.point2.y) / 2;

	printf("%f , %f", mpoint1, mpoint2); //prints out the result
}

//for solving distance
float solveDistance(struct line sd){
	sd.distance = sqrt((sd.point2.x - sd.point1.x) * (sd.point2.x - sd.point1.x)) + ((sd.point2.y - sd.point1.y) * (sd.point2.y - sd.point1.y));

	return sd.distance; //returns the value
}

//for solving intercept
float getSlopeInterceptForm(struct line sif){
	sif.intercept = (sif.slope * sif.point2.x);

	return sif.intercept; //returns the value
}

int main(void){

	struct line line1; //for the struct
	
	printf("Enter x and y for point1: ");
	scanf("%f %f", &line1.point1.x, &line1.point1.y); //assigns the variables
	printf("Enter x and y for point2: ");
	scanf("%f %f", &line1.point2.x, &line1.point2.y);
	
	//printing of results
	printf("\nSlope: %f", solveSlope(line1)); 
	printf("\nMidpoint: "); solveMidpoint(line1); 
	printf("\nDistance between 2 points: %f", solveDistance(line1)); 
	printf("\ny = -%fx + %f", line1.point1.x, getSlopeInterceptForm(line1));
}