#include<stdio.h>
int main(void){
	int m,a,b,c,i;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d %d %d",&a,&b,&c);
		if(a<=0||b<=0||c<=0)
		printf("No\n");
		else  if(a+b<=c||a+c<=b||b+c<=a)
		printf("No\n");
		else if(a-b>=c||a-c>=b||b-c>=a||b-a>=c||c-a>=b||c-b>=a)
		printf("No\n");
		else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
		printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
