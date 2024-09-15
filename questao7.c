/*Questao 7-A série de Fibonacci é 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... 
Os dois primeiros termos são iguais a 1, e a partir do terceiro, o termo é dado pela soma dos dois termos anteriores.
Dado um número n≥ 3, exiba o n-ésimo termo da série de Fibonacci. (Não use recursivo.)*/
#include <stdio.h>
int main(){
printf("\n\nProgama Fibonacci: \n");

int n, i;
int a=1, b=1, proximo;

printf("\nDigite o valor de n, considerando que (n >= 3): ");
scanf("%d", &n);

if (n == 1 || n == 2)
    printf("\nO termo (%d) inserido se refere ao: 1\n", n);

else{
    for (i = 3; i <= n; i++){
        proximo = a+b;
        a = b;
        b = proximo;
    }
}
    printf("\nO termo (%d) inserido, na serie de Fibonacci se refere a: %d", n, b);

}
