/*Elabore  um programa em C que leia a medida de um raio de um círculo e efetue 
o cálculo da sua área, exibindo o resultado ao final.
Observação1: não foi utilizada a função potência (bliblioteca math.h) por estar 
fora do escopo da matéria;
Observação2: como o pi foi utilizado apenas uma vez, poderíamos usar seu valor 
direto na função, sem declará-lo como variavel. Entretanto, a declaração foi 
realizada para fins didáticos.
*/ 

#include <stdio.h>

int main(){
	float raio;
	float pi = 3.14;
	printf("Por favor, informe o raio da circunferencia: ");
	scanf("%f", &raio);
	printf("A area do circulo de raio %.2f e %.2f.", raio, pi*raio*raio);
}
