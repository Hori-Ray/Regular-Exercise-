//�������ӵĿռ���������λӢ��
#include<stdio.h>
int main()
{  
   int height,width,length,volume,weight;
   printf("���������ӵĳ���");
   scanf("%d",&length ) ;
   printf("���������ӵĿ�");
   scanf("%d",&width);
   printf("���������ӵĸߣ�");
   scanf("%d",&height);
   volume=height*width*length;
   weight=(volume+165)/166;//Ϊ�˱�֤��ֵ����ȡ�� 
   printf("��������㣺%dx%dx%d\n",length,width,height);
   printf("��������ս����%d\n",volume);
   printf("���ӵĿռ�������%d\n",weight);
   return 0;
 } 
