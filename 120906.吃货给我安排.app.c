#include<stdio.h>
#include<string.h>
void main(){
	char a1[]="";
	char a2[]="春节";
	char a3[]="端午节";
	char a4[]="中秋节";
	char a5[]="元宵节";
	printf("欢迎使用吃货小程序!!\n");
	scanf("%s",&a1);
	if(strcmp(a1,a2)==0){
	printf("给我安排饺子\n");
	}
	else if(strcmp(a1,a3)==0){
	printf("给我安排粽子\n");
	}
	else if(strcmp(a1,a4)==0){
	printf("给我安排月饼\n");
	}
	else if(strcmp(a1,a5)==0){
	printf("给我安排元宵\n");
	}
	else{
	printf("没有该节日");
	}
}
