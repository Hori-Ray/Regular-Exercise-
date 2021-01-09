#include<stdio.h>
#include<math.h>
int main(void){
	int a,i,h,p;
	int m,n;
	int q=0;
	int num1,num2,num3;
	int table[10000]={0};
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d %d",&m,&n);
		for(h=m;h<=n;h++){
			num3=h%10;
			num2=(h/10)%10;
			num1=h/100;
			if(h==num1*num1*num1+num2*num2*num2+num3*num3*num3)
			{table[q]=h;
			 q++;
			}
		}if(table[0]==0)
		printf("-1\n");
		else {for(p=0;;p++){
			printf("%d ",table[p]);
			if(table[p+1]==0)
			break;
		}printf("\n");
		q=0;
		int table[10000]={0};
		}
		}
	return 0;
} 
