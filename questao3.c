/*Questao 3*/

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


