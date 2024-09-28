/*Questao 7-A série de Fibonacci é 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... 
Os dois primeiros termos são iguais a 1, e a partir do terceiro,
o termo é dado pela soma dos dois termos anteriores.
Dado um número n≥ 3, exiba o n-ésimo termo da série de Fibonacci.
(Não use recursivo.)*/
#include<stdio.h>

int main()
{
	int pos;
	long double n_ant, n_prox, aux;

	n_ant = 1;
	n_prox = 1;

	printf("Digite a posição o termo: ");
	scanf("%d", &pos);

	for(int i=2;i<pos;i++)
	{
		aux = n_prox;
		n_prox = n_ant + n_prox;
		n_ant = aux;
	}

	printf("O %dº termo da sequencia de Fibonacci é %.0Lf.", pos, n_prox);

}
