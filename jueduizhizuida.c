#include<stdio.h>
#include<math.h>
int main(void){
	int m,x,max;
	int i;
	scanf("%d",&m);
	int a[100];
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
}   if(abs(a[0])==abs(a[1]))
     max=a[0];
    else if(abs(a[0])>abs(a[1]))
    max=a[0];
    else max=a[1];
	for(i=2;i<m;i++){
		if(abs(max)==abs(a[i]))
		max=a[i];
		else if(abs(max)<abs(a[i]))
		max=a[i];
		else max=max;
	} 
	printf("%d",max);
	return 0;
} 
