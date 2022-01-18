#include<stdio.h>
int main(){
	
	int i,n,num[10];

	printf("\n Enter the number of elements in the array: " );
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("\n num[%d] = ",i);
		scanf("%d",&num[i]);

	}

	printf("\n The array elements are : ");
	for(i=0;i<n;i++)
		printf("\n The %dth number is : %d\n",i,num[i]);

	return 0;
}
