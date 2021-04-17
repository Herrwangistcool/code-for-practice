#include<stdio.h>
int main()
/*
{
	int i=1;
	int *const q=&i;//q只能指向i，不能再指向其他变量
	*q=26;//OK. q++则不行 
	printf("%d",i); 
	return 0;	
} 
*/
{
	int i=1;
	int j=2;
	const int *p=&i;//不能通过p来修改i的值 
	i=26;//OK；*p=26则不行 
	p=&j;//OK
	printf("%d %d\n",i,*p);
	return 0;
} 
