/*
Construa  um programapara  ler  uma  temperatura  em  graus  Celsius  e  
apresentá-la convertida  em  graus  Fahrenheit.  A  fórmula  de  conversão  é  
F  =  (9  *  C  +  160)  /  5, sendo F a temperatura em Fahrenheit e C a 
temperatura em Celsius.
*/

#include <stdio.h>

int main (){
	float celsius;
	printf("Por favor, forneca a temperatura em graus Celsius: ");
	scanf("%f", &celsius);
	printf("%.1f grau(s) Celsius equivale(m) a %.1f grau(s) Fahrenheit.", celsius, ((9 * celsius + 160))/5);
}
