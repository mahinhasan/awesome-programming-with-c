#include<stdio.h>
int evenodd(int a){

	if (a % 2 == 0)
		return 1;
	else 
		return 0;
}

int main(){

	int num , flag;
	printf("\n Enter the number : ");
	scanf("%d",&num);
	flag = evenodd(num);
	if( flag)
		printf("The number is even and number: %d\n",num);
	else
		printf("The number is odd and numebr : %d\n",num);
	return 0;
}
