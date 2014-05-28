#include<stdio.h>
#include<string.h>
#define tam 100

void tiraespaco(char *txt)
{
	int i=0,j=0;
	while(i< (strlen(txt)+1))
	{
		if(txt[i] == ' ')
		{
			j=i;
			while(j<(strlen(txt)+1))
			{
				txt[j] = txt[j+1];
				j++;
			}
		}
		
		if(txt[i] == ' ')
			txt[strlen(txt)] = '\0';	
		else
			i++;		
	}
	printf("%s\n",txt);
	
	return;
}

void recebe()
{
	char txt1[tam];
	gets(txt1);
	tiraespaco(txt1);
	return;	
}

int main()
{
	recebe();	
	system("pause");	
	return 0;
}
