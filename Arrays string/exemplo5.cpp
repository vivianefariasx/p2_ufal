//5) Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada na mesma variável. Em seguida, imprima a string invertida.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
	char nome[20],y[20];
	int i,tam;
	
	printf("\n Informe uma palavra: ");
	gets(nome);
	tam=strlen(nome)-1; //Calcula a quantidade de caracteres
	
	for(i=0; nome[i]!='\0'; i++)
	{
		y[tam]=nome[i]; //Atribuir um valor na outra
		tam--;
	}
	y[i]='\0'; //Para não vim lixo
	
	
	strcpy(nome,y); // Mandaer de um pra outro
	
	printf("%s \n",nome);
	
	
	
	
	
}
