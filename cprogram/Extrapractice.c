#include<stdio.h>
int main(){
    printf("FIle : %s\n",__FILE__);
    printf("Date : %s\n",__DATE__);
    printf("Line : %d\n",__LINE__);
    printf("Time : %s\n",__TIME__);
    return 0;
}