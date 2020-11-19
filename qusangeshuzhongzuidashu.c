#include <stdio.h>
int main (void) {
	int a,b,c;
	printf("请分别输入三个数："); 
	scanf("%d,%d,%d",&a,&b,&c);
	if (a>b && a>c)
	printf("第一个数是最大的数");
	else if (b>a && b>c)
	printf("第二个数是最大的数");
	     else printf("第三个数是最大的数");
    return 0; 
	
}
