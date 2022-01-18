#include<stdio.h>
typedef struct{
	int x,y;
}POINT;

void display(POINT);
int main(){
	POINT p = {4,5};
	display(p);
	return 0;
}

void display(POINT p){
	printf("\n The Coordinates of the point are : %d %d\n",p.x,p.y);
}



