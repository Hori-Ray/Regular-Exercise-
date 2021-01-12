#include <stdio.h>
#include <stdlib.h>
int main()
{
int x;
int i,y,t;
int q=0;
int j,k;
int num[50];
scanf("%d",&x);
for(i=0;i<x;i++){
	scanf("%d",&y);
	for(q=0;q<y;q++){
		scanf("%d",&num[q]);
	}
	for(j=0;j<q-1;j++){
		for(k=0;k<q-1-j;k++){
			if(num[k]>num[k+1]){
				int temp=num[k];
				num[k]=num[k+1];
				num[k+1]=temp;
			}
		}
	}
	printf("%d ",num[0]);
	for(t=0;t<q-1;t++){
		if(num[t]==num[t+1]){
		}
		else printf("%d ",num[t+1]);
	}
	printf("\n");
}
}
