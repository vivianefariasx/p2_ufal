#include <stdio.h>
#include <string.h>
#include <ctype.h> // A biblioteca ctype.h cont�m fun��es e macros para manipula��o de caracteres
static const struct
{
  const char letter, *chave;
} alfab[] =
{
  { 'A', "9"  },{ 'B', "w" },{ 'C', "z" },{ 'D', "Y"  },  { 'E', "8" },{ 'F', "x" },{ 'G', "v"  },{ 'H', "t" },
  { 'I', "7" },{ 'J', "s" },{ 'K', "r" },{ 'L', "q" },  { 'M', "p"  },{ 'N', "4"  },{ 'O', "6"  },{ 'P', "n" },
  { 'Q', "m" },{ 'R', "l"  },{ 'S', "k"  },{ 'T', "i" },  { 'U', "5"  },{ 'V', "h" },{ 'W', "g"  },{ 'X', "f" },
  { 'Y', "d" },{ 'Z', "c" },{ ' ', "  "    }
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

        printf("Digite seu texto a ser codificado: \n");
        scanf(" %[^\n]",texto);
        printf("\n");
		printf ("A palavra criptografada: ", texto);
        codifica(texto);
        
      }
