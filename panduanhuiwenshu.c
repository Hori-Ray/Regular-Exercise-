#include<stdio.h>
#include<math.h>
int main(){
	int x,i;
	int y,q=0,w,r,a,s=0;
	int num[100];
	scanf("%d",&x);
	for(i=0;i<x;i++){
		scanf("%d",&y);
		w=y;
		for(;;q++){
			num[q]=w%10;
			w=w/10;
			if(w==0)
			break; 
		}
		r=q;
		for(;q>=0;q--){
			a=num[q]*pow(10,r-q);
			s=s+a;
		}
		if(s==y)
		printf("yes\n");
		else printf("no\n");
		q=0;
		s=0;

	}
	return 0;
} 
