#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decodificador (char str[27], char c[54]) {
   const char *ptr;                      // para localizar posicao de cada letra na mensagem
   char aux[3], decod[54];               // 'aux' = armazenar 'ref' como 2 caracteres // 'decod' = mensagem decodificada
   int i, ref, tam= strlen(c);           // 'ref' = posicao do caractere
   printf("\nMensagem: %s\n",c);         // informacao
   printf("Alfabeto: %s\n\n",str);       // informacao

   for (i=0; i<=tam && c[i] != '\0'; i++) {
     ptr = strchr(str, c[i]);            // encontra o indice do caractere (como ponteiro)
     ref = 1 + ptr - str;                // 'ref' : calcula a posicao a partir do inicio da mensagem
     itoa(ref, aux, 10);                 // converte e armazena ref (inteiro) em 'aux' (string)
     if (ref < 10) {                     // se menor que 10, adicionar zero antes
       aux[1] = aux[0];
       aux[0] = '0';
     }
     printf("%c = %s\n", c[i], aux);     // informacao
     decod[2*i] = aux[0];                // grava os valores da mensagem decodificada
     decod[2*i+1] = aux[1];              // grava os valores da mensagem decodificada
   }
   decod[2*i] = '\0';                    // finaliza a mensagem decodificada

   printf("\nMensagem decodificada: %s\n", decod);
}


int main() {
   int q;
   char vet[27], num[54] = "";
   printf ("Numero de mensagens T: ");
   scanf ("%d", &q);
   if (q > 0) {
     printf("Ordem de atribuicao de letras em numeros: ");
     scanf("%s",vet);
     printf("Mensagem codificada: ");
     setbuf(stdin, NULL);
     scanf ("%s",num);
     decodificador(vet,num);
     q--;
   }
   return 0;
}
