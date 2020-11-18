#include<stdio.h>
void main(){
int x;
scanf("y=%d\n",&x);
if(x<1){
	printf("y=%d\n",x);
}
else if(x>=1&&x<10){
	printf("y=%d\n",2*x-1);
}
else{printf("y=%d\n",3*x-11);}
}
