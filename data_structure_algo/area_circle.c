#include<stdio.h>
#include<curses.h>
int main(){

	float radius;
	double area;
	printf("\n Enter the radius of the circle : ");
	scanf("%f",&radius);
	area = 3.15 * radius * radius;
	printf("\n Area = %.2lf\n",area);
	return 0;
}
