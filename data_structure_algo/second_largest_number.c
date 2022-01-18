#include<stdio.h>
int main(){
	

	int i,n,arr[10],large,second_large;
	scanf("%d",&n);

	printf("Enter %d  element:\n",n);
	for(i=0;i<n;i++){
		printf("\n The arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}

	large = arr[0];

	for(i=1;i<n;i++){
		if (arr[i] > large)
			large = arr[i];
	}
	second_large = arr[1];
	for(i=0;i<n;i++){
		if(arr[i] != large){
			if(arr[i] > second_large)
				second_large = arr[i];
		}
	}

	printf("\n The numbers you entered are : ");
	for(i=0;i<n;i++)
		printf("\t %d",arr[i]);

	printf("\n The largest of these numbers is : %d\n ",large);
	printf("\n The second largest number is : %d\n",second_large);


	return 0;
}
