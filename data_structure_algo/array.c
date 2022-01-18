#include<stdio.h>
int main(){
	
	int num[5] = {1,2,3,4,5};
	int value[]={10,20,30,40,50};
	int res[5];
	int i;
	for(i = 0;i<5;i++)
		scanf("%d",&res[i]);
	for(i=0;i<5;i++){
		printf("_______________________________\n");
		printf("%d th result is: %d\n",i,res[i]);
		printf("%d the number is: %d\n",i,num[i]);
		printf("%d the value is : %d\n",i,value[i]);
	}

	return 0;
}
