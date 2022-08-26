/*Elabore  um programa em C que leia a medida de um raio de um c�rculo e efetue 
o c�lculo da sua �rea, exibindo o resultado ao final.
Observa��o1: n�o foi utilizada a fun��o pot�ncia (bliblioteca math.h) por estar 
fora do escopo da mat�ria;
Observa��o2: como o pi foi utilizado apenas uma vez, poder�amos usar seu valor 
direto na fun��o, sem declar�-lo como variavel. Entretanto, a declara��o foi 
realizada para fins did�ticos.
*/ 

#include <stdio.h>

int main(){
	float raio;
	float pi = 3.14;
	printf("Por favor, informe o raio da circunferencia: ");
	scanf("%f", &raio);
	printf("A area do circulo de raio %.2f e %.2f.", raio, pi*raio*raio);
}
