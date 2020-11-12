//输出一个数的三次方 
#include <stdio.h>
int main (void){
	int n;
	for( ; ; ){
		printf("请输入一个数字（输入0就停止）：");
		scanf("%d",&n);
		if(n==0)
		break;
		printf("%d的三次方是%d\n",n,n * n * n); 
	}
	return 0;
} 
