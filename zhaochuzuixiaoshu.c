//��һ��n��m�еľ������ҳ���������С��
//�������ڵ������У���������ǡ������е���n����m������Ԫ���ɼ�������

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
	printf("��С��Ԫ��Ϊ��a[%d][%d]=%f",row,col,min);
	return 0;
}

