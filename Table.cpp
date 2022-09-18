#include<stdio.h>
#include<string.h>

void in(char a[])
{
	printf("%c   %s",186,a);
	for(int i=0;i<12-strlen(a);i++){printf(" ");}
}
void top()
{
	printf("%c",201);
	for(int i=0;i<15;i++){printf("%c",205);}
	printf("%c",203);
	for(int i=0;i<15;i++){printf("%c",205);}
	printf("%c",203);
	for(int i=0;i<15;i++){printf("%c",205);}
	printf("%c",203);
	for(int i=0;i<15;i++){printf("%c",205);}
	printf("%c\n",187);
}
void mid()
{
	printf("%c",204);
	for(int i=0;i<15;i++){printf("%c",205);}
	printf("%c",206);
	for(int i=0;i<15;i++){printf("%c",205);}
	printf("%c",206);
	for(int i=0;i<15;i++){printf("%c",205);}
	printf("%c",206);
	for(int i=0;i<15;i++){printf("%c",205);}
	printf("%c\n",185);
}
void bot()
{
	printf("%c",200);
	for(int i=0;i<15;i++){printf("%c",205);}
	printf("%c",202);
	for(int i=0;i<15;i++){printf("%c",205);}
	printf("%c",202);
	for(int i=0;i<15;i++){printf("%c",205);}
	printf("%c",202);
	for(int i=0;i<15;i++){printf("%c",205);}
	printf("%c\n",188);
}

int main()
{
	char Ten[10][10], MaSV[10][10], NamSinh[10][10],QueQuan[10][15];
	strncpy(Ten[0],"Ten",sizeof(Ten[0]));strncpy(MaSV[0],"MaSV",sizeof(MaSV[0]));
	strncpy(NamSinh[0],"NamSinh",sizeof(NamSinh[0]));strncpy(QueQuan[0],"QueQuan",sizeof(QueQuan[0]));
	int n;
	printf("Nhap so luong Sinh Vien:"); scanf("%d",&n);
	for (int i=1;i<n+1;i++)
	{
		printf("Ten SV%d: ",i);scanf("%s",&Ten[i]);
		printf("Ma SV%d: ",i);scanf("%s",&MaSV[i]);
		printf("Nam Sinh SV%d: ",i);scanf("%s",&NamSinh[i]);
		printf("Que quan SV%d: ",i);scanf("%s",&QueQuan[i]);
	}
	top();
	for(int i=0;i<n+1;i++)
	{
		in(Ten[i]);in(MaSV[i]);in(NamSinh[i]);in(QueQuan[i]);printf("%c\n",186);
		if(i<n)
		{mid();}
	}
	bot();
}