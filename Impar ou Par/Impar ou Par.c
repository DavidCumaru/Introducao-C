#include <stdio.h>
int main(){
	int x;
	printf("Digite um numero inteiro:");
	scanf("%d",&x);
	if(x%2==0)//operador %
	{
		printf("Este numero � par");
	}
	else
	printf("Este numero � impar");
}
