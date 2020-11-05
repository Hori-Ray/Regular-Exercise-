//将输入的日期以合法的形式表达，并输出当天为星期几
#include <stdio.h>
int main(void){
	int month,year,day,w,c,y;
	printf("Enter date（mm,dd,yy）：");
	scanf("%d,%d,%d",&month,&day,&year);
	
	printf("Dated this %d",day);
	switch(day){
		case 1: case 21: case 31:
			printf("st"); break;
		case 2: case 22:
			printf("nd"); break;
		case 3: case 23:
		    printf("rd"); break;
		default:printf("th"); break; 
	} 
	printf(" day of ");
	switch(month){
		case 1: printf("January"); break;
		case 2: printf("February"); break;
		case 3: printf("March"); break;
		case 4: printf("April"); break;
		case 5: printf("May"); break;
		case 6: printf("June"); break;
		case 7: printf("July"); break;
		case 8: printf("August"); break;
		case 9: printf("September"); break;
		case 10: printf("October"); break;
		case 11: printf("November"); break;
		case 12: printf("December"); break; 
	}
	printf(",20%.2d.",year);
	if (month == 1 || month == 2)//当为一月和二月时，作为前一年的十三月和十四月处理 
	year--, month += 12;
	c = year / 100;
	y = year - c * 100;
	w = y + y / 4 + c / 4 - 2 * c + 26 * (month + 1) / 10 + day - 1;//蔡勒公式 
	while (w < 0)//为负数时保证取余时为正 
	 w += 7;
	w %= 7;
	switch (w)
	{
		case 0: printf("Sunday.\n"); break;
		case 1: printf("Monday.\n"); break;
		case 2: printf("Tuesday.\n"); break;
		case 3: printf("Wednesday.\n"); break;
		case 4: printf("Thursday.\n"); break;
		case 5: printf("Friday.\n"); break;
		case 6: printf("Saturday.\n"); break;
		  }  
    return 0;
}
