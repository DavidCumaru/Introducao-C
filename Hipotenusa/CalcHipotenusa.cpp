#include <stdio.h>
#include <math.h>
int main(){
	float c, a, b, ca, cb, t;
	
	printf("Digite o valor do cateto A: ");
	scanf("%f",&a);
	
	printf("Digite o valor do Cateto B: ");
	scanf("%f",&b);
	
	ca = pow(a,2);
	cb = pow(b,2);
	t = ca + cb;
	c = sqrt(t);
	
	printf("\nA hipotenusa da questao é: %.2f", c);
}


