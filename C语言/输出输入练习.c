#include <stdio.h>

int main()
{
	int amount=0,price=0;
	printf("输入总金额:");
	scanf ("%d",&amount);
	printf("输入价格:");
	scanf ("%d",&price);
	printf("找你：%d\n",amount-price);
	return 0;
}
