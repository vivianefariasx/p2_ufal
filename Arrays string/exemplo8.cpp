//8) Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando se a segunda string lida está contida dentro da primeira.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
	char p1[20],p2[20];
	int a;
	
	printf("\n Informe a primeira string: ");
	gets(p1);
	printf("\n Informe a segunda string: ");
	gets(p2);
	
	for(a=0; p1[a]!='\0'; a++)
	{
			if(p1 == p2)
	{
		printf("\n A segunda string está contida na primeira");
	} 
	}
	
    
	
	
		
}
