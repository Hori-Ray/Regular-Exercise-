//�Ӽ�����������һ��������100���ַ����ַ����������ַ�����ASCIIֵ�����������У�Ȼ��
//����������������ļ�test.txt�У�Ȼ���ٴӸ��ļ��ж�ȡ�ַ������ڿ���̨��ʾ����

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

