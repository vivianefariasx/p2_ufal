//2) Faça um programa que leia uma string e imprima as quatro primeiras letras dela.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{   char string[20];
    int a;
    
    printf("\n Informe uma palavra: ");
    gets(string);
    printf("\n");
    
    for(a=0; a<4; a++){
    printf("%c", string[a]);
}

}
