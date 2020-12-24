#include <stdio.h>
#include <string.h>
#define N 100
int main(void){
	char num1[N],num2[N];
	int n1[N],n2[N],n3[2*N]={0}; 
	int a,b,c,n,m;
	int i,j;
	scanf("%d",&n);
	for(m=0;m<n;m++){
		scanf("%s %s",&num1,&num2);
		a=strlen(num1);
		b=strlen(num2);
		c=a+b-1;
		for(i=0;i<a;i++){
			n1[i]=num1[i]-'0';
		}
		for(i=0;i<b;i++){
			n2[i]=num2[i]-'0';
		}
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				n3[i+j]+=n1[i]*n2[j];
			}
		}
		for(i=c-1;i>0;i--){
			n3[i-1]+=n3[i]/10;
			n3[i]=n3[i]%10;
		}
		for(i=0;i<c;i++){
			printf("%d",n3[i]);
		}
		printf("\n");
		for(i=0;i<c;i++){
			n3[i]=0;
		}
	}
	return 0;
}
