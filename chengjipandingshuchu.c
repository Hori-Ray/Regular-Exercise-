#include <stdio.h>
int main (void){
	int m,n,b;
	printf("Enter numerical grade:");
	scanf("%d",&m);
	n=m%10;
	b=(m-n)/10;
	if (m>100 || m<0)
	printf("Letter grade:Illegal grade");
	else {
	printf("Letter grade:");
	switch (b){
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5: printf("F"); break; 
	case 6: printf("D"); break;
	case 7: printf("C"); break;
	case 8: printf("B"); break;
	case 9: 
	case 10: printf("A"); break; 
}
	}
	return 0;
} 
