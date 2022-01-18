#include<stdio.h>

void func(int arr[5]){
	int i;
	for(i=0;i<5;i++){
		printf("arry[%d] = %d\n",i,arr[i]);
	}
}

int main(){

	int arr[5] = {1,2,3,4,5};
	func(arr);
	return 0;
}

