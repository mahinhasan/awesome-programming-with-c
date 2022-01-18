#include<stdio.h>
int main(){
	struct student{
		int roll;
		char name[20];
		float fees;
	};

	struct student std1;
	printf("\n Enter the roll number : ");
	scanf("%d",&std1.roll);
	printf("\n Enter the name : ");
	scanf("%s",std1.name);
	printf("\n Enter the fees : ");
	scanf("%f",&std1.fees);

	printf("\n ********** Student details *********");
	printf("\n Roll Number : %d\n",std1.roll);
	printf("\n Name of Student : %s\n",std1.name);
	printf("\n Fees is : %f\n",std1.fees);
	

	return 0;
}

