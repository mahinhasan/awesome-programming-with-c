#include<stdio.h>
#include<stdlib.h>

void append_list();
int length();
void append_first();
void display();
void append_end();
void delete_first();
void delete_end();
void insert_after();
void delete_after();
void delete_list();


struct node{
	int data;
	struct node* next;
};

struct node* root = NULL;
int len=0;
void main(){
	
	printf("Linked list \n");
	int l,n,i ;
	
	printf("Enter how many data you want ? : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	append_list();
	display();
	
	printf("Append first \n");
	append_first();
	display();
		
	printf("Append data at end\n");
	append_end();
	display();
	
	printf("Append after : \n");
	insert_after();
	display();

	printf("After Delete first\n");
	delete_first();
	display();

	printf("After Delete End\n");
	delete_end();
	display();
	
	l = length();
	printf("Length of list is : %d\n",l);

	printf("After delete list: \n");
	delete_list();
	l = length();
	printf("Length is : %d\n",l);
}

void append_list(){
	struct node* temp;
	
	temp =(struct node*) malloc(sizeof(struct node));
	printf("Enter the data: ");
	scanf("%d",&temp->data);
	temp->next = NULL;
	if (root == NULL){
		root = temp;
		}

	else{
		struct node* ptr;
		ptr = root;
		while(ptr->next != NULL){
		ptr = ptr->next;
			}
		ptr->next = temp;
	}
}

int length(){
	int count=0;
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp = root;
	while(temp != NULL){
		count ++;
		temp=temp ->next; 
		}
	return count;

}

void append_first(){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter data : ");
	scanf("%d",&temp->data);

	temp->next = root;
	root = temp;





}


void display(){

	struct node* ptr;

	ptr = root;
	while(ptr != NULL){
		printf("\t %d",ptr->data);
		ptr = ptr->next;
		}
		printf("\n");
	}





void append_end(){
	struct node *ptr,*temp;
	
	printf("Enter the data: ");
	temp = (struct node*)malloc(sizeof(struct node));
	scanf("%d",&temp->data);
	temp->next = NULL;
	ptr = root;
	while(ptr->next != NULL)
		ptr = ptr->next;
	ptr ->next = temp;

}


void delete_first(){
	struct node* ptr;
	ptr = root;
	root = root->next;
	free(ptr);
	}



void delete_end(){
	struct node *ptr,*new_ptr;
	ptr = root;

	while(ptr->next != NULL){
		new_ptr = ptr;
		ptr = ptr->next;
		}
	new_ptr->next = NULL;
	free(ptr);
}


void insert_after(){
	int val;
	printf("Enter the value where you want to insert: ");
	scanf("%d",&val);

	struct node *temp,*ptr,*preptr;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data : ");
	scanf("%d",&temp->data);
	temp->next = NULL;
	ptr = root;
	preptr = ptr;

	while(preptr->data != val){
			preptr = ptr;
			ptr = ptr->next;
	
			
		}
		preptr->next = temp;
		temp->next = ptr;
	}

		
void delete_list(){
	struct node *ptr,*preptr;


	while(ptr->next != NULL){
		
		ptr = root;
		root = root->next;
		free(ptr);
		}
	}









