#include<stdio.h>
int main()
/*
{
	int i=1;
	int *const q=&i;//qֻ��ָ��i��������ָ����������
	*q=26;//OK. q++���� 
	printf("%d",i); 
	return 0;	
} 
*/
{
	int i=1;
	int j=2;
	const int *p=&i;//����ͨ��p���޸�i��ֵ 
	i=26;//OK��*p=26���� 
	p=&j;//OK
	printf("%d %d\n",i,*p);
	return 0;
} 
