#include <stdio.h>
int main (void){
	//ax+by=c
	//mx+ny=p
	int x,y; 
	int a,b,c,m,n,p;
	printf("�������Ԫһ�η��̵Ĳ���:");
	scanf("%d,%d,%d,%d,%d,%d",&a,&b,&c,&m,&n,&p);
	x=(p*b-c*n)/(m*b-a*n);
	y=(a*p-m*c)/(a*n-m*b);
	printf("x=%d,y=%d\n",x,y);
	return 0; 
	}

