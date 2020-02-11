/*5. [strings] Escreva um programa que leia do teclado uma data no formato “12/10/2010” (não precisa fazer a verificação, assuma que a entrada sempre está
nesse formato) e imprima na tela a mesma data, no formato “12 de outubro de 2010”. (dica: você pode guardar as strings com os nomes de cada mês em um
array de strings char *array_de_strings[tamanho] = {"string1", "string2", ...})*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL,"portuguese");
	int dia,ano,mes;
	char *nomesm[12]={"de janeiro de","de fevereiro de", "de março de", "de abril de", 
	"de maio de", "de junho de", "de julho de", "de agosto de", "de setembro de", "de outubro de", "de novembro de", "de dezembro de"};
	

   printf("\nEntre com a data no formato DD/MM/AA: "); //Ler a data
   scanf("%d/%d/%d", &dia, &mes, &ano); //Pega cada campo separadamente dia/mes/ano
   
   //Faz as comparações do mês e imprimi na tela 
   if(mes==1)
   {
      printf("\n %d %s %d",dia,nomesm[0],ano);	
   }
	
   else if(mes==2)
   {
      printf("\n %d %s %d",dia,nomesm[1],ano);	
   }
   else if(mes==3)
   {
      printf("\n %d %s %d",dia,nomesm[2],ano);	
   }
   else if(mes==4)
   {
      printf("\n %d %s %d",dia,nomesm[3],ano);	
   }
   else if(mes==5)
   {
      printf("\n %d %s %d",dia,nomesm[4],ano);	
   }
   else if(mes==6)
   {
      printf("\n %d %s %d",dia,nomesm[5],ano);	
   }
   else if(mes==7)
   {
      printf("\n %d %s %d",dia,nomesm[6],ano);	
   }
   else if(mes==8)
   {
      printf("\n %d %s %d",dia,nomesm[7],ano);	
   }
   else if(mes==9)
   {
      printf("\n %d %s %d",dia,nomesm[8],ano);	
   }
   else if(mes==10)
   {
      printf("\n %d %s %d",dia,nomesm[9],ano);	
   }else if(mes==11)
   {
      printf("\n %d %s %d",dia,nomesm[10],ano);	
   }
   else if(mes==12)
   {
      printf("\n %d %s %d",dia,nomesm[11],ano);	
   }
   else{
   	if(mes>12)
   	{
   		printf("\n Esse mês é ivalido");
	   }
   }
	
	
}

