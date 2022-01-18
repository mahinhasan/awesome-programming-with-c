#include<stdio.h>

void sum(int *x,int *y,int *sum){

	*sum = *x + *y;

}

int main(){
	

	int x,y,total;
	printf("\nEnter first number: ");
	scanf("%d",&x);
	printf("\nEnter second number: ");
	scanf("%d",&y);
	sum(&x,&y,&total);
	printf("\nThe total is : %d\n",total);
	return 0;
}
