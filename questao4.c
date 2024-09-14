#include <stdio.h>
#include <math.h>

int main(){
	int vezes, i;
	float debaixo=1, fatorial=1;
	float x, pi;
	
	printf("Digite as vezes que o programa vai rodar (N): ");
	scanf("%d", &vezes);
	
		for(i=vezes; i>=1; i--){
    	fatorial *= i;
    	
    	debaixo+= 1.0/fatorial;
    	}	
		
		
		
		printf("%f", debaixo);
	
	
	
	 //+ou- 188000 vezes
	return 0;
}
