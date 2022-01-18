#include<stdio.h>

int main(){
	struct DOB{
		int day;
		int month;
		int year;
	};

	struct student{
		int roll_no;
		char name[100];
		float fees;
		struct DOB date;
	};

	struct student s;
	printf("\n Enter student name,roll,fees : ");
	scanf("%s %d %f",s.name,&s.roll_no,&s.fees);

	printf("\n Enter the student DOB: ");
	scanf("%d %d %d",&s.date.day,&s.date.month,&s.date.year);
	printf("\n ************STUDENT DETAILS***********\n");
	printf("\n Student Name : %s",s.name);
	printf("\n Student Roll : %d",s.roll_no);
	printf("\n Student Fees : %f",s.fees);
	printf("\n Date of birth : %d-%d-%d",s.date.day,s.date.month,s.date.year);

	return 0;
}

       
