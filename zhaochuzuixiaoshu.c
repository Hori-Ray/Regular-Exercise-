//从一个n行m列的矩阵中找出矩阵中最小数
//及它所在的行与列，并输出他们。矩阵中的行n与列m及矩阵元素由键盘输入

#include <stdio.h>
#define N 100
#define M 100
int main()
{
	float a[N][M],min;
	int i,j,n,m,col,row;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%f",&a[i][j]);

	min=a[0][0];

	for(i=0;i<n;i++)
{
		for(j=0;j<m;j++)
		{
			if(a[i][j]<min)
			{
				min=a[i][j];
				col=j;
				row=i;
			}
		}
}
	printf("最小的元素为：a[%d][%d]=%f",row,col,min);
	return 0;
}

