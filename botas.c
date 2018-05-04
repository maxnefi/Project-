#include <stdio.h>
#include <string.h>

void convert(char s[])
{
	int t, i;
	t = strlen(s);
	for(i=0;i<t;i++)
	{
		s[i] = tolower(s[i]);
	}
}

int main()
{
	char dia[50], local[50];
	int somatorio[8]= {0}, i=11, x=7, maior=0, t1=0, t2=0, maiord;
	while(i--)
	{
		scanf(" %[^\n]s", dia);
		scanf(" %[^\n]s", local);
		convert(dia);
		convert(local);
		if(strcmp(dia, "segunda")==0)
		{
			somatorio[0]+=1;
		}
		if(strcmp(dia, "terca")==0)
		{
			somatorio[1]+=1;
		}
		if(strcmp(dia, "quarta")==0)
		{
			somatorio[2]+=1;
		}
		if(strcmp(dia, "quinta")==0)
		{
			somatorio[3]+=1;
		}
		if(strcmp(dia, "sexta")==0)
		{
			somatorio[4]+=1;
		}
		if(strcmp(dia, "sabado")==0)
		{
			somatorio[5]+=1;
		}
		if(strcmp(dia, "domingo")==0)
		{
			somatorio[6]+=1;
		}
		if(strcmp(local, "bar")==0)
		{
			t1++;
		}
		if(strcmp(local, "praia")==0)
		{
			t2++;
		}
	}
	for(i=0; i<x;i++)
	{
		if(somatorio[i]>maior)
		{
			maior = somatorio[i];
		}
	}
	if(t1>t2)
	{
		maiord= t1;
	}
	else
	{
		maiord= t2;
	}
	printf("%d\n%d\n", maior, maiord);
	return 0;
}