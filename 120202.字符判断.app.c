#include<stdio.h>
void main(){
	char x;
	printf("欢迎使用该程序\n");
	while(1)
	{
		scanf("%s",&x);
		switch(x)
		{
		case 'W':printf("你在点击上键\n");break;
		case 'S':printf("你在点击下键\n");break;
		case 'A':printf("你在点击左键\n");break;
		case 'D':printf("你在点击右键\n");break;
		default:printf("你点击了非WSAD键。\n");
		}
	}
}
