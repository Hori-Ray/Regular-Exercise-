#include<stdio.h>
#define N 5 
int main(void){
	int i=0,x=0,y;
	char a[N]; 
	char ch;
	printf("������һ����λ�������֣�"); 
	ch=getchar();
	while (ch != '\n'){
		a[x]=ch;
		x++;
		ch=getchar();
	}
	for(;i<N;i++){
		if(a[i]==a[i+1])
		printf("���������������λ���ظ�������\n");
		else printf("clear\n");
	}

	
	return 0; 
	
}
