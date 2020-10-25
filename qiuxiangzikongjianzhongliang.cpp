//计算箱子的空间重量，单位英寸
#include<stdio.h>
int main()
{  
   int height,width,length,volume,weight;
   printf("请输入箱子的长；");
   scanf("%d",&length ) ;
   printf("请输入箱子的宽：");
   scanf("%d",&width);
   printf("请输入箱子的高：");
   scanf("%d",&height);
   volume=height*width*length;
   weight=(volume+165)/166;//为了保证数值向上取整 
   printf("体积的运算：%dx%dx%d\n",length,width,height);
   printf("体积的最终结果：%d\n",volume);
   printf("箱子的空间重量；%d\n",weight);
   return 0;
 } 
