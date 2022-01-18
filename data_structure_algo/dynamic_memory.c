#include<stdio.h>
#include<stdlib.h>

struct Emp{
	int i;
};


int main(){
	struct Emp *ptr;
	ptr = (struct Emp*)malloc(sizeof(struct Emp));
	if(ptr==NULL){
		printf("\n Out of memeory error \n");
	}
	else{
		printf("\n Enter employ details\n");
		scanf("%d",&ptr->i);
	}

	printf("\n The id is : %d\n",ptr->i);
	return 0;
}
