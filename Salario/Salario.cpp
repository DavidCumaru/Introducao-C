#include <stdio.h>
int main()
{
	float salario;
	
	printf("\nQual e seu salario atual: ");
	scanf("%f", &salario);
	printf("Atualmente seu salario e de R$ %.2f,voce recebeu uma promocao de 15%%.", salario);
	printf("\nAumento de R$ %.2f",(0.15*salario));
	printf("\nAgora voce recebe R$ %.2f", salario+(0.15*salario));
}
