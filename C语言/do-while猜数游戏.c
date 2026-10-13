#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
	srand((unsigned)time(0));
	int a=rand();
	int b=0,n=0;
	a%=100;
	printf("!!猜数游戏!!\n");
	do
	{
		scanf("%d",&b);
		n++;
		if(b>a){
			printf("大了呦\n");
		}else if (b==a){
			if (n==0){
				n-=1;
			}
			printf("你牛大了，猜对了哦一共用了:%d次\n",n);
		}else if(b<a){
			printf("小了呦\n");
		}
	}
	while(b!=a);
	return 0;
}
