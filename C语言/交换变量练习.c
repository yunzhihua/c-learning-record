#include <stdio.h>
int main ()
{
	int a=12,b=65;
	int c;
	c=a;
	a=b;
	b=c;
	printf ("结果测试：\n%d,%d",a,b);
	return 0;
}
