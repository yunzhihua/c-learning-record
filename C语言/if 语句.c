#include <stdio.h>
int main()
{
    double a=0,b=0;
	printf("请输入商品金额：\n");
	scanf("%lf",&a);
	printf("请输入付款金额：\n");
	scanf("%lf",&b);
	if (b>=a){
		printf("找您:%f",b-a);
	}else {
		printf("您的支付金额不足，请重试\n");
	}
	
	return 0;
}
