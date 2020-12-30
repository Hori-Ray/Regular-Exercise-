#include<stdio.h>
#define EOF -1
int main()
{
char str[1000];
long sum=0,data[1000];
int i=0,top=0;

scanf("%s",str);
while(str[i]!='\0')
{
if(str[i]>='0'&&str[i]<='9')
{
sum=sum*10+(str[i]-'0');
}
else
{
if(sum!=0)
{
data[top++]=sum;
sum=0;
}
}
i++;
}
if(sum!=0)
{
data[top++]=sum;
}
i=0;
while(i<top)
{
printf("%ld\n",data[i]);
i++;
}
return 0;}
