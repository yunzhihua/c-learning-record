#include <stdio.h>
int main ()
{
	printf("请输入任意三位数：");
	int yuanshi=0,bai=0,shi=0,ge=0;
	scanf("%d",&yuanshi);
	bai=yuanshi/100;
	shi=(yuanshi-bai*100)/10;
	ge=yuanshi-(bai*100)-(shi*10);
	printf("%d",(ge*100)+(shi*10)+bai);
	return 0;
}
