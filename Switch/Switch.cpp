#include<stdio.h>
int main(){
	
	int op;
	float n1, n2;
	printf("\n*****CALCULADORA*****\n");
	printf("\n1- Soma");
	printf("\n2- Subtra��o");
	printf("\n3- Multiplica��o");
	printf("\n4- Divis�o");
	printf("\n5- Sair");
	printf("\n Escolha sua op��o: ");
	scanf("%d",&op);
	if(op<1 || op>5){
		printf("\nOp��o � inv�lida!");
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
					printf("O resultado da subtra��o: %.1f",n1-n2);
					break;
				}
				case 3:{
					printf("O resultado da multiplica��o: %.1f",n1*n2);			
					break;
				}
				case 4:{
					if(n2!=0){					
					printf("O resultado da divis�o: %.1f",n1/n2);
				}
					else{
					printf("� impossivel fazer essa divis�o!");
				}
					break;
				}
			}
		}
	}
		
}

