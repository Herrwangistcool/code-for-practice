#include<stdio.h>

void f(int *p);
void g(int k);

int main(void)
{
	int i=6;
	int *p=0;//指针未指向变量 
	int k;
	k=12;
	*p=12;//直接给*p赋值可能会造成程序崩溃 
	
	printf("&i=%p\n",&i);
	f(&i);
	g(i);
	
	return 0;
} 

void f(int *p)
{
	printf("p=%p\n",p);
	printf("*p=%d\n",*p);
	*p=26;	
} 

void g(int k)
{
	printf("k=%d\n",k);
}
