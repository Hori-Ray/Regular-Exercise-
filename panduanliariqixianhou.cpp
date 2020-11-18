#include <stdio.h>
int main (void){
	int a,b,c,m,n,p;
	printf("Enter first date (mm/dd/yy):");
	scanf("%d/%d/%d",&a,&b,&c);
	printf("Enter second date (mm/dd/yy):");
	scanf("%d/%d/%d",&m,&n,&p);
	if (c>p)
	printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",m,n,p,a,b,c);
	else if(c<p)
	printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",a,b,c,m,n,p);
	 else if (c==p && m<a)
	printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",m,n,p,a,b,c);
	else if (c==p && m>a)
	printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",a,b,c,m,n,p);
	else if (c==p && a==m && b<n)
	printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",a,b,c,m,n,p);
	else if (c==p && a==m && b>n)
	printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",m,n,p,a,b,c);
	else 
	printf("%.2d/%.2d/%.2d is equal to %.2d/%.2d/%.2d",a,b,c,m,n,p);
	return 0;
}

