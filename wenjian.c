//从键盘上面输入一个不超过100个字符的字符串，将该字符串按ASCII值进行升序排列，然后
//将排序结果输出到新文件test.txt中，然后再从该文件中读取字符串并在控制台显示出来

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main( )
{
	FILE *fp;
	char t,str[100], str1[100];
	int n,i,j;
	if ((fp=fopen("test.txt","wt+")) == NULL)          
	{
		printf("cannot open this file.\n");		
return -1;
	}
	printf("Please input into a string:\n");
	gets(str);
	n = strlen(str);
	for (i=0; i<n-1; i++)
	{
		for(j=0;j < n-i-1;j++)            
		{
			if (str[j]>str[j+1])
			{
				t=str[j];		
str[j]=str[j+1];		
str[j+1]=t;
			}
		}	
	}
	fputs(str,fp);
	rewind(fp);
	fgets(str1, 100, fp);
	printf("%s\n",str1);
	fclose(fp);
	return 0;
}

