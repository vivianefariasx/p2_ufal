
//4) Fa�a um programa que leia uma string e a imprima de tr�s para a frente.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
	   char nome[20];
	   int i,tam;
	   
	   printf("\n Informe a palavra: ");
	   gets(nome);
	   tam=strlen(nome); //Contar os caracteres
	   
	   for(i=tam-1; i>=0; i--) //Para imprimir de tr�s para frente
	   printf("%c",nome[i]);
	   printf("\n");

	   
	   
	   
	   
	   
}
