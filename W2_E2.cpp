#include<stdio.h>
int main()
{
	double pa=9000000, pd=3600000, income, t_free, t_income, tax;
	int n;
	printf("Your income of this year : ");scanf("%lf",&income);
	printf("Number of dependent: ");scanf("%d",&n);
	t_free = 12*(pa+n*pd);
	t_income = income - t_free;
	if(t_income<=0){tax=0;}
	if(0<=t_income && t_income<=5000000)
	{tax=t_income/20;}
	if(50000001<=t_income && t_income<=10000000)
	{tax=t_income/10;}
	if(10000001<= t_income && t_income<=18000000)
	{tax=t_income*15/100;}
	else
	{tax=t_income/5;}
	printf("Tax-free income: %0.0lf\n",t_free);
	printf("Taxable income: %0.0lf\n",t_income<=0?0:t_income);
	printf("Income tax: %0.0lf",tax<=0?0:tax);
	return 0;
}