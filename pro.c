#include<stdio.h>
int main()
{
	int i,j,k,n;
	char as[100],b[100];
	scanf("%s",&as);
	scanf("%s",&b);
	for(i=0;as[i]!='\0';i++)
	{
		if(as[i]==b[i])
		{
			printf("%c",as[i]);
		}
		else
		{
			break;
		}
	}
	return 0;
}
