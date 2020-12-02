#include<stdio.h>
void main()
{
	int num,hour,min,sec;
	scanf("%d",&num);
	hour=num/3600;
	min=num%3600/60;
	sec=num%60;
	if(num<86400)
	{
		printf("%d时:%d分:%d秒\n",hour,min,sec);
	}
	else if(num>=86400)
	{
		printf("你输入的数字超出范围字样\n");
	}
}
