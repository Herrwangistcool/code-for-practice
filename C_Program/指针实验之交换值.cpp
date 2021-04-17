/*函数返回多个值，某些值只能通过指针返回*/
/*传入的参数实际上是需要保存带回的结果变量*/ 

#include<stdio.h>

void swap(int *pa, int *pb);

int main(void)
{
	int a=5;
	int b=6;
	swap(&a,&b);
	printf("a=%d, b=%d\n",a,b);
	
	return 0;
}

void swap(int *pa, int *pb)
{
	int t=*pa;
	*pa=*pb;
	*pb=t;
}
