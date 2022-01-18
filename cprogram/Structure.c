#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    char age[10];
    char school[40];
    int id;
    
};

void display(struct student s){
    printf("Name:%s\n",s.name);
    printf("Age:%s\n",s.age);
    printf("Id:%d\n",s.id);

}
int main(){
    struct student s1,s2;
   
    strcpy(s1.name , "Mahin");
    strcpy(s1.age ,"22");
    s1.id = 5;
    display(s1);
    
     
}
