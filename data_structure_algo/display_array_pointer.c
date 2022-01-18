#include<stdio.h>

int main(){
	int arr[] = {1,2,3,4,5,6,7,8};
	int *ptr1,*ptr2;
	ptr1 = arr;
	ptr2 = &arr[7];
	while(ptr1 <= ptr2){
		printf("%d\n",*ptr1);
		ptr1++;
	}
	return 0;
}
