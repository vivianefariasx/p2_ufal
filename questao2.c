/*2. [arrays, recurs�o] Escreva uma fun��o recursiva chamada minimo_recursivo que recebe um array de inteiros e seu tamanho como argumentos e retorna o
menor elemento do array. (dica: voc� pode �reduzir� o tamanho de um array em uma fun��o recursiva de duas formas: 1) passando a refer�ncia
para um elemento posterior e diminuindo o tamanho deacordo: array, tamanho -> &array[1], tamanho - 1;
2) usando dois valores, low e high, para representar os �ndices m�nimo e m�ximo a serem considerados no */ 
#include <stdio.h>

int menor(int vetor[], int i, int ult) {
  if(i < 0) {
    return ult;// comando de parada se i for menor q 0 ele vai retornar o ultimo numero do vetor, que seria o primeiro numero de verifica��o.
  }
  // Verifica se o valor atual � menor que o MENOR valor salvo at� ent�o
  if(vetor[i] < ult) {
    ult = vetor[i];
  }
  // Chama a recurs�o
  return menor(vetor, i-1, ult);
}

int main() {
  int vetor[]= {80,10,3,5,7,11,13,100};
  int ult = menor(vetor, 7, vetor[7]); // aqui esta a especifica��o de 'm' chamando o ultimo valor do vetor que seria o primeiro valor de verifica��o.
  printf("%d\n",ult);
  return 0;
}
