#include<stdio.h>

int main()
{
	int a = 0,n = 0;
	double b=0.0;
	
	do {
		scanf("%d", &a);
		// 只有当输入不是 -1 时，才累加和计数
		if (a != -1) {
			b += a;  // 累加总和
			n++;     // 统计有效数字个数
		}
	} while (a != -1);
// 防止没有输入任何有效数字就除以0
	if (n > 0) {
		printf("%f\n", b/ n); 
	} else {
		printf("没有输入有效数据\n");
	}
	return 0;
}
