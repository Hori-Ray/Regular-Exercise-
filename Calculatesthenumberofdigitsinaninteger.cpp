//����������λ��
#include<stdio.h>
int main (void)
 {
 	int digits=0,n;
 	printf("����һ���Ǹ�������");
 	scanf("%d",&n);
 	while (n>0){
	 n/=10;
	 digits++; }
	 printf("���������%dλ.\n",digits);
	 
	 return 0;
	
}
