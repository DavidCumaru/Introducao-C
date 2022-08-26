#include <stdio.h>
int main()
{
	int x;
	
	printf("\nDigite um numero inteiro: ");
	scanf("%d", &x);
	printf("\nO antecessor de %d e %d e o sucessor e %d", x, (x-1), (x+1));
	return(0);
}



