#include<stdio.h>
void main()
{
int a=1,b,c=7;
	printf("(0,50)之间有个整数，给你5次机会，看看你蒙的能力。嘿嘿!!!\n");
	while(a<=5)
	{
	printf("这是你第%d次机会!!!\n",a);
	scanf("%d",&b);
if(b==c)
	{
	printf("恭喜你！答对啦!!牛P\n");
a=a+8;
}
else if(b>c)
	{
	printf("大了!!!瞅瞅你那傻样\n");
}
else if(b<c)
	{
	printf("小了啊!!似不似傻，嘿嘿\n");
}
else{
	printf("错误，瞅瞅你输了个啥。\n");
}
a++;	}
}
