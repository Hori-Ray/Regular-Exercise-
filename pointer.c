#include<stdio.h>
int main(void){
	int a[5]={1,2,3,4,5};
	int *q;
	q=&a[0];
	q++;
	printf("%d",*q);
	return 0;
} 
