#include<stdio.h>


void danli()
{
	int i;
	double principal;
	double rate;
	int year;
	double sum;
	double ddddd=0;
	printf("��������ı���:");
	scanf("%lf",&principal);
	sum=principal;
	printf("���������:");
	scanf("%lf",&rate);

	printf("������洢ʱ�䳤����λΪ��:");
	scanf("%d",&year);

	for(i=0;i<year;i++)
	{
		ddddd=principal*rate;
		sum=ddddd+sum;
	}
	printf("�������ǮΪ%.2lf",sum);
}

void ddd(){
	int year;
	int i;
	double rate,money;
	double ddd;
	printf("���������������:");
	scanf("%lf",&rate);
	
	printf("����Ǯ:");
	scanf("%lf",&money);

	printf("�洢ʱ�䳤,��λΪ��:");
	scanf("%d",&year);

	for(i=0;i<year;i++)
	{
		money=money/(1+rate);
		
	}
	printf("����Ҫ�洢�ı���Ϊ%.2lf",money);
	getchar();

}
main()
{
	int i;
	ddds:		printf("��������ѡ��1��ѡ���󱾽�2:");
	scanf("%d",&i);
	if(i==1)
	{
		danli();
	}
	else if(i==2)
	{
		ddd();
	}
	else 
		printf("�����������������\n");
		goto ddds;

	}