#include<stdio.h>

void func(int *num){
	printf("The passing index value is %d\n",*num);
}
int main(){
	int arr[5] = {1,2,3,4,5};
	func(&arr[3]);
	return 0;
}
