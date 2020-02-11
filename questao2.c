/*2. [arrays, recursão] Escreva uma função recursiva chamada minimo_recursivo que recebe um array de inteiros e seu tamanho como argumentos e retorna o
menor elemento do array. (dica: você pode “reduzir” o tamanho de um array em uma função recursiva de duas formas: 1) passando a referência
para um elemento posterior e diminuindo o tamanho deacordo: array, tamanho -> &array[1], tamanho - 1;
2) usando dois valores, low e high, para representar os índices mínimo e máximo a serem considerados no */ 
#include <stdio.h>

int menor(int vetor[], int i, int ult) {
  if(i < 0) {
    return ult;// comando de parada se i for menor q 0 ele vai retornar o ultimo numero do vetor, que seria o primeiro numero de verificação.
  }
  // Verifica se o valor atual é menor que o MENOR valor salvo até então
  if(vetor[i] < ult) {
    ult = vetor[i];
  }
  // Chama a recursão
  return menor(vetor, i-1, ult);
}

int main() {
  int vetor[]= {80,10,3,5,7,11,13,100};
  int ult = menor(vetor, 7, vetor[7]); // aqui esta a especificação de 'm' chamando o ultimo valor do vetor que seria o primeiro valor de verificação.
  printf("%d\n",ult);
  return 0;
}
