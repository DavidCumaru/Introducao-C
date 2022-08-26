#include <stdio.h>
#include <locale.h>
#define max 14

int main(){
    setlocale(LC_ALL,"portuguese");
    int i, vetor[max];
    for(i=0;i<max;i++){
    	printf("\nDigite um número inteiro: ");
    	scanf("%d",&vetor[i]);
	}
	printf("\nVETOR X : ");
	for(i=0;i<max;i++){
    	printf(" %d ",vetor[i]);
    
	}
	
	printf("\nVETOR X INVERTIDO : ");
	for(i=13;i>=0;i--){
		printf(" %d ",vetor[i]);
	}
	return 0;
}


