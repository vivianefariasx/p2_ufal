/*5. [strings] Escreva um programa que leia do teclado uma data no formato “12/10/2010” (não precisa fazer a verificação, assuma que a entrada sempre está
nesse formato) e imprima na tela a mesma data, no formato “12 de outubro de 2010”. (dica: você pode guardar as strings com os nomes de cada mês em um
array de strings char *array_de_strings[tamanho] = {"string1", "string2", ...})*/
#include<stdio.h>
#include<stdio.h>
int main ()
{
int dia, mes, ano;
int a;
char *meses[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
printf("Informe a data no formato DD/MM/AAAA: \n");
scanf ("%d/%d/%d", &dia, &mes, &ano);
printf ("%d de %s de %d", dia, meses[mes-1], ano);	
}
