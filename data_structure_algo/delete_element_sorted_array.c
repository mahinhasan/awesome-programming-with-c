#include<stdio.h>

int main(){

	int i,n,j,num,arr[10];
	printf("\n Enter the number of elements is the array : ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("\n arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}

	printf("\n Enter the element to be deleted");
	scanf("%d",&num);

	for(i=0;i<n;i++){
		if (arr[i] == num){
			for(j=i;j<n-1;j++){
				arr[j] = arr[j+1];
			}
		}
	}

	n -= 1;

	printf("\n The array after deletion is  : ");
	for(i=0;i<n;i++)
		printf("\n arr[%d] = %d\n",i,arr[i]);
	return 0;
}

