#include<stdio.h>
int main()
{
	const double BASIC_1=7.5;
	int time;
	double pay=0;
	printf ("请输入工作时间:");
	scanf("%d",&time);
	if(time>40)
	    pay=40*BASIC_1+(time-40)*(BASIC_1*1.5);	
	else
		pay=time*BASIC_1;
    printf("您的工资是:%.2f元",pay);
	return 0;
}
