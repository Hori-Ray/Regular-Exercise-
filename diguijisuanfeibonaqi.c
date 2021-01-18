//在数学上，以递推的方法定义：F(1)=1，F(2)=1, ,F(n)=F(n-1)+F(n-2)（n>=3）这个数列从第
//3项开始，每一项都等于前两项之和。现使用递归的方式求输入n值的F(n)

#include<stdio.h>
int Fib(int n)    // 自定义函数
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
	printf("请输入要求取的第n项斐波那契数列 n="); 
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

