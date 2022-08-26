#include<stdio.h>
int main(){
	
	int op;
	float n1, n2;
	printf("\n*****CALCULADORA*****\n");
	printf("\n1- Soma");
	printf("\n2- Subtração");
	printf("\n3- Multiplicação");
	printf("\n4- Divisão");
	printf("\n5- Sair");
	printf("\n Escolha sua opção: ");
	scanf("%d",&op);
	if(op<1 || op>5){
		printf("\nOpção é inválida!");
	}
	else{
		if(op==5){
			printf("\nFinalizando...");
		}
		else{
			printf("\nInforme o primeiro valor: ");
			scanf("%f",&n1);
			printf("\nInforme o segundo valor: ");
			scanf("%f",&n2);
			switch(op){
				case 1:{
					printf("O resultado da soma: %.1f",n1+n2);
					break;
				}
				case 2:{
					printf("O resultado da subtração: %.1f",n1-n2);
					break;
				}
				case 3:{
					printf("O resultado da multiplicação: %.1f",n1*n2);			
					break;
				}
				case 4:{
					if(n2!=0){					
					printf("O resultado da divisão: %.1f",n1/n2);
				}
					else{
					printf("É impossivel fazer essa divisão!");
				}
					break;
				}
			}
		}
	}
		
}

