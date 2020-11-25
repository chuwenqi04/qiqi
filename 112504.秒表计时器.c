#include<stdio.h>
#include<windows.h>
void main()
{
	int s=0;
	while(s=s+1)
	{
		Sleep(1000);
		{
		printf("现在是%d秒\n",s);
		}
		
	}
	s++;
}
