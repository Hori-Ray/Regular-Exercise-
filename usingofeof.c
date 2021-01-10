#include<stdio.h>
int main(void){
int  c;
while(1)
{
c =getchar();//读入一个字符。
if(c==EOF)break;//如果遇到EOF则退出循环，即结束输入。
}
printf("1");
return 0;
}
