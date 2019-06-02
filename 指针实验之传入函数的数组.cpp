#include<stdio.h>

void minmax(int a[], int len, int *max, int *min);//用*a代替int a[]也可以编译通过 

int main(void)
{
	int a[]={1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55,};
	int min, max;
	printf("main sizeof(a)=%lu\n",sizeof(a));
	printf("main a=%p\n",a); 
	minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);//&min,&max的作用是把结果带出来 
	printf("min=%d, max=%d\n",min,max);
	int *p=&min;
	printf("*p=%d\n",*p);
	printf("p[0]=%d\n",p[0]);//[]运算符可以对数组做，也可以对指针做 
	printf("*a=%d\n",*a); //运算符*可以对指针做，也可以对数组做 
	
	return 0;
} 

void minmax(int a[],int len, int *min, int *max)//int a[]在函数中实际上是指针，所以sizeof不能正确显示其长度 
{
	int i;
	printf("minmax sizeof(a)=%lu\n",sizeof(a));//sizeof(a)==sizeof(int*) 
	printf("minmax a=%p\n",a);
	*min=*max=a[0];
	for(i=1;i<len;i++)
	{
		if(a[i]<*min)
		{
			*min=a[i];
		}
		if(a[i]>*max)
		{
			*max=a[i];
		}
	}
 } 
