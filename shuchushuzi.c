//����һ���ַ����жϸ��ַ������֡���ĸ���������ַ�����������ָ���
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

