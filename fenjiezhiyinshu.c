#include <stdio.h>
#include<math.h>
int main(){
	int n,i;
	int x,q;
	scanf("%d",&x);
	for(q=0;q<x;q++){
	 
	scanf("%d",&n);
	for(i=2;i<=sqrt(n);i++){  
		for(;n!=i;)
        {
			if(n%i==0)
			{
				printf("%d*",i);
				n=n/i;
			}
            else break;
		}
	}
	printf("%d\n",n);
	
}
	return 0;
}
