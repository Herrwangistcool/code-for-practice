#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	void *p=0;//��ָ���ʼ��0��free(NULL)�Ϳ����ͷ��ڴ� 
	int cnt=0;
	while(p=malloc(100*1024*1024))
	//����ʧ��malloc����0�����߽���null 
	//malloc��ֵ����p�����malloc�õ�����0����ѭ��ֹͣ 
	{
		cnt++; 
	}
	printf("������%d00MB�Ŀռ�\n",cnt);
	free(NULL); 
	system("pause");
	return 0;
 } 
