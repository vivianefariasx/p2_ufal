//2) Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na tela os valores lidos na ordem inversa.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main ()
{
	int vetor[6], i;
	
	for(i=0; i<6; i++)
	{
		printf("\n Informe o valor: ");
		scanf("%d", & vetor[i]);
	}
	
	// system("cls") // Limpa a tela
	
   for(i=5; i>=0; i--)
   {
   	printf("\n %d", vetor[i]);
   }
	return 0;
}
