#include <stdio.h>
int main(void){
	int h[10][5];
	int i,j;
	int a,b,c,d,e;
	for(i=0;i<10;i++){
		for(j=0;j<5;j++){
			scanf("%d",&h[i][j]);
		}  if (h[i][0]==0&&h[i][1]==0)
		break;
	}   for(i=0;i<10;i++){
	a=h[i][0],b=h[i][1],c=h[i][2],d=h[i][3],e=h[i][4];
	if(a==0&&b==0)
	return 0;
	else  if(2*b==a+c&&b*b==a*c){
		printf("case one\n");
		int m=b-a;
		printf("%ld %ld %ld %ld %ld\n",e+m,e+2*m,e+3*m,e+4*m,e+5*m);
		printf("case two\n");
		int n=b/a;
		printf("%ld %ld %ld %ld %ld\n",e*n,e*n*n,e*n*n*n,e*n*n*n*n,e*n*n*n*n*n);
	}   else if(2*b==a+c&&2*d==c+e){
		printf("case one\n");
		int m=b-a;
		printf("%ld %ld %ld %ld %ld\n",e+m,e+2*m,e+3*m,e+4*m,e+5*m);
	}  else if(b*b==a*c){
		printf("case two\n");
		int n=b/a;
		printf("%ld %ld %ld %ld %ld\n",e*n,e*n*n,e*n*n*n,e*n*n*n*n,e*n*n*n*n*n);
	}  else if(b+c==d&&c+d==e){
		printf("case three\n");
		int f1=d+e,f2=f1+e,f3=f1+f2,f4=f2+f3,f5=f3+f4;
		printf("%ld %ld %ld %ld %ld\n",f1,f2,f3,f4,f5);
	}  else return 0;
	}    return 0;
} 
