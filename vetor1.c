// 1) Crie um programa que leia do teclado seis valores inteiros e em seguida mostra na tela os valores lidos.
#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
int vetor[6], i;
for(i=0; i<6; i++)
{

printf("Digite um valor: ");
scanf("%d", & vetor[i]);
}

//system("cls"); //Limpa a tela 

 for( i = 0 ; i <6; i++)
  {
    printf("vetor[%d] = %d \n",i, vetor[i]);
  }
    return 0;
}

