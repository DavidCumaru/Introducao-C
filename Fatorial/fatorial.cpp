#include <stdio.h>
#include <locale.h>

int fatorial(int a){
	int i, f = 1;
	for(i=1;i<=a;i++){
		f= f * i;
	}
	return(f);
}

int main(){
	setlocale(LC_ALL,"");
	int n, cont;
	
	for(cont=1;cont<=10;cont++){
		do{
			printf("\nPor favor, forne�a um n�mero: ");
			scanf("%d",&n);
		}while(n<0);
		printf("\nO fatorial de %d �: %d.\n", n, fatorial(n));
	}
}

