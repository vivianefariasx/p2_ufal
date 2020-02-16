//1) Faça um programa que leia uma string e a imprima na tela.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
           char string[100];
		 
		 printf("\n Informe uma palavra ou frase: ");
		 fgets (string, 100, stdin); //O melhor a ser usado, stdin é padrão.
		 
		 printf("\n%s",string);  		   	
}
