/*4. [strings, recursão] Escreva uma função recursiva chamada string_invertida que receba uma string como argumento, imprima-a de trás para a frente e não
retorne nada. A função deverá encerrar o processamento e retornar quando o caractere de finalização da string ‘\0’ for encontrado.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
 //void pois não irá retornar nada 
   void string_invertida(char s[]) {
   if (s[0] != '\0'){ //Condição: Se a primeira letra for diferente de \0 (finaliza a string) o programa segue
   string_invertida(&s[1]); // Começa a inverter usando a recursão ou seja letra por letra, o comando &s[1] server pra chamar a sub-cadeia que se segue ou seja o caracter seguinte
   printf("%c",s[0]);} } //Armazena as letras em s[0] ate encontra o \0 finalizando o programa e imprimindo na tela 

   int main(void) {
   char s[30];
   printf("\nDigite a string: "); //Pede para digitar a string
   gets(s); //Ler a string
   string_invertida(s); //Chama a função de recursão
  }
