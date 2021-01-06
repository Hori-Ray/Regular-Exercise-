#include<stdio.h>
int main(void){
	int n,i;
	int minf,mins,mint,max;
	scanf("%d",&n);
	int h[100][4];
	for(i=0;i<n;i++){
		int a,b,c,d,t;
		int q,w,e,r;
		scanf("%d %d %d %d",&h[i][0],&h[i][1],&h[i][2],&h[i][3]);
		if (h[i][0]>h[i][1])
    {
        t=h[i][0]; h[i][0]=h[i][1]; h[i][1]=t;
    }
    if (h[i][0]>h[i][2])
    {
        t=h[i][0]; h[i][0]=h[i][2]; h[i][2]=t;
    }
    if (h[i][0]>h[i][3])
    {
        t=h[i][0]; h[i][0]=h[i][3]; h[i][3]=t;
    }
    if (h[i][1]>h[i][2])
    {
        t=h[i][1]; h[i][1]=h[i][2]; h[i][2]=t;
    }
    if (h[i][1]>h[i][3])
    {
        t=h[i][1]; h[i][1]=h[i][3]; h[i][3]=t;
    }
    if (h[i][2]>h[i][3])
    {
        t=h[i][2]; h[i][2]=h[i][3]; h[i][3]=t;
    }
		
	}
	for(i=0;i<n;i++){
		printf("%d %d %d %d\n",h[i][0],h[i][1],h[i][2],h[i][3]);
	}
	return 0;
} 
