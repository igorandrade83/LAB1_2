#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
** Analise experimental de clock por segundos.
** programa: menor numero divisivel por 1 até 20.
*/

int verifica_num()
{
	int num=0,i;
	while(1)
	{
		num+=20;
		if(num%19==0)
			if(num%18==0)
				if(num%17==0)
					if(num%16==0)
						if(num%15==0)
							if(num%14==0)
								if(num%13==0)
									if(num%12==0)
										if(num%11==0)
											if(num%10==0)
												if(num%9==0)
													if(num%8==0)
														if(num%7==0)
															if(num%6==0)
																if(num%5==0)
																	if(num%4==0)
																		if(num%3==0)
																			if(num%2==0)
																				if(num%1==0)
																					return num;
	}

}
	
int main()
{
	clock_t t; // Cria um tipo que conta os pulsos de clock
	t = clock(); // começa a contagem;
	
	printf("%d\n",verifica_num());

	t = clock() - t; // t recebe a diferença entre os clocks atual - o clock que começou a 4 linhas acima (depois de pasasr pela função);
	printf ("It took me %d clicks (%.4f seconds).\n",t,((float)t)/CLOCKS_PER_SEC); // transforma os clocks em tempo (segundos aproximado).

	system("pause");
	return 0;
}
