#include<stdio.h>
int main()
{
	int id,shortTerm,num;
	double rate,purchaseAmount,interest,money;
	printf("欢迎使用收益预估系统!\n");
	
	printf("==================================理财产品清单===================================\n");
	printf("产品编号 产品名称 预期年化收益率 起购金额 最短期限\n");
	printf("1.\t雪萍基金028\t4.00%%\t  5w\t  28天\n");
	printf("2.\t雪萍基金056\t4.55%%\t  5w\t  56天\n");
	printf("3.\t雪萍基金090\t4.65%%\t  10w\t  90天\n");
	printf("4.\t雪萍基金128\t4.75%%\t  10w\t  128天\n");
	printf("5.\t雪萍基金188\t4.85%%\t  10w\t  188天\n");
	
	do{
		printf("\n请输入您想购买的理财产品编号，结束查询请按0:\n");
		scanf("%d",&id);
		if(id>=1&&id<=5)
		{
			switch(id)
			{
				case 1:
					rate=0.040;
					purchaseAmount=5;
					shortTerm=28;
					break;
				case 2:
					rate=0.0455;
					purchaseAmount=5;
					shortTerm=56;
					break;
				case 3:
					rate=0.0465;
					purchaseAmount=10;
					shortTerm=90;
					break;
				case 4:
					rate=0.0475;
					purchaseAmount=10;
					shortTerm=128;
					break;
				case 5:
					rate=0.0485;
					purchaseAmount=10;
					shortTerm=188;
					break;
			}
			printf("请输入购买的金额(万元)：");
			scanf("%lf",&money);
			if(money<purchaseAmount)
			printf("您输入的金额小于起购金额，该产品的起购金额为%.01f万元：\n",purchaseAmount);
			else
			{
				printf("请输入预计购买的期数：");
				scanf("%d",&num);
				printf("\n");
				interest=money*rate*num*shortTerm/365;
				printf("预计您的到期收益为%.4lf万元，本息合计共%.4lf万元\n",interest,interest+money);
				printf("投资有风险，理财需谨慎！\n");	
			} 
		}
			else if(id==0)
			{
				printf("感谢您的使用，欢迎下次光临!\n");
				break;
			}else
				printf("请选择正确的理财产品编号，用数字1-5表示!\n");
		}while(1);
	return 0;
}
