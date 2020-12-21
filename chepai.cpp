#include<iostream>
int main(){

    char a[50];
    char f[]="¾©½ò¼½½úÃÉÁÉ¼ªºÚ»¦ÕãËÕÍîÃö¸ÓÂ³Ô¥¶õÏæÔÁ¹ğÇíÓå´¨¹óÔÆ²ØÉÂ¸ÊÇàÄşĞÂ¸Û°ÄÌ¨¹ÒÑ§¾¯Ê¹Áì";
	int length=0; 
	while(f[length++]);
	length--;
	char m[]="E4BAACE6B4A5E58680E6998BE89299E8BEBDE59089E9BB91E6B2AAE6B599E88B8FE79A96E997BDE8B5A3E9B281E8B1ABE98482E6B998E7B2A4E6A182E790BCE6B89DE5B79DE8B4B5E4BA91E8978FE99995E79498E99D92E5AE81E696B0E6B8AFE6BEB3E58FB0E68C82E5ADA6E8ADA6E4BDBFE9A286";
	int x=0;
	int l=0;
	char ch;
	ch=getchar();
	while(ch!='\n')
	{
		a[x]=ch;
		x++;
		ch=getchar(); 
}
	for(int i=0;i<x;i++)
	{
	if(a[i]>=0&&a[i]<=255)
	 ;
	 else
	 {
	 for(int k=0;k<length;k+=2)
	 if(a[i]==f[k]&&a[i+1]==f[k+1])
	 {
	 for(;l<i;l++)
	 printf("%c",a[l]);
	 for(int z=k/2*6,s=0;s<6;s++,z++)
	 printf("%c",m[z]);
	 l+=2;
	 i+=1;}
	}
}
	 for(;l<x;l++)
	 printf("%c",a[l]); 
}
