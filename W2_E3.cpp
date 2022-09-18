#include<stdio.h>

int main()
{
	int i, S=0;
	printf("Nhap so: ");
	do
	{
		scanf("%d",&i);
		if(i!=0){S+=i;}
	}
	while(i!=0);
	printf("Tong la: %d",S);
}