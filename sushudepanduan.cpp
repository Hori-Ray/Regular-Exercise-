//�ж�һ�����ǲ������� 
#include <stdio.h>
int main(void){
	int d,n;
	printf("������һ�����֣�");
	scanf("%d",&n);
	for (d=2;d<n;d++)
	if (n % d==0)
	break;
	if (d<n)
	printf("���������һ������\n");
	else printf("���������һ������\n");
	return 0;
}
