#include<stdio.h>
int main()
{
	char c1,c2;
	int t;
	printf("Nhap vao 2 ky tu: \n");
	printf("Ky tu 1: "); scanf("%c",&c1);fflush(stdin);
	printf("Ky tu 2: ");
	scanf("%c",&c2);
	if(c1>c2)
	{
		t=c1;c1=c2;c2=t;
	}
	printf("Co %d ky tu giua %c va %c\n",c2-c1,c1,c2);
	for (int d=c1;d<=c2;d++)
	{
		printf("%c : %d, %o, %x \n",d,d,d,d);
	}
	return 0;
}