#include <stdio.h>
int main(){
	float nota1, nota2 , nota3, nota4, media;
	
	printf("Digite sua primeira nota:");
	scanf("%f",&nota1);
	
	printf("Digite sua segunda nota:");
	scanf("%f",&nota2);
	
	printf("Digite sua terceira nota:");
	scanf("%f",&nota3);
	
	printf("Digite sua quarta nota:");
	scanf("%f",&nota4);
	
	media = (nota1+nota2+nota3+nota4)/4;
	
	printf("media = %.2f ",media);
	
	if(media>=6){
		printf("\nVoce foi aprovado!");	
	}
	else
	printf("\nVoce foi reprovado!");
}

