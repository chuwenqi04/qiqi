#include<stdio.h>
void main(){
int row,column;
int array2d[2][2]={
	{6,0},
	{1,9}
};
		for(row=0;row<=1;row++){
			for(column=0;column<=1;column++){
			printf("%d ",array2d[row][column]);
			}
		printf("\n");
		}
}
