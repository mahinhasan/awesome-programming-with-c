#include<stdio.h>
#include<malloc.h>

struct student{
	int r,fees;
	char name[100];
};

struct student *s[10];

int main(){
	int i,n;
	printf("\n Enter the number of student : ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		s[i] = (struct student *)malloc(sizeof(struct student));		
		printf("\n Enter the Name of student[%d]: ",i);
                scanf("%s",s[i]->name);

		printf("\n Enter the roll of student[%d]: ",i);
	       	scanf("%d",&s[i]->r);
		printf("\n Enter the fees of student[%d]: ",i);
		scanf("%d",&s[i]->fees);
		

	}
	
	printf("\n*********DETAILS**********");
	  for(i=0;i<n;i++){
                printf("\n Name of student[%d]: ",i);
                printf("%s",s[i]->name);
                printf("\n Roll of student[%d]: ",i);
                printf("%d",s[i]->r);
                printf("\n Fees of student[%d]: ",i);
                printf("%d",s[i]->fees);

        }

	return 0;
}
