//���һ���������η� 
#include <stdio.h>
int main (void){
	int n;
	for( ; ; ){
		printf("������һ�����֣�����0��ֹͣ����");
		scanf("%d",&n);
		if(n==0)
		break;
		printf("%d�����η���%d\n",n,n * n * n); 
	}
	return 0;
} 
