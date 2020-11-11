//将输入的十个非零数相加 ,输入0可以提前终止相加 
#include <stdio.h>
int main(void){
	int n=0,sum=0,i;
	while(n<10){
		printf("请输入你想相加的数："); 
	scanf("%d",&i);
	if (i != 0){
		sum+=i;
		n++;} 
	else break;
	}
	printf("所得到的结果数值为：%d",sum);
	return 0;
} 
