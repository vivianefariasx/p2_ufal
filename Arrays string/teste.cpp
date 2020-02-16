#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
int main ()
{
	setlocale(LC_ALL,"portuguese");
	char nome[20];
	
	printf("\n Informe uma palavra: ");
	gets(nome);
	
	printf("\n A palavra invertida é: %s", strrev(nome));
}
