#include<stdio.h>
int main(){
	struct student{
		int roll_no;
		char name[80];
		float fees;
	};

	struct student s;

	printf("\n Enter roll ,name fees :");
	scanf("%d %s %f",&s.roll_no,s.name,&s.fees);

	printf("\n Roll number is : %d ",s.roll_no);
	printf("\n Name is : %s ",s.name);
	printf("\n Fees is : %f ",s.fees);
	printf("\n");	
	return 0;
}

