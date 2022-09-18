#include<stdio.h>
#include<ctype.h>
int main()
{
	char i;
	int nV=0,nC=0,nO=0;
	printf("Nhap: ");
	do
	{
		i = getchar();
		i = toupper(i);
		if(i>='A' && i<='Z')
		{
			switch(i)
			{
				case 'A':nV++;break;
				case 'E':nV++;break;
				case 'O':nV++;break;
				case 'U':nV++;break;
				default: nC++;break;
			}
		}
		else
		{
			nO++;
		}
	}
	while(i!='\n');
	printf("Nguyen am: %d\n",nV);
	printf("Phu am: %d\n",nC);
	printf("Khac : %d\n",nO-1);
	
	return 0;
}