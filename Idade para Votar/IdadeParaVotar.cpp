#include <stdio.h>
int main (){
	int id=0;
	printf ("Por favor insira sua idade: " );
	scanf("%d",&id);
	
	if (id>=16 && id<=17 || id>70){
		printf("Voce e um eleitor facultativo!");
	}
	else if (id>=18 &&  id<=70){
		printf ("Voce e obrigado a votar!");
	}
	else {
		printf ("Voce nao pode votar!");
	}
}
