//����ѧ�ϣ��Ե��Ƶķ������壺F(1)=1��F(2)=1, ,F(n)=F(n-1)+F(n-2)��n>=3��������дӵ�
//3�ʼ��ÿһ�����ǰ����֮�͡���ʹ�õݹ�ķ�ʽ������nֵ��F(n)

#include<stdio.h>
int Fib(int n)    // �Զ��庯��
{ 
	      if (n==1 || n==2)
{
return 1;   
          }
else
{
return Fib(n-1)+Fib(n-2);
          }
}

int main()
{
	int num;
	printf("������Ҫ��ȡ�ĵ�n��쳲��������� n="); 
	if (scanf("%d", &num))
	{
		if (num < 0)		
{
return 0;
}
		else	if (num==0)	
{
printf("%d", 0);
            }
		else				
{
printf("%d", Fib(num));	
            }
	}
return 0;
}

