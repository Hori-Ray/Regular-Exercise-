#include <stdio.h>
int main(void){
	int a,b=0;
	printf("请输入一个正数：");
	scanf("%d",&a);
	while (a > 0)
	printf ("现在的数字为：%d\n",--a);
	return 0;
} 
