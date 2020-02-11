/*3. [arrays, strings, recurs�o] Escreva uma fun��o recursiva chamada testa_palindromo que recebe uma string e seu tamanho como argumentos e retorna 1 se
essa string for um pal�ndromo, e 0 se n�o for. Assuma que a string � uma palavra simples, sem acentos, pontua��o ou espa�os.*/
#include <stdio.h>
#include <string.h>

int polindromo(char *a){
    int i,x;
    for(i = 0,x = strlen(a) - 1; i < x; ++i, --x){ // aqui � para comparar a primeira letra com a ultima contada com o strlen
        if(a[i] != a[x]){   // verificando se s�o diferentes
            return 0;
        }
    }
    return 1;
}

int main()
{
    char a[10];
    int b;

    printf("\nPalavra com 10 caracteres no maximo:\n");
    scanf("%s", a);

    b = polindromo(a);

    printf("%d", b);
}
