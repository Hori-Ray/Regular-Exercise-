//此程序有瑕疵，仅能统一一行的单词数，使用NULL的测试失败 
#include<stdio.h>
#define N 1000
int main(){
	char sen[N];
	char *c;
	int i,word=0,num=1;
	while(1){
		c=gets(sen);
		if(c==NULL)
		break;
	}
	for(i=0;sen[i]!=NULL;i++){
		if(sen[i]>='A'&&sen[i]<='z')
		word=1;
		else if(word==1){
			word=0;
			num++;
		}
	}
	printf("单词的数目是：%d",num);
	return 0;
}
