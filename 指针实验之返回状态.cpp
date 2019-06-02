/*函数返回运算的状态，结果用指针返回*/
#include<stdio.h>

int divide(int a, int b, int *result);

int main(void)
{
	int a=5;
	int b=2;
	int c;
	if(divide(a,b,&c))
	{
		printf("%d/%d=%d\n",a,b,c);
	}
	return 0;
}

int divide(int a, int b, int *result)
{
	int ret=1;//如果除法成功，返回1；否则返回0 
	if(b==0)//分母不得为0 
		ret=0;
	else
		*result=a/b;
	
	return ret;
}

