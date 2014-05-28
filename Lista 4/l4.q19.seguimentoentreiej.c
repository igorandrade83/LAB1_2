#include<stdio.h>

void recebe()
{
	char s[30];
	int i,j,l;
	gets(s);
	scanf("%d %d", &i, &j);
	
	for(l=i;l<j+1;l++)
		printf("%c",s[l]);
	puts("\n");
	return;
}


int main()
{
	recebe();
	system("pause");
	return 0;	
}
