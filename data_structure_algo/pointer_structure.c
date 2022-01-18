#include<stdio.h>

struct student{
	int r_no;
	char name[100];
	int fees;
};

int main(){
	struct student s,*s1;
	s1 = &s;

	printf("\n Enter the details of the student : ");
	printf("\n Enter the roll Number = ");
	scanf("%d",&s1->r_no);
	printf("\n Enter the name : ");
	scanf("%s",s1->name);

	printf("\n Enter the fees: ");
	scanf("%d",&s1->fees);

	printf("\n **********DETAILS*********");
	printf("\nName: %s ;\n Roll: %d ;\nFees: %d\n",s1->name,s1->r_no,s1->fees);

	return 0;
}

