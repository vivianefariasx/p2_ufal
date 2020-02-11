/*10. [funções] Escreva uma função que leia um número inteiro do teclado e retorne o número com seus dígitos invertidos. Por exemplo, dado o número
5234, a função deverá retornar 4325.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
 //Variavel 
int numero;

//Função 
int invert(int n) 
{
    if(n==0) //condição se n for = 0 
      return n; //Retorna n
     else
    {
     printf("%d", n % 10); //Imprimi o resto das divisões
     n = n/10; //Divide n por 10 
     return invert(n); //Faz o processo novamente 
    }
    /*Exemplo : n=89 
                89/10 = 8
                89 % 10 = 9 (resto da divisão na primeira rodada)
                invert(n) = repete o processo ou seja ele pega o 9 e repete para pegar o 8
				8/10 = 0 -> Assumimos que o resultado é 0 pois calculando retorna 0.8 
                8 % 10 = 8 -> assumimos que 8 é o resto da divisão 
				Repete esse processo até o resultado das divissões serem 0*/
return 0;
 }
int main()
{
   printf("Digite um numero:"); //Ler o numero
   scanf("%d",&numero);
   invert(numero); //Chama a função
   return 0;  //Retorna 0 se não tiver erro
}
