#include <stdio.h>
int main(void){
	int n=0,m;
	char a[1000];//
	char ch;
	ch = getchar();
	while (ch != '\n'){
		a[n]=ch;
		n++;
		ch=getchar();
	}
	printf("��������Ҫ��ѯ��λ����");
	scanf("%d",&m);
	printf("��Ҫ�Ľ���ǣ�%c",a[m-1]);
	return 0; 
} 
