#include<stdio.h>

void read_array(int arr[10],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\n array[%d] = ",i);
		scanf("%d",&arr[i]);
	}
}

void display_array(int arr[10],int n){

	int i;
	for(i=0;i<n;i++){
		printf("\n arr[%d] = %d\n",i,arr[i]);
	}

}


int find_biggest_pos(int arr[10],int n){
        int i,large = arr[0],pos = 0;
        for(i=1;i<n;i++){
                if(arr[i] > large){
                        large = arr[i];
                        pos = i;
                }
        }
        return pos;
}

int find_smallest_pos(int arr[10],int n){
        int i,small = arr[0],pos=0;
        for(i=1;i<n;i++){
                if(arr[i] < small){
                        small = arr[i];
                        pos = i;
                }
        }
        return pos;
}


void interchange(int arr[10],int n){
	int temp,big_pos,small_pos;
	big_pos = find_biggest_pos(arr,n);
	small_pos = find_smallest_pos(arr,n);
	temp = arr[big_pos];
	arr[big_pos] = arr[small_pos];
	arr[small_pos] = temp;
}


int main(){
	int arr[10],n;
	printf("\n Enter the size of array : ");
	scanf("%d",&n);
	read_array(arr,n);
	interchange(arr,n);
	printf("\n The new array is : ");
	display_array(arr,n);
	return 0;
}
