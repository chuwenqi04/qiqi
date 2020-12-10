#include<stdio.h>
#include<string.h>
void main(){
	char name[30],put[]="出";
	int num;
	int answer=7;
	int chance=1;
	printf("输入编码主人的姓，才可进入游戏\n");
	scanf("%s",&name);
	if(strcmp(name,put)==0){
		printf("恭喜进入游戏\n");
		while(chance<=5){
			printf("这是你第%d次机会\n",chance);
		scanf("%d",&num);
			if(num==answer){
			printf("恭喜你答对啦!!\n");
			chance=chance+527;
			}
			else{
			printf("Srroy!!try again.\n");
			}
		chance++;
		}
	}
	else{
	printf("输入错误，请再输一次。\n");
	}
}
