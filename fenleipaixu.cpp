#include<iostream>
using namespace std;  
int main(void){
	int n;
	int j,k,l,q,w,e,r,t,y,u;
	int x=0; 
	int a=0,b=0,c=0;
	char table[1000]={0};
	int num[1000]={0},odd[1000],even[1000];
	scanf("%d",&n);
	getchar();
	for(k=0;k<n;k++){
		int num[50];
	int i = 0;
	char ch;
	while((ch=getchar())!='\n')
	{
		if(ch>='0'&&ch<='9')
		{
			ungetc(ch,stdin);
			cin>>num[i++];
		}
	}
	
		for(l=0;l<i;l++){
			if(num[l]%2==0)
			{even[b]=num[l];
			b++;}
			else{odd[c]=num[l];
			c++;
			}
		}
		for (u=0;u<b-1;u++){

for (q=0;q<b-1-u;q++) {
if(even[q]>even[q+1]) {

int temp=even[q];
even[q]=even[q+1];

even[q+1]=temp; }

}
}
for (w=0;w<c-1;w++){

for (e=0;e<c-1-w;e++) {
if(odd[e]>odd[e+1]) {

int tem=odd[e];
odd[e]=odd[e+1];

odd[e+1]=tem; }

}
}
for(r=0;r<c;r++){
	printf("%d ",odd[r]);
}
for(t=0;t<b;t++){
    printf("%d ",even[t]); 
	}
	printf("\n");
	int odd[1000]={0},even[1000]={0};
	x=0;
	b=0;
	c=0;
	} 
return 0;
}
