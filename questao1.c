/*1. [arrays] Escreva um programa que leia do teclado 20 n�meros inteiros entre 10 e 100 (fa�a essa verifica��o e informe o usu�rio!) e imprima na tela
todos os valores unicos que foram lidos. Assuma que pode ocorrer o pior caso, onde todos os 20 n�meros s�o �nicos. Voc� pode resolver de duas formas:
(a) imprimindo imediatamente na tela se o n�mero � �nico ou n�o, no momento que ele � lido;  
(b) armazenando todos os numeros unicos em um array e imprimindo-os ao final da leitura dos 20 n�meros.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    int m[20],i,j,flag;
      
    for(i=0; i<20; i++){                     // ser�o 20 n�meros
        do{                                  // repetir
            printf(" Informe um numero entre 10 e 100 : ");
            scanf("%d",&m[i]);
            flag = 0;                        // faz flag igual false , falso
            if(m[i]<11 || m[i]>100 ){      // Se o numero digitado n�o estiver entre 10 e 100{
                printf("\n  Este numero nao estah entre 10 e 100, ");
                printf("  digite novamente um que esteja :  \n\n");
                flag = 1;                    // marca que o n�mero � Inv�lido flag igual true , verdadeiro
            }
        }while( flag );                      // enquanto flag for verdadeiro ele continua no loop
    }
                                             // for's para pegar os valores �nicos
    for(i=0; i<20; i++){                     // conto at� 20
        flag = 0;    
        for(j=0; j<20; j++){                 // e novamente at� 20 para percorrer todo o vetor
            if(m[j] == m[i] && j !=i ){      // verifica todos com todos e que n�o seja na mesma posi��o
                m[j] = 0;                    // zera essa posi��o informando que repetiu
                flag = 1;                    // marca como repetido
            }
        }
        if( flag )m[i] = 0;                  // se repetiu deleta tamb�m o primeiro deles
    }
    printf("\n  Valores %cnicos Lidos  \n");
    for(j=0;j<20;j++){                       // percorrer todo o vetor
        if(m[j] != 0 ){                      // se o valor nessa posi��o for diferente de zero
            printf(" Posicao No Vetor -> ");
            printf("%3d -> %3d\n",
                    j+1,m[j]);               // imprimir esse valor na tela                  
        }
    }
    
    return 0;
}
