#include<stdio.h>
int main(void){
	int m,i,o,a,b,h;
	int j=0;
	int k=0;
	float n;
	scanf("%d",&m);
	n=m;
	if(m<=6)
	printf("ERROR");
	else if(m/2!=n/2)
	printf("ERROR");
	else for(i=3;i<=m/2;i+=2){
		for(o=2;o<i;o++)
		{
	    if(i%o==0)
	    {
		j=m;
		break;}
		else h=m-i;
		}
		if(j!=0)
		b=1;
		else {
		for(a=2;a<h;a++)
		{
			if(h%a==0)
			{k=m;
			break;}
			else b=1;
		}
		if(k==0)
		printf("%d %d\n",i,h);
		else b=1;}
		j=0;
		k=0;
}
	return 0;
} 
