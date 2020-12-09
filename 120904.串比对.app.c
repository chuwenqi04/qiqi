#include<stdio.h>
void main(){
	char a1[]="娜娜是猪";
	char a2[]="娜娜是猪";
	if(strcmp(a1,a2)==0){
		printf("一样的");
	}
	else{
		printf("不一样");
	}
}
