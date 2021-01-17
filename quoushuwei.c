//将一个整数的每一位上为偶数的数依次取出，构成一个新数，并将新数放在变量t中 
//从原数中取出的数高位仍在高位，低位仍在低位

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
	printf("请输入s的值:");
	scanf("%ld",&s);
	fun(s,&t);
	printf("程序输出结果是:%ld\n",t); 
	return 0;
}

