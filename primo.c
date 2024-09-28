/*8- Faça um aplicativo que verifique se o número digitado n é um número primo. 
Lembrando que todo número primeiro é divisível apenas por 1 ou por ele mesmo.*/
#include <stdio.h>

int main(){	
    int num;
	printf("Entre com um número: ");
	scanf("%d", &num);

	for(int i=2; i<num; i++){
		if(num%i==0){
            printf("%d não é primo!", num);
			return 1;
        }
	}
    printf("%d é primo!", num);
}
