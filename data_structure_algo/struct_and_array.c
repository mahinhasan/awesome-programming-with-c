#include<stdio.h>
#include<string.h>

int main(){

	struct DOB{
		int day;
		int month;
		int year;
	};
	struct student {
		char name[100];
		int roll;
		int fees;
		struct DOB date;
	};

	struct student s[40];
	int n,i,num,rew_roll;
	int new_fees;
	struct DOB new_date;
	char new_name[100];

	printf("\n Enter the students number : ");
	scanf("%d",&num);

	for(i=0;i<num;i++){
		printf("\n Enter Student[%d] Name : ",i);
		scanf("%s",s[i].name);
		printf("\n Enter the roll[%d] number : ",i);
		scanf("%d",&s[i].roll);
		printf("\n Enter the student[%d] fees : ",i);
		scanf("%d",&s[i].fees);
		printf("\n Enter the student[%d] Date of Birth : ",i);
		scanf("%d %d %d",&s[i].date.day,&s[i].date.month,&s[i].date.year);

	}
	printf("\n*****STUDENTS DETAILS***********");
	for(i=0;i<num;i++){
                printf("\n Students[%d] Name : ",i);
                printf("%s",s[i].name);
                printf("\n Students[%d] roll number : ",i);
                printf("%d",s[i].roll);
                printf("\n Student[%d] fees : ",i);
                printf("%d",s[i].fees);
                printf("\n Student[%d] Date of Birth : ",i);
                printf("The date : %d- %d- %d",s[i].date.day,s[i].date.month,s[i].date.year);

        }

	return 0;

}
