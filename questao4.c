/*Questao 4-Faça um programa que leia um valor N qualquer, inteiro e positivo, calcule e mostre a seguinte soma:*/
#include <stdio.h>
int main(){
printf("\n\nProgama Soma de E: \n");

int vezes, i, j;
float soma = 1.0;

printf("\nDigite as vezes que o programa vai rodar: ");
scanf("%d", &vezes);

for(i = 1; i <= vezes; i++){
    int fatorial = 1.0;

    for(j = 1; j <= i; j++){
        fatorial = j;
    }

    soma += 1.0/fatorial;
}

printf("\n\tO valor da soma e igual a %.4f", soma);
}
