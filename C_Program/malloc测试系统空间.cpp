#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	void *p=0;//将指针初始化0；free(NULL)就可以释放内存 
	int cnt=0;
	while(p=malloc(100*1024*1024))
	//申请失败malloc返回0，或者叫做null 
	//malloc的值赋给p，如果malloc得到的是0，则循环停止 
	{
		cnt++; 
	}
	printf("分配了%d00MB的空间\n",cnt);
	free(NULL); 
	system("pause");
	return 0;
 } 
