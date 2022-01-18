#include<stdio.h>
int main(){

	int num , *pnum;
	pnum = &num;

	printf("\n Enter the number : ");
	scanf("%d",&num);
	printf("\n The number was entered printed by variable %d\n",num);
	printf("\n The number was entered printed by pointer  : %d\n",*pnum);
	return 0;
}
