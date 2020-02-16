//7) Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade
//de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. Exemplos: ovo, arara, rever, asa, osso etc.
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include <ctype.h>

int main() {
 setlocale(LC_ALL, "");
 int i, valor = 0;
 char palavra[15], inversa[15];

 printf("\nDigite uma palavra: ");
 gets(palavra);


 //Copiar a palavra digitada para que seja invertida
 strcpy(inversa, palavra);

 //Inverter a palavra copiada
   strrev(inversa);

 valor = strcmp(palavra, inversa);

 if (valor == 0)
   printf("\nA palavra %s é palíndroma\n", palavra);
 else
   printf("\nA palavra %s não é palíndroma\n", palavra);

 return 0;
}
