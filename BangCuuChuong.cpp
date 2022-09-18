#include<stdio.h>
void top()
{
	printf("%c",201);
	for(int i=0;i<13;i++){printf("%c",205);}
	printf("%c",203);
	for(int i=0;i<13;i++){printf("%c",205);}
	printf("%c",203);
	for(int i=0;i<13;i++){printf("%c",205);}
	printf("%c\n",187);
}

void mid()
{
	printf("%c",204);
	for(int i=0;i<13;i++){printf("%c",205);}
	printf("%c",206);
	for(int i=0;i<13;i++){printf("%c",205);}
	printf("%c",206);
	for(int i=0;i<13;i++){printf("%c",205);}
	printf("%c\n",185);
}

void bot()
{
	printf("%c",200);
	for(int i=0;i<13;i++){printf("%c",205);}
	printf("%c",202);
	for(int i=0;i<13;i++){printf("%c",205);}
	printf("%c",202);
	for(int i=0;i<13;i++){printf("%c",205);}
	printf("%c\n",188);
}
int main()
{
	printf("---------------BANG CUU CHUONG-------------\n");
	top();
	for (int i=1;i<10;i++)
	{
		for(int j =1;j<4;j++)
		printf("%c  %d x %d = %d%s",186,j,i,j*i,i*j<10?"  ":" ");
		printf("%c\n",186);
	}
	mid();
	for (int i=1;i<10;i++)
	{
		for(int j =4;j<7;j++)
		printf("%c  %d x %d = %d%s",186,j,i,j*i,i*j<10?"  ":" ");
		printf("%c\n",186);
	}
	mid();
	for (int i=1;i<10;i++)
	{
		for(int j =7;j<10;j++)
		printf("%c  %d x %d = %d%s",186,j,i,j*i,i*j<10?"  ":" ");
		printf("%c\n",186);
	}
	bot();
	return 0;
}