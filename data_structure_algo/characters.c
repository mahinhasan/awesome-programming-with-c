#include<stdio.h>
int main(){
	int i = 0;
	char str[10];
	char ch = getchar();
	while(ch != '*'){
		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\0';
	return 0;

}


