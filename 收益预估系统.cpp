#include<stdio.h>
int main()
{
	int id,shortTerm,num;
	double rate,purchaseAmount,interest,money;
	printf("��ӭʹ������Ԥ��ϵͳ!\n");
	
	printf("==================================��Ʋ�Ʒ�嵥===================================\n");
	printf("��Ʒ��� ��Ʒ���� Ԥ���껯������ �𹺽�� �������\n");
	printf("1.\tѩƼ����028\t4.00%%\t  5w\t  28��\n");
	printf("2.\tѩƼ����056\t4.55%%\t  5w\t  56��\n");
	printf("3.\tѩƼ����090\t4.65%%\t  10w\t  90��\n");
	printf("4.\tѩƼ����128\t4.75%%\t  10w\t  128��\n");
	printf("5.\tѩƼ����188\t4.85%%\t  10w\t  188��\n");
	
	do{
		printf("\n���������빺�����Ʋ�Ʒ��ţ�������ѯ�밴0:\n");
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
			printf("�����빺��Ľ��(��Ԫ)��");
			scanf("%lf",&money);
			if(money<purchaseAmount)
			printf("������Ľ��С���𹺽��ò�Ʒ���𹺽��Ϊ%.01f��Ԫ��\n",purchaseAmount);
			else
			{
				printf("������Ԥ�ƹ����������");
				scanf("%d",&num);
				printf("\n");
				interest=money*rate*num*shortTerm/365;
				printf("Ԥ�����ĵ�������Ϊ%.4lf��Ԫ����Ϣ�ϼƹ�%.4lf��Ԫ\n",interest,interest+money);
				printf("Ͷ���з��գ�����������\n");	
			} 
		}
			else if(id==0)
			{
				printf("��л����ʹ�ã���ӭ�´ι���!\n");
				break;
			}else
				printf("��ѡ����ȷ����Ʋ�Ʒ��ţ�������1-5��ʾ!\n");
		}while(1);
	return 0;
}
