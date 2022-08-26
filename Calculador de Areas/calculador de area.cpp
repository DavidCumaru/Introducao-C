#include <stdio.h>
int main(){
	int opcao,l1,l2;
	float a;
	
	do{
		printf("\nCalculo de areas\n");
		printf("\n-1 Quadrado");
		printf("\n-2 Triangulo");
		printf("\n-3 Retangulo");
		printf("\n-4 Sair");
		printf("\nQual opcao deseja escolher?");
		scanf("%d", &opcao);
		switch(opcao){
			case 1:{                          //CASE 1
				printf("Informe o lado:");
				scanf("%d", &l1);
				printf("\nArea do quadrado: %d\n", l1*l1);
				break;
			}
		
			case 2:{                              // CASE 2
				printf("\nInforme a base: ");
				scanf("%d", &l1);
				printf("\nInforme a altura: ");
				scanf("%d", &l2);
				printf("\nArea do triangulo: %f\n", (l1*l2)/2.0);
				break;
			}
			case 3:{                               //CASE 3
				printf("\nInforme a base do retangulo: ");
				scanf("%d", &l1);
				printf("informe a aultura do retangulo: ");
				scanf("%d", &l2);
				printf("\nA area do retangulo e: %d", l1*l2);
				break;
			}
			
			case 4:{
				printf("\nEcerrando programa!");
				break;
			}
		}
		
	}
	while(opcao!=4);
}
