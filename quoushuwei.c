//��һ��������ÿһλ��Ϊż����������ȡ��������һ�������������������ڱ���t�� 
//��ԭ����ȡ��������λ���ڸ�λ����λ���ڵ�λ

#include<stdio.h>
void fun(long s,long *t)
{
	int d;
	long s1=1;
	*t=0;
	while(s> 0)
	{
		d=s%10;
		if(d%2==0)
		{
			*t=d*s1+*t;
			s1=s1*10;
		}
		s/=10;
	}
}
int main()
{
	long s, t;
	printf("������s��ֵ:");
	scanf("%ld",&s);
	fun(s,&t);
	printf("������������:%ld\n",t); 
	return 0;
}

