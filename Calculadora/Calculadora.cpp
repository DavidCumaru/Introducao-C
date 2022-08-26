#include <stdio.h>
#include <locale.h>
int soma (int x, int y){
	return (x + y); 
}
int sub (int x, int y){
	return (x - y);
}
int mult (int x, int y){
	return (x * y);	
}
float div (float x, float y){
	return (x / y);
}
int main(){
	setlocale(LC_ALL,"");
	int op, x, y, i;
	float z;
	printf("\n*****CALCULADORA*****\n");
	printf("\nPor favor, insira somente valores inteiros!\n");
	printf("\n1- Soma");
	printf("\n2- Subtra��o");
	printf("\n3- Multiplica��o");
	printf("\n4- Divis�o");
	printf("\n5- Sair");
	printf("\nEscolha sua op��o: ");
	scanf("%d",&op);
	if(op<1 || op>5){
		printf("\nOp��o inv�lida!\n");
	}
	else{
		if(op==5){
			printf("\nFinalizando...");
		}
		else{
			printf("\nDigite seu primeiro valor : ");
			scanf("%d",&x);
			printf("\nDigite seu segundo valor: ");
			scanf("%d",&y);
			switch(op){
				case 1:{
					i = soma(x,y);					
					printf("\nO resultado �: %d",i);
					break;
				}
				case 2:{
					i = sub(x,y);
					printf("\nO resultado �: %d",i);
					break;
				}
				case 3:{
					i = mult(x,y);
					printf("\nO resultado �: %d",i);			
					break;
				}
				case 4:{
					if ( y != 0){															
						z = div(x,y);				
						printf("\nO resultado �: %.2f",z);											
					}
					else {
						printf ("\nImpossivel realizar a divis�o!");
					}
					break;
				}
			}
		}
	}
	return 0;	
}
