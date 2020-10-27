//确定一条消息的长度
#include <stdio.h>
int main (void)
{
	int len=0;
	printf("输入一条消息：");
	while (getchar() != '\n')
	  len++;
	  printf("你输入的信息有%d个字符单位长.\n",len);
	  
	  return 0;
 } 
