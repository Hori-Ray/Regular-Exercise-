#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct S_word{
	int num;
	char a[15];
};
int main(){
	struct S_word W[300];
    char ch;
    char b[15];
    int j=0;
    int flag;
    char l[200];
    int x=0,i,n,m,k,o;
    int y=0;
    int temp;
    ch=getchar();
	while(ch!=EOF){
		l[x]=ch;
		ch=getchar();
		x++;
	} 
	for(i=0;i<x;i++){
		if(l[i]>='A'&&l[i]<='Z')
		l[i]+=32;
		else if(l[i]>='a'&&l[i]<='z')
		l[i]=l[i];
		else l[i]=' ';
	}
	for(i=0;i<300;i++){
		W[i].num=1;
	}	
	i=0;
	for(y=0;y<x;y++){
	W[i].a[j]='\0'; 
	if(l[y]>='a'&&l[y]<='z'){
		W[i].a[j]=l[y];
		j++;
		flag=1;
	}
	else if(l[y]==' '&&flag==1){
		flag=0;
		j=0;
		n=i;
		i++;
		if(n>=1){
			for(m=0;m<n;m++){
				if(strcmp(W[n].a,W[m].a)==0){
					W[m].num++;
					i=i-1;
																		}
				
			}
		}
	}
}
for(n=0;n<i-1;n++){
	for(j=n+1;j<i;j++){
		if(W[j].num>W[n].num){
			k=j;
			temp=W[k].num;
			W[k].num=W[n].num;
			W[n].num=temp;
			strcpy(b,W[k].a);
			strcpy(W[k].a,W[n].a);
			strcpy(W[n].a,b);
		}
	}
}
        if(W[0].num>W[1].num){
         printf("%s ",W[0].a);
         printf("%d",W[0].num);}
         else if(W[0].num==W[1].num&&W[0].a[0]>=W[1].a[0]){
         	printf("%s ",W[0].a);
         printf("%d",W[0].num);
		 }
		 else if(W[0].num==W[1].num&&W[0].a[0]<W[1].a[0]){
		 	printf("%s ",W[1].a);
		 	printf("%d",W[1].num);
		 }
return 0;
} 
