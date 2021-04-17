/*指针就是保存地址的变量*/ 
/*void f(int *p); 在被调用的时候得到了某个变量的地址：
int i=o; f(&i); 在函数里面可以通过这个指针访问外面的这个i*/
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
 	*p=26;//相当于i=26； 
}
 
void g(int k)
{
	printf("k=%d\n",k);
}
