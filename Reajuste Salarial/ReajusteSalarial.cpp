#include<stdio.h>
float calcularReajuste(int v1,float v2){
		if(v1<2){						
			return(v2*0.025);		
		}
		if(v1>=2 && v1<=5){		
			return(v2*0.05);
		}
		if(v1>5 && v1<=10){			
			return(v2*0.075);
		}
		if(v1>10){			
			return(v2*0.1);
		}		
}	
int main(){
	int i, tempo;
	float salario, resul, novo_salario;
	for(i=1;i<=2;i++){
	printf("Qual seu tempo na industria em anos?");
	scanf("%d",&tempo);
	printf("Qual seu salario em R$ :");
	scanf("%f",&salario);
	resul = calcularReajuste(tempo,salario);
	novo_salario = resul + salario;
	printf("o valor do salario com reajuste e: %.2f",novo_salario);
	printf("\n");

	}
	
}

