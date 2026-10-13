#include <stdio.h>
int main ()
{
	int num=0,n=0;
	scanf ("%d",&num);
	n++;
	num/=10;
	while (num>0){
		n++;
		num/=10;
	}
	printf("位数为:%d",n);
	return 0;
}
