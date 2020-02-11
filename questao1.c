/*1. [arrays] Escreva um programa que leia do teclado 20 números inteiros entre 10 e 100 (faça essa verificação e informe o usuário!) e imprima na tela
todos os valores únicos que foram lidos. Assuma que pode ocorrer o pior caso, onde todos os 20 números são únicos. Você pode resolver de duas formas:
(a) imprimindo imediatamente na tela se o número é único ou não, no momento que ele é lido;  
(b) armazenando todos os números únicos em um array e imprimindo-os ao final da leitura dos 20 números.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    int m[20],i,j,flag;
      
    for(i=0; i<20; i++){                     // serão 20 números
        do{                                  // repetir
            printf(" Informe um numero entre 10 e 100 : ");
            scanf("%d",&m[i]);
            flag = 0;                        // faz flag igual false , falso
            if(m[i]<10 || m[i]>100 ){      // Se o numero digitado não estiver entre 10 e 100{
                printf("\n  Este numero não está entre 10 e 100, ");
                printf("  digite novamente um que esteja :  \n\n");
                flag = 1;                    // marca que o número é Inválido flag igual true , verdadeiro
            }
        }while( flag );                      // enquanto flag for verdadeiro ele continua no loop
    }
                                             // for's para pegar os valores únicos
    for(i=0; i<20; i++){                     // conto até 20
        flag = 0;    
        for(j=0; j<20; j++){                 // e novamente até 20 para percorrer todo o vetor
            if(m[j] == m[i] && j !=i ){      // verifica todos com todos e que não seja na mesma posição
                m[j] = 0;                    // zera essa posição informando que repetiu
                flag = 1;                    // marca como repetido
            }
        }
        if( flag )m[i] = 0;                  // se repetiu deleta também o primeiro deles
    }
    printf("\n  Valores %cnicos Lidos  \n");
    for(j=0;j<20;j++){                       // percorrer todo o vetor
        if(m[j] != 0 ){                      // se o valor nessa posição for diferente de zero
            printf(" Posição No Vetor -> ");
            printf("%3d -> %3d\n",
                    j+1,m[j]);               // imprimir esse valor na tela                  
        }
    }
    
    return 0;
}
