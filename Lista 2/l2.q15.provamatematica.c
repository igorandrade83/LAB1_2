#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void prova();


int main()
{
	prova();
	system("pause");
	return 0;
}

void prova()
{
	srand(time(NULL));
	int num1, num2, respaluno, i, acertos=0;
	
	printf(" ::: Prova de matematica ::: \n\n");
	
	for (i=0;i<5;i++)
	{
		num1 = rand() % 101;
		num2 = rand() % 101;
		printf("%d + %d = ", num1, num2);
		scanf("%d", &respaluno);

		if(respaluno == num1+num2)
		{
			printf(" (Acertou!)\n");
			acertos++;
		}else
			printf(" (Errou!)\n");
	}
	printf("\nacertos: %d\n", acertos);
	
	return;
}
