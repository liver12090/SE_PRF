#include<stdio.h>
int main()
{
	int x=1,y=1;
	do
	{
		printf("x = "); scanf("%d",&x);
		if(x!=0) 
		{
		printf("y = ");scanf("%d",&y);
		if(y!=0) {printf("After swap: x = %d , y = %d\n",y,x); printf("Next\n");}
		}
	}
	while(x!=0 && y!=0);
	return 0;
}