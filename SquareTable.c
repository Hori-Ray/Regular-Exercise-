#include <stdio.h>
int main(void){
	int i,n;
	printf("这个程序是用于输出平方表的\n");
	printf("输入平方表中行的数量：");
	scanf("%d",&n);
	
	i=1;
	while (i<=n){
		printf("%10d%10d\n",i,i * i);
		i++; 
	}
	 return 0;
} 
