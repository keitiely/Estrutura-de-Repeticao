/*Questao 5-Faça um programa que calcule o valor aproximado de cos(x) pela série de Taylor, dado pela aproximação abaixo:*/
#include <stdio.h>
#include <math.h>
int main(){
    printf("\n\nProgama Cos(x) Pela Serie de Taylor: \n");

    int aux = 2, n = 10;
    double cosx = 1.0, x;

    printf("\nDigite x: ");
    scanf("%lf", &x);

    for(int i = 1; i <= n; i++){
        int divisor = 1; 


        for(int j = 1; j <= aux; j++){
            divisor *= j;
        }

        int sign = (i % 2 == 0) ? 1 : -1;

        cosx += (sign * pow(x, aux)) / divisor;

        aux += 2;
    }

    printf("\n\tValor aproximado de cos(%.1lf) = %.4lf\n", x, cosx);
}
