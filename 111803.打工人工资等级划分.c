#include<stdio.h>
void main(){
int a;
scanf("%d",&a);
printf("打工人工资等级划分\n");
if(a<=-1)
{
	printf("你还有花呗没还，无法使用该程序\n");
}
else if(a>=0&&a<=500)
{
	printf("赤贫\n");
}
else if(a>=501&&a<=1500)
{
	printf("贫困\n");
}
else if(a>=1501&&a<=3000)
{
	printf("普通打工人\n");	
}
else if(a>=3001&&a<=5000)
{
	printf("普通清洁工\n");
}
else if(a>=5001&&a<=12000)
{
	printf("水电工工资\n");
}
else if(a>=12001&&a<=50000)
{
	printf("脑袋大脖子粗不是老板就是伙夫\n");
}
else if(a>=50001&&a<=200000000)
{
	printf("程序员\n");
}
else{printf("你不行啊！赚不了钱。");}
}
