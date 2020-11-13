//判断一个数是不是素数 
#include <stdio.h>
int main(void){
	int d,n;
	printf("请输入一个数字：");
	scanf("%d",&n);
	for (d=2;d<n;d++)
	if (n % d==0)
	break;
	if (d<n)
	printf("输入的数是一个合数\n");
	else printf("输入的数是一个素数\n");
	return 0;
}
