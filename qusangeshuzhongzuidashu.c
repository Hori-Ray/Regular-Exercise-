#include <stdio.h>
int main (void) {
	int a,b,c;
	printf("��ֱ�������������"); 
	scanf("%d,%d,%d",&a,&b,&c);
	if (a>b && a>c)
	printf("��һ������������");
	else if (b>a && b>c)
	printf("�ڶ�������������");
	     else printf("����������������");
    return 0; 
	
}
