#include<stdio.h>
void work(){
int a=3;
int b=4;
int c=5;
if(a+b>c&&b==c)
{
	printf("1\n");
}
else{printf("0\n");}}
void word(){
int a=3;
int b=4;
int c=5;
if(a||b+c&&b-c)
{
	printf("1\n");
}
else{printf("0\n");}}
void add(){
int a=3;
int b=4;
int c=5;
if(!a>b&&!c||1)
{
	printf("1\n");
}
else{printf("0\n");}
}
void ww(){
int a=3;
int b=4;
int c=5;
int x,y;
if(!(x=a)&&(y=b)&&0)
{
	printf("1\n");
}
else{printf("0\n");}
}
void cc(){
int a=3;
int b=4;
int c=5;
if(!(a+b)+c-1&&b+c/2)
{
	printf("1\n");
}
else{printf("0\n");}
}
void main(){
work();
word();
add();
ww();
cc();
}
