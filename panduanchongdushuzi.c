#include<stdio.h>
#define N 5 
int main(void){
	int i=0,x=0,y;
	char a[N]; 
	char ch;
	printf("请输入一个五位数的数字："); 
	ch=getchar();
	while (ch != '\n'){
		a[x]=ch;
		x++;
		ch=getchar();
	}
	for(;i<N;i++){
		if(a[i]==a[i+1])
		printf("你输入的数串相邻位有重复的数字\n");
		else printf("clear\n");
	}

	
	return 0; 
	
}
