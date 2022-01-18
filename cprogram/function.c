#include<stdio.h>
int fun(int x,int y);
int main(){
    int res = fun(4,5);
    printf("Result %d \n",res);
    return 0;
}
int fun(int x,int y){
    int p =x,q = y;
    int res = p*q;

    return res;
}