//计算整数的位数
#include<stdio.h>
int main (void)
 {
 	int digits=0,n;
 	printf("输入一个非负整数：");
 	scanf("%d",&n);
 	do{
 		n/=10;
 		digits++;
	 }while (n>0);
	 printf("这个整数有%d位.\n",digits);
	 
	 return 0;
	
}
