#include<stdio.h>
void main(){
int a;
int b;
int c;
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
	printf("%d",a);
}
else if(b>c&&b>a)
{
	printf("%d",b);
}
else if(c>a&&c>b)
{
	printf("%d",c);
}
else{printf("0");}
}
