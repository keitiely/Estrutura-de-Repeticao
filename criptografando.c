/*1-Todos os dados são transmitidos como inteiros de quatro dígitos.
Seu aplicativo deve ler um inteiro de quatro dígitos inserido pelo usuário e criptografá-lo da seguinte maneira:
substitua cada dígito pelo resultado da adição de 7 ao dígito, obtendo o restante depois da divisão do novo valor por 10. 
Troque então o primeiro dígito pelo terceiro e o segundo dígito pelo quarto. Então, imprima o inteiro criptografado. 
Escreva um aplicativo separado que receba a entrada de um inteiro de quatro dígitos criptografado e o descriptografe 
(revertendo o esquema de criptografia) para formar o número original. [Projeto de leitura opcional: pesquise a “criptografia de chave públicaˮ
em geral e o esquema de chave pública específica PGP (Pretty Good Privacy). Você também pode querer investigar o esquema RSA, que é amplamente 
usado em aplicativos robustos industriais.]*/
#include <stdio.h>
int main(){
  int num, aux1, aux2, num1, num2, num3, num4;
  
  printf("\tCriptografando....\n");
  printf("\tDigite um numero de 4 digitos: ");
  scanf("%d", &num);
  
  if(num < 9999){
  //separando numeros
  num1 = num/1000;
  num2 = (num%1000)/100;
  num3 = (num%100)/10;
  num4 = num%10;
 //criptografando
  num1 = (num1 + 7) % 10;
  num2 = (num2 + 7) % 10;
  num3 = (num3 + 7) % 10;
  num4 = (num4 + 7) % 10;
 //invertendo
  aux1 = num1;
  num1 = num3;
  aux2 = num2;
  num2 = num4;
  num3 = aux1;
  num4 = aux2;

  printf("\tNumero Criptografado:  %d%d%d%d\n", num1, num2, num3, num4);

  printf("\n");
  printf("\tDiscriptografando....\n");
  printf("\tDigite um numero de 4 digitos: ");
  scanf("%d", &num);
  //separando numeros
  num1 = num/1000;
  num2 = (num%1000)/100;
  num3 = (num%100)/10;
  num4 = num%10;
 //discriptografando
  num1 = (num1 + 3) % 10;
  num2 = (num2 + 3) % 10;
  num3 = (num3 + 3) % 10;
  num4 = (num4 + 3) % 10;
    //invertendo
    aux1 = num1;
    num1 = num3;
    aux2 = num2;
    num2 = num4;
    num3 = aux1;
    num4 = aux2;
  printf("\tNumero discriptografado:  %d%d%d%d\t", num1, num2, num3, num4);
}
  else{
    printf("\tnumero inavlido, digite numero de quatro digitos!");
    return 1;}
  
  return 0;
  
}
