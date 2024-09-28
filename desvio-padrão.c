//Questao 2
#include <stdio.h>
#include <math.h>
int main(){

printf("\n\nProgama Calcular Desvio de Padrao: \n");

int n_tamanho = 0, variavel_x, aux = 0;
float somatorio_do_xlinha = 0,desvio_padrao=0, somatorio_normal=0;

printf("\nDigite o indice final 'n' (tamanho): ");
scanf("%d", &n_tamanho);

printf("\n");

for(int i=0; i < n_tamanho; i++){

    printf("Digite um algarismo, para a varivel 'x' no indice %d: ", i);
    scanf("%d", &variavel_x);

    while (variavel_x >= 10)
    {
        printf("\n\tDigite um numero valido no indice %d (0 a 9): ", i);
        scanf("%d", &variavel_x);
        printf("\n");
    }
    somatorio_do_xlinha += variavel_x;

    aux += variavel_x*(pow(10,n_tamanho-(i+1)));

} 
    
somatorio_do_xlinha = somatorio_do_xlinha / n_tamanho;

for(int j = 0; j < n_tamanho; j++){

    aux %= (int)pow(10,n_tamanho-j);
    somatorio_normal += pow(aux / (int)pow(10, n_tamanho - (j + 1)) - somatorio_do_xlinha, 2);
}

desvio_padrao = sqrt(somatorio_normal/(n_tamanho-1));

printf("\nDesvio padrao %f", desvio_padrao);
}



/* 
#include <stdio.h>
#include <math.h>

int main(){
	float x1, x2, x3, x4, x5, media, desvio_padrao;

	printf("Entre com o valor de x1: ");
	scanf("%f", &x1);

	printf("Entre com o valor de x1: ");
	scanf("%f", &x2);

	printf("Entre com o valor de x1: ");
	scanf("%f", &x3);
	
	printf("Entre com o valor de x1: ");
	scanf("%f", &x4);

	printf("Entre com o valor de x1: ");
	scanf("%f", &x5);


	media = (x1+x2+x3+x4+x5)/5;

	desvio_padrao = sqrt((pow((x1-media),2)+pow((x2-media),2)+pow((x3-media),2)+pow((x4-media),2)+pow((x5-media),2))/4);

	printf("A media é: %f\n", media);
	printf("O desvio padrão é %f\n", desvio_padrao);

}*/
