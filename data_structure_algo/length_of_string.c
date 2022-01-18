#include<stdio.h>
#include <string.h>

int main(){
	char str[100];
	int length,i;
	printf("\n Enter the string : ");
	fgets(str,10,stdin);	
	
	while(str[i] != '\0'){
		str[i] = getchar();
		i++;
	}
	length = i;
	printf("\n The length of the string is : %d\n",length);
	
	return 0;
}

