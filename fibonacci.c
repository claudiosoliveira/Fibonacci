#include<stdio.h>
#include<stdlib.h>
int fibonacci(int lugar)
{
	if(lugar<2)
	{
		return 1;
	}
	else
	{
		return fibonacci(lugar-2)+fibonacci(lugar-1);
	}
}
int main()
{
	int posicao,j;
	scanf("%i",&posicao);
	printf("%i ",posicao);
	j=fibonacci(posicao-1);
	printf("posicao da sequencia = %i",j);
	return 0;
}

