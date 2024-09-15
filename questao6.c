/*Questao 6- Um método para o cálculo de raiz quadradas de um número N já era conhecido pelos babilônios em...
bom, há muito tempo (também é conhecido como Método de Heron, um matemático grego que o descreveu 20 séculos depois, perto do ano 50 DC.
Começando com um valor inicial k (geralmente valendo 1), os babilônios geravam um novo valor de k de acordo com a regra:
A medida em que o processo é repetido, os novos valores de k se aproximam cada vez mais da raiz de N. Faça um programa que leia o valor de N 
e exiba os primeiros doze valores calculados com essa fórmula, verificando se eles realmente se aproximaram da raiz correta.*/
#include <stdio.h>
#include <math.h>
int main(){
printf("\n\nCalculo de Raiz Babilonico (Metodo de Heron): \n");

int valor_n;
float k = 1;

printf("\nInsira o valor para ser calculado pelo Metodo de Heron: ");
scanf("%d", &valor_n);

float raiz_quad = sqrt(valor_n);

printf("\n\tA raiz de %d e igual %.4f\n\n", valor_n, raiz_quad);

for(int i =1; i < 13; i++){

    k = (k+(valor_n/k))/2;

    printf("No processo %d a raiz seguindo o metodo de heron e igual a %.4f \n", i, k );
}
}
