#include<stdio.h>

int main(){

	int arr[10],i,n,j,flag=0;
	printf("\n Enter the size of the array : ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("\n arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i] == arr[j] && i != j){
				flag = 1;
				printf("\n Duplicate numbers found at %d and %d\n",i,j);
			}
		}
	}
	if(flag==0)
		printf("\n No Duplicates found");
	return 0;
}
