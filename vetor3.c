//3) Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida, mostre todos os valores lidos juntamente com a média dos valores.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL,"portuguese");
	float vetor[5], media=0;
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("\n Informe um valor: ");
		scanf("%f", & vetor[i]);
		media= media+vetor[i];
	}
	
	system("cls"); //Limpa a tela
	
	for(i=0; i<5; i++)
	{
			printf("%.1f \n" ,vetor[i]);
	}
	 printf("\n A media dos numeros é: %.1f", media/5);

    return 0;
 } 
