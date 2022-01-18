#include<stdio.h>

int main(){

	int x = 10;
	char ch = 'A';
	void *ptr;
	ptr = &x;
	printf("\n Generic pointer points to the integer variable = %d\n",*(int*)ptr);
	ptr = &ch;
	printf("\n Generic pointer points to the integer variable = %c\n",*(char*)ptr);
    
	return 0;
}

