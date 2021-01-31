/*
	朴素贝叶斯公式为P(B|A)=(P(A|B)*P(B))/P(A); 
*/ 

#include<stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;
	float H=0,C=0,S=0,A=0;//H代表帅气，C代表性格，S代表身高 ，A代表上进心 
	float H1=0,C1=0,S1=0,A1=0;//用于第三个for循环，功能与上面一条赋值一样 
	float PT,PH,PC,PS,PA;// PH代表对象帅，女孩嫁的概率，其他的以此类推 
	float PH1,PC1,PS1,PA1;
	PT=(float)6.0/(float)10.0;//P(T)=嫁的数量/样本数量 
	float FZ,FM,R;//概率公式的分子和分母和结果 
	int b[4];//用来储存自身条件 
	int a[10][5]={{1,0,0,0,0},{1,0,0,1,0},{1,1,0,1,1},{1,1,1,0,1},{1,1,2,1,1},{1,1,0,0,0},{0,1,2,1,1},{0,1,0,1,0},{0,1,1,1,1},{0,0,1,1,1},};
	printf("测一测姑娘和你结婚的概率，请按要求分别输入自身条件\n"); 

	printf("帅气与否？帅输入1，不帅输入0，按回车继续\n");
	scanf("%d",&b[0]);
	printf("性格好输入1，性格不好输入0，按回车继续\n");
	scanf("%d",&b[1]);
	printf("个子高输入1，矮输入0，中等身材输入2，按回车继续\n");
	scanf("%d",&b[2]);
	printf("有上进心输入1，没有上进心输入0，按回车继续\n");
	scanf("%d",&b[3]);
//	for(i=0;i<4;i++)
//		scanf("%d",&b[i]);//分别输入代表自身条件的四个数字 
//测试输出代码，正式结果不包含			
	for(i=0;i<10;i++)
	{
		if(a[i][0]==b[0]&&a[i][4]==1)
		{ 
			H++;
		} 
		if(a[i][1]==b[1]&&a[i][4]==1)
		{
			C++;
		}
		if(a[i][2]==b[2]&&a[i][4]==1)
		{
			S++;
		}
		if(a[i][3]==b[3]&&a[i][4]==1)
		{
			A++;
		}
	}
	for(i=0;i<10;i++)
	{
		if(a[i][0]==b[0])
		{ 
			H1++;
		} 
		if(a[i][1]==b[1])
		{
			C1++;
		}
		if(a[i][2]==b[2])
		{
			S1++;
		}
		if(a[i][3]==b[3])
		{
			A1++;
		}
	}

	PH=H/6.0;
	//printf("PH=%f\n",PH);
	PC=C/6.0; 
	//printf("PC=%f\n",PC);
	PS=S/6.0;
	//printf("PS=%f\n",PS);
	PA=A/6.0;
	//printf("PA=%f\n",PA);
	FZ=PH*PC*PS*PA;
	//printf("FZ=%f\n",FZ); 
	
	PH1=H1/10.0;
	//printf("PH1=%f\n",PH1);
	PC1=C1/10.0; 
	//printf("PC1=%f\n",PC1);
	PS1=S1/10.0;
	//printf("PS1=%f\n",PS1);
	PA1=A1/10.0;
	//printf("PA1=%f\n",PA1);
	FM=PH1*PC1*PS1*PA1;
	//printf("FM=%f\n",FM); 
	 

	R=FZ/FM;
	printf("你结婚的概率为：%f\n",R); 
	printf("测试结果仅为参考，祝君早日找到另一半！"); 
	
	system("pause"); 
	return 0;
}


