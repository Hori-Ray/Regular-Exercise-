//通过股票交易金额计算应付付给经纪人的金额 
#include <stdio.h>
int main(void){
	float value,commission;
	printf("请输入交易金额：");
	scanf("%f",&value);
	if(value<2500.00f)
	commission=30.00f+0.017f*value;
	else if(value<6250.00f)
         commission=56.00f+0.0066f*value;
         else if(value<20000.00f)
              commission=76.00f+0.0034f*value;
              else if(value<50000.00f)
                   commission=100.00f+0.0022f*value;
				   else if(value<500000.00f)
				        commission=155.00f+0.0011f*value;
						else commission=255.00f+0.0009*value;
						
	 if(commission<=39.00f)
	 commission=39.00f;
	 printf("所应付的佣金为：%.2f\n",commission);
	 
	 return 0;
} 
