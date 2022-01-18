#include<stdio.h>
#include<malloc.h>

struct student{
	char name[100];
	int r,fees;
};

struct student *s;
void display(struct student *);

int main(){
	s = (struct student *)malloc(sizeof(struct student));

	printf("\n Enter Student Data: ");
	printf("\n Enter Name : ");
	scanf("%s",s->name);
	printf("\n Enter roll : ");
	scanf("%d",&s->r);
	printf("\n Enter fees: ");
	scanf("%d",&s->fees);

	display(s);
	return 0;
}

void display(struct student *s){
	printf("\n Student details ");
	printf("\n Name : %s\n",s->name);
	printf("\n Roll : %d\n",s->r);
	printf("\n Fees : %d\n",s->fees);
}
