/*Questao 3- Calcule o valor de a partir de uma série infinita
	π = 4− 4/3 + 4/5 − 4/7 + 4/9 − 4/11 +... 
Imprima uma tabela que mostre o valor aproximado de Pi calculando os 200.000 primeiros termos dessa série.
Quantos termos você tem de utilizar antes de primeiro obter um valor que começa com 3,14159?*/

#include <stdio.h>
#include <math.h>

int main(){
	int vezes, debaixo, i=0;
	float x, pi;
	
	printf("Digite as vezes que o programa vai rodar: ");
	scanf("%d", &vezes);
	
		for(debaixo=1; debaixo<vezes; debaixo+=2){
		
		x+= pow(-1, i)*(4.0/debaixo);
		
		i++;
		}
		printf("%.5f", x);
	
	 //+ou- 188000 vezes
	return 0;
}


