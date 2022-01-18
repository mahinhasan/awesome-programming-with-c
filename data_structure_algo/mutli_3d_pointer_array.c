#include<stdio.h>
int main(){
	int i,j,k;
	int arr[2][2][2];
	int (*p)[2][2] = arr;

	printf("\n Enter the elements of a 2x2x2 array : ");

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				scanf("%d",&arr[i][j][k]);
			}
		}
	}


	printf("\n The elements of 2x2x2 array are : ");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				printf("\t%d",*(*(*(p+i)+j)+k));
			}
		}
	}
	printf("\n");
	return 0;
}
