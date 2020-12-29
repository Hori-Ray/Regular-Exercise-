#include <stdio.h>

int main(){
int j,i;
int a[10] ={95,45,15,78,84,51,24,12,34,23};

for (j=0;j< 9;j++){

for (i=0;i< 9-j;i++) {
if(a[i]>a[i+1]) {

int temp=a[i];
a[i]=a[i+1];

a[i+1]=temp; }

}
}
for (i=0;i< 10;i++){

printf("%d ",a[i]);
}

}
