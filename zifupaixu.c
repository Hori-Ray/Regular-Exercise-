#include<stdio.h>
void main()
{
char ch; //ch����baiÿ�ν���һ��du�ַ�zhi
int i,s[26]={0}; //����s[]����ͳ��ÿ��Сд��daoĸ�ĸ���
printf("please input a string:\n");
scanf("%c",&ch);
while(ch!='\n') //����һ���ַ����Իس�����shu��
{
if(ch>'A'&&ch<'Z') //������д��ĸʱ��ת����Сд������
ch+=32;
s[ch-'a']++; //0~25��Ӧa~z
scanf("%c",&ch);
}
printf("\n");
for(i=0;i<26;i++)
if(s[i]) //ֻ������������ĸͳ��
printf("%c:%d\n",(char)(i+'a'),s[i]);
//(char)(i+'a')��ǿ������ת���������Ӧ��ĸ
}
