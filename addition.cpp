//�������ʮ����������� ,����0������ǰ��ֹ��� 
#include <stdio.h>
int main(void){
	int n=0,sum=0,i;
	while(n<10){
		printf("������������ӵ�����"); 
	scanf("%d",&i);
	if (i != 0){
		sum+=i;
		n++;} 
	else break;
	}
	printf("���õ��Ľ����ֵΪ��%d",sum);
	return 0;
} 
