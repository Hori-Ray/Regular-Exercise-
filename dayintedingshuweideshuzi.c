#include <stdio.h>
int main(void){
	int n=0,m;
	char a[1000];//
	char ch;
	ch = getchar();
	while (ch != '\n'){
		a[n]=ch;
		n++;
		ch=getchar();
	}
	printf("请输入你要查询的位数：");
	scanf("%d",&m);
	printf("你要的结果是：%c",a[m-1]);
	return 0; 
} 
