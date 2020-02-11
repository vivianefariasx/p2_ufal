/*3. [arrays, strings, recursão] Escreva uma função recursiva chamada testa_palindromo que recebe uma string e seu tamanho como argumentos e retorna 1 se
essa string for um palíndromo, e 0 se não for. Assuma que a string é uma palavra simples, sem acentos, pontuação ou espaços.*/
#include <stdio.h>
#include <string.h>

int polindromo(char *a){
    int i,x;
    for(i = 0,x = strlen(a) - 1; i < x; ++i, --x){ // aqui é para comparar a primeira letra com a ultima contada com o strlen
        if(a[i] != a[x]){   // verificando se são diferentes
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
