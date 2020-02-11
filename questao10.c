/*10. [fun��es] Escreva uma fun��o que leia um n�mero inteiro do teclado e retorne o n�mero com seus d�gitos invertidos. Por exemplo, dado o n�mero
5234, a fun��o dever� retornar 4325.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
 //Variavel 
int numero;

//Fun��o 
int invert(int n) 
{
    if(n==0) //condi��o se n for = 0 
      return n; //Retorna n
     else
    {
     printf("%d", n % 10); //Imprimi o resto das divis�es
     n = n/10; //Divide n por 10 
     return invert(n); //Faz o processo novamente 
    }
    /*Exemplo : n=89 
                89/10 = 8
                89 % 10 = 9 (resto da divis�o na primeira rodada)
                invert(n) = repete o processo ou seja ele pega o 9 e repete para pegar o 8
				8/10 = 0 -> Assumimos que o resultado � 0 pois calculando retorna 0.8 
                8 % 10 = 8 -> assumimos que 8 � o resto da divis�o 
				Repete esse processo at� o resultado das diviss�es serem 0*/
return 0;
 }
int main()
{
   printf("Digite um numero:"); //Ler o numero
   scanf("%d",&numero);
   invert(numero); //Chama a fun��o
   return 0;  //Retorna 0 se n�o tiver erro
}
