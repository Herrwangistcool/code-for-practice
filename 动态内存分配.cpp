#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int number;
	int *a;
	int i;
	printf("����������");
	scanf("%d",&number);
	a=(int*)malloc(number*sizeof(int));
	//��malloc����Ŀռ��С�����ֽ�Ϊ��λ��
	//���صĽ����void*,��Ҫ����ת��Ϊ�Լ���Ҫ������ 
	//����number��int��С�Ŀռ� 
	for(i=0;i<number;i++)
	{
		scanf("%d",&a[i]);//a�����ڴ����Ե��������� 
	 }
	 for(i=number-1;i>=0;i--)
	 {
	 	printf("%d",a[i]);
	  } 
	free(a);
	return 0;  
 } 
