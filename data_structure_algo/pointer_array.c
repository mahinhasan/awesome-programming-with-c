#include<stdio.h>
int main(){
	int arr[] = {1,2,3,4,5};
	int *pt[5];

	int p = 5,q = 3;
	pt[1] = &p;
	printf("Pointer resutl: %d\n",*pt[1]);
	int *ptr,i;
	ptr = &arr[2];
	*ptr = -1;
	*(ptr+1) = 0;
	*(ptr-1) = 1;
	for(i=0;i<5;i++)
		printf("%d\n",*(arr+1));
	
	
	return 0;
}
