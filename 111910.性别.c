#include<stdio.h>
void main(){
int a;
scanf("%d",&a);
if(a>0&&a<2){
printf("男\n");
}
else if(a>-1&&a<1){
printf("女\n");
}
else{printf("输入有误，请重新输入。");}
}
