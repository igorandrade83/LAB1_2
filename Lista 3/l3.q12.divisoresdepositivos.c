#include<stdio.h>

void divisor(int *i, int *num)
{	
    scanf("%d", &*num);
    
    printf("Os divisores de %d sao: ", *num);
    for(*i=*num; *i>0; (*i)--)
    {
        if(*num%*i==0)
        {
            printf("%d, ",*i);   
        }   
        
    }	
	printf("\n");
}

void recebe ()
{

	int num,i;
	divisor(&i, &num);
	
	return;
}

int main()
{
	recebe();
    
    system("pause");
    return 0;
}
