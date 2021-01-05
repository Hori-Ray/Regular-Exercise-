#include<stdio.h>
#include<string.h>
int main() 
{
    int N,len;
    int i,j,k; 
    char a[1000];
    scanf("%d",&N);
    while(N>=0)
    {
        gets(a);
        len=strlen(a);
        j=0;
        for(i=0;i<=len;i++)
        {
             if(a[i]==' '||a[i]=='\0')
             {
                  for(k=i-1;k>=j;k--)
                      printf("%c",a[k]);
                  if(a[i]!='\0')
                        printf(" ");
                  j=i;
             }
        }
        printf("\n");
        N--;
    }
    return 0; 
}
