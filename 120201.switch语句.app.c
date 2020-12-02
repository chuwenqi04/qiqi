#include<stdio.h>
void main(){
	int x;
  printf("欢迎使用该程序可以连续查询排名前二十的大学\n请输入1-20之间的整数\n");
	while(1)
	{
		scanf("%d",&x);
		switch(x)
		{
		case 1:printf("北京大学\n");break;
		case 2:printf("清华大学\n");break;
		case 3:printf("复旦大学\n");break;
		case 4:printf("浙江大学\n");break;
		case 5:printf("南京大学\n");break;
		case 6:printf("上海交通大学\n");break;
		case 7:printf("华中科技大学\n");break;
		case 8:printf("中国科学技术大学\n");break;
		case 9:printf("中国人民大学\n");break;
		case 10:printf("武汉大学\n");break;
		case 11:printf("天津大学\n");break;
		case 12:printf("南开大学\n");break;
		case 13:printf("山东大学\n");break;
		case 14:printf("中山大学\n");break;
		case 15:printf("西安交通大学\n");break;
		case 16:printf("哈尔滨工业大学\n");break;
		case 17:printf("东南大学\n");break;
		case 18:printf("四川大学\n");break;
		case 19:printf("吉林大学\n");break;
		case 20:printf("同济大学\n");break;
		default:printf("请输入1-20的整数。\n");
		}
	}
}
