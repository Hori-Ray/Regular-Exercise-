#include<stdio.h>
void main()
{
char ch; //ch用来bai每次接收一个du字符zhi
int i,s[26]={0}; //数组s[]用来统计每个小写字dao母的个数
printf("please input a string:\n");
scanf("%c",&ch);
while(ch!='\n') //输入一行字符，以回车键结shu束
{
if(ch>'A'&&ch<'Z') //遇到大写字母时，转换成小写来处理
ch+=32;
s[ch-'a']++; //0~25对应a~z
scanf("%c",&ch);
}
printf("\n");
for(i=0;i<26;i++)
if(s[i]) //只输出输入过的字母统计
printf("%c:%d\n",(char)(i+'a'),s[i]);
//(char)(i+'a')用强制类型转换，输出对应字母
}
