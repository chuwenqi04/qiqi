#include<stdio.h>
int myself(int x){
	if(x<=0){
		return(0);
	}
	else{
		return(x+myself(x-1));
	}
}
void main(){
	int x;
	scanf("%d",&x);
	printf("%d",myself(x));
}
