//逆输出一个两位的正整数 
#include <stdio.h>
int main (void){
	int a,b,c,m;
	printf("Enter a two-digit number:");
	scanf("%d",&a);
	b=a%10;
	c=a/10;
	m=b * 10 + c;
	printf("The reversal is:%d",m);
	
	return 0;  
	
}
