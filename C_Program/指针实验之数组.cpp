/*ָ����Ǳ����ַ�ı���*/ 
/*void f(int *p); �ڱ����õ�ʱ��õ���ĳ�������ĵ�ַ��
int i=o; f(&i); �ں����������ͨ�����ָ�������������i*/
#include<stdio.h>
void g(int k);
void f(int *p); 
int main(void)
{
	int i=6;
	printf("&i=%p\n",&i);
	f(&i);
	g(i);
	
	return 0;
} 
 
void f(int *p)
{
 	printf("p=%p\n",p);
 	printf("*p=%d\n",*p);
 	*p=26;//�൱��i=26�� 
}
 
void g(int k)
{
	printf("k=%d\n",k);
}
