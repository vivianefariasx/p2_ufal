//6) Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada
//por esse caractere. Ao final, imprima a nova string e o número de vogais que ela possui.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL,"portuguese");
	char palavra[20];
	int i,y=0,tam=0;
	
	printf("\nInforme uma palavra: ");
	gets(palavra);
	tam=strlen(palavra);
     
     for(i=0; palavra[i]!='\0'; i++)
     {
     	if(palavra[i] == 'A' || palavra[i] =='a' ||palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] =='u' )
     	{
     		palavra[i]='9';
     		y++; //Contar vogais

		 }

	 }
	 
	printf("Nova string: %s\n", palavra);
	printf("\nO numero de vogais na palavra digitada é: %d",y);
	printf("\n");
	
	return 0;

	
	

}

