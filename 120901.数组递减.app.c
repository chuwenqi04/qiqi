#include<stdio.h>
void main(){
	int row,column,n=91;
	int array2d[9][10]={
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0}
	};
		for(row=1;row<=8;row++){
			for(column=1;column<=9;column++){
				printf("%d ",array2d[row][column]);
			}
			printf("\n");
		}
			for(row=1;row<=8;row++){
				for(column=1;column<=9;column++){
					n--;
					array2d[row][column]=n;
					printf("%d ",array2d[row][column]);
				}
			printf("\n");
			}
}
