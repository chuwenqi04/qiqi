#include<stdio.h>
#include<string.h>
void main(){
	char name[30],put[]="出家人";
	int num;
	int answer=7;
	int chance=1;
	int chance2=1;
	printf("什么人不结婚，答对才可进入游戏\n");
	while(chance2<=100){
		scanf("%s",&name);
		if(strcmp(name,put)==0){
			printf("恭喜进入游戏\n");
			while(chance<=5){
				printf("这是你第%d次机会\n",chance);
				scanf("%d",&num);
				if(num==answer){
				printf("恭喜你答对啦!!你已离开游戏，输入的数字将显示错误\n");
				chance=chance+523547;
				}
				else if(num>answer){
				printf("大了!!!!\n");
				}
				else{
				printf("小了!!!\n");
				}
			chance++;
			}
		}
		else{
		printf("输入错误\n");
		}
	chance2++;
	}
}
