#include<stdio.h>


void danli()
{
	int i;
	double principal;
	double rate;
	int year;
	double sum;
	double ddddd=0;
	printf("请输入你的本金:");
	scanf("%lf",&principal);
	sum=principal;
	printf("你的年利率:");
	scanf("%lf",&rate);

	printf("请输入存储时间长，单位为年:");
	scanf("%d",&year);

	for(i=0;i<year;i++)
	{
		ddddd=principal*rate;
		sum=ddddd+sum;
	}
	printf("你的所得钱为%.2lf",sum);
}

void ddd(){
	int year;
	int i;
	double rate,money;
	double ddd;
	printf("请输入你的年利率:");
	scanf("%lf",&rate);
	
	printf("所得钱:");
	scanf("%lf",&money);

	printf("存储时间长,单位为年:");
	scanf("%d",&year);

	for(i=0;i<year;i++)
	{
		money=money/(1+rate);
		
	}
	printf("所需要存储的本金为%.2lf",money);
	getchar();

}
main()
{
	int i;
	ddds:		printf("单利计算选择1，选择求本金按2:");
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
		printf("输入错误，请重新输入\n");
		goto ddds;

	}
