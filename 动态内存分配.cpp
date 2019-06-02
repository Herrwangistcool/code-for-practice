#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int number;
	int *a;
	int i;
	printf("输入数量：");
	scanf("%d",&number);
	a=(int*)malloc(number*sizeof(int));
	//向malloc申请的空间大小是以字节为单位的
	//返回的结果是void*,需要类型转换为自己需要的类型 
	//申请number个int大小的空间 
	for(i=0;i<number;i++)
	{
		scanf("%d",&a[i]);//a申请内存后可以当数组来用 
	 }
	 for(i=number-1;i>=0;i--)
	 {
	 	printf("%d",a[i]);
	  } 
	free(a);
	return 0;  
 } 
