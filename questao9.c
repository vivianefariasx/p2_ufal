/*9. [fun��es] Escreva uma fun��o que imprima na tela um ret�ngulo s�lido cujos lados s�o lidos nos par�metros inteiros lado_hor e lado_ver. O
ret�ngulo deve ser formado com qualquer caractere lido no par�metro preenchimento. Por exemplo, se lado_hor � 7, lado_ver � 5 e preenchimento � �X�, a
fun��o dever� imprimir*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main ()
{
int lado_hor, lado_ver,i,j;
char n[50];

//ler os valores 
printf("\n Informe o valor do lado horizontal: ");
scanf("%d", & lado_hor);
printf("\n Informe o valor do lado vertical: ");
scanf("%d", & lado_ver);
printf("\n Informe o caractere: ");
scanf("%s", n);


printf("\n"); //Pular linha

//Imprimir na tela o retangulo 
	for( i=0; i<lado_ver; i++ )
        {
                for(j=0;j<lado_hor;j++){
                        printf(" %s ",n);
                }
                printf("\n");
        }

    
 return 0;
}




