#include <stdio.h>
#include <string.h>
#include <ctype.h> // A biblioteca ctype.h cont�m fun��es e macros para manipula��o de caracteres
static const struct
{
  const char letter, *chave;
} alfab[] =
{
  { 'A', "9" },{ 'w', "B" },{ 'z', "C" },{ 'Y', "D"  },  { '8', "E" },{ 'x', "F" },{ 'v', "G"  },{ 't', "H" },
  { '7', "I5" },{ 's', "J" },{ 'r', "K" },{ 'q', "L" },  { 'p', "M"  },{ '4', "N"  },{ '6', "O"  },{ 'n', "P" },
  { 'm', "Q" },{ 'l', "R"  },{ 'k', "S"  },{ 'i', "T" },  { '5', "U"  },{ 'h', "V" },{ 'g', "W"  },{ 'f', "X" },
  { 'd', "Y" },{ 'c', "Z" },{ ' ', "  "    }
};
void codifica(const char *s)

{
  size_t i, j;
  for ( i = 0; s[i]; ++i )
  {
      for ( j = 0; j < sizeof alfab / sizeof *alfab; ++j ) // Este operador permite saber o n�mero de bytes ocupado por um determinado tipo de vari�vel. � muito usado na aloca��o din�mica de mem�ria.
      {
      	
        if ( toupper(s[i]) == alfab[j].letter ) // Converte caracter min�sculo em mai�sculo.
        
        {
        	
            printf("%s", alfab[j].chave);
            
        }
      }
  }
}
int main(void)
{
int op=0;
char texto[50];

        printf("Digite a palavra que deseja descodificar: \n");
        scanf(" %[^\n]",texto);
        printf("\n");
		printf ("A palavra criptografada: ", texto);
        codifica(texto);
        
      }
