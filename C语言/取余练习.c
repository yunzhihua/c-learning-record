#include<stdio.h>
#include<stdlib.h>

int main()
{
	int hour1,hour2,minute1,minute2;
	printf("请输入第一时区时间：");
	scanf("%d %d",&hour1,&minute1);
	printf("请输入第二时区时间：");
	scanf("%d %d",&hour2,&minute2);
	int mix1=hour1*60+minute1,mix2=hour2*60+minute2;
	printf("两者时差为%d，%d",(mix1-mix2)/60,((mix1-mix2)%60));
	
	return 0;
}
