#include<iostream>
#include <stdio.h>
using namespace std;
int main(){
	int i=0;
	int h=0;
	int j,a,b;
	char c;
	int d=0;
	int f=0;
	int g=0;
    int num1[75],num2[75],num3[75],num4[50];
    while((c=getchar())!='\n'){
    	if(c>='0'&&c<='9'){
    		ungetc(c,stdin);
    		cin>>num4[g++];
		}
    }
	while((c=getchar())!='\n'){
    	if(c>='0'&&c<='9'){
    		ungetc(c,stdin);
    		cin>>num1[d++];
		}
    }
    a=d;
	while((c=getchar())!='\n'){
		if(c>='0'&&c<='9'){
			ungetc(c,stdin);
			cin>>num2[f++];
		}
	}
	b=f;
	for(i=0;i<a;i++){
		num3[h]=num1[i];
		h++;
	} 
	for(i=0;i<b;i++){
		num3[h]=num2[i];
		h++;
	}
	for (j=0;j<h-1;j++){

for (i=0;i< h-j-1;i++) {
if(num3[i]>num3[i+1]) {

int temp=num3[i];
num3[i]=num3[i+1];

num3[i+1]=temp; }

}
}
    for (i = 0; i<h; i++)
    {
        printf("%d ",num3[i]);
    }
} 
