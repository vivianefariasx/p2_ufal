/*4. [strings, recurs�o] Escreva uma fun��o recursiva chamada string_invertida que receba uma string como argumento, imprima-a de tr�s para a frente e n�o
retorne nada. A fun��o dever� encerrar o processamento e retornar quando o caractere de finaliza��o da string �\0� for encontrado.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
 //void pois n�o ir� retornar nada 
   void string_invertida(char s[]) {
   if (s[0] != '\0'){ //Condi��o: Se a primeira letra for diferente de \0 (finaliza a string) o programa segue
   string_invertida(&s[1]); // Come�a a inverter usando a recurs�o ou seja letra por letra, o comando &s[1] server pra chamar a sub-cadeia que se segue ou seja o caracter seguinte
   printf("%c",s[0]);} } //Armazena as letras em s[0] ate encontra o \0 finalizando o programa e imprimindo na tela 

   int main(void) {
   char s[30];
   printf("\nDigite a string: "); //Pede para digitar a string
   gets(s); //Ler a string
   string_invertida(s); //Chama a fun��o de recurs�o
  }
