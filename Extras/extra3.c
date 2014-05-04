#include <stdio.h>

//z=(x++) -> ele passa o valor de x para z e depois incrementa x;
//z=(++x) -> ele incrementa x e passa o valor já incrementado para z;
//x = -x  -> Se x for um número positivo, passa a ser negativo;
int main()
{
	int x,y,z;
		printf("x = %d | y = %d | z = %d\n",x,y,z);
	x=y=10;
		printf("x = %d | y = %d | z = %d\n",x,y,z);
	z=(x++);
		printf("x = %d | y = %d | z = %d\n",x,y,z);
	x = -x;
		printf("x = %d | y = %d | z = %d\n",x,y,z);
	y++;
		printf("x = %d | y = %d | z = %d\n",x,y,z);
	x = x + y-(z--);
		printf("x = %d | y = %d | z = %d\n",x,y,z);
	
	return 0;
}


