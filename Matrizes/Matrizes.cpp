#include<stdio.h>
#include<locale.h>

int main()
{
setlocale(LC_ALL,"Portuguese");
int matriz[3][3],lin, col, soma_col1, soma_col2, soma_col3;
  
printf ("\nDigite valor para os elementos da matriz\n\n");  
for ( lin=0; lin<3; lin++ ){
    for ( col=0; col<3; col++ ){
      printf ("\nElementos[%d][%d] = ", lin, col);
      scanf ("%d", &matriz[lin][col]);
	}
}
for ( lin=0; lin<3; lin++ ){
	for ( col=0; col<3; col++ ){
    printf ("%d ",matriz[lin][col]);
     
	}
	printf("\n");
}
	
 	soma_col1 = matriz[0][0] + matriz[1][0] + matriz[2][0];
 	soma_col2 = matriz[0][1] + matriz[1][1] + matriz[2][1];
 	soma_col3 = matriz[0][2] + matriz[1][2] + matriz[2][2];
 	printf("\nA soma é: \n");
 	printf("\n%d ",soma_col1);
 	printf("\n%d ",soma_col2);
 	printf("\n%d ",soma_col3);

  return(0);
}
