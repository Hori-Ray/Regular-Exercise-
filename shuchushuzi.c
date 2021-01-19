//输入一个字符，判断该字符是数字、字母还是其他字符，并输出数字个数
#include <stdio.h>
int main(void)
{
char ch;
int ncount = 0;
	ch=getchar();
 if (ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')     
		printf("It is an English character\n");
	else       if( ch>='0'&&ch<='9')    
	{
printf("It is a digit character\n");
     ncount++;  
}
	else printf("It is other character\n");
printf("It is other character\n");
	return 0;
}

