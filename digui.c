#include<stdio.h>
int main (void){
    int a,n,k;
	scanf("%d,%d,%d",&n,&a,&k);
	if (n<2||n>100||a,k<=0||a,k>100)
	printf("Wrong Number");
	else
	printf("%d",fac(n,a,k));
}
int fac(int n,int a,int k){
		if(n==1)
		return a;
		else
		return (k+fac(n-1,a,k));
	}
