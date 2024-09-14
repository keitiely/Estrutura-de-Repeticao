/*8- Faça um aplicativo que verifique se o número digitado n é um número primo. 
Lembrando que todo número primeiro é divisível apenas por 1 ou por ele mesmo.*/
    #include <stdio.h>
    #include <math.h>

    int main(){
        int n;
        int primo = 1;

        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n <= 1) {
            printf("O numero %d nao e primo\n", n);
            primo=0;
        } 
        else{
            for (int i = 2; i <= sqrt(n); i++) {
                if (n % i == 0) {
                    printf("O numero %d nao e primo\n", n);
                    primo=0;
                    break;
                }
            }
        }
        if(primo){
            printf("O numero %d e primo\n", n);
        }


    }


