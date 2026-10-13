#include <stdio.h>
int main ()
{
//    int a=0 ;
//
//	printf ("a++:%d,a:%d\n",a++,a);
//	a=0;
//	printf ("++a:%d,a:%d\n",++a,a);
//上述代码错误，因为在同个表达式里既修改变量，又输出变量，属于未定义行为
	int a=0 ;
	printf ("a++:%d\n",a++);
	printf ("a:%d\n",a);
	a=0;
	printf ("++a:%d\n",++a);
	printf ("a:%d\n",a);
	

	return 0;
}
