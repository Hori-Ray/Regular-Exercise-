#include<stdio.h>
int main(){
	int i,y=0;
	for(i=1;i<10;i++){
		if(y>=10)
		break;
		y=y+i;
	}
	printf("%d %d",y,i);
} 
