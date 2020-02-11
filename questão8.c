/*8. [tipos def. pelo prog., ponteiros] Dadas a estrutura e declarações abaixo, escreva as expressões para acessar cada campo pedido a seguir:
(a) Campo sobrenome da estrutura regCliente. (b) Campo sobrenome da estrutura apontada por ptrCliente.
(c) Campo nome da estrutura regCliente. (d) Campo nome da estrutura apontada por ptrCliente. (e) Campo numCliente da estrutura regCliente. (f) Campo numCliente da estrutura apontada por
ptrCliente.(g) Campo telefone do campo pessoal da estrutura regCliente. (h) Campo telefone do campo pessoal da estrutura apontada por ptrCliente. (i) Campo endereço do campo pessoal da estrutura
regCliente. (j) Campo endereço do campo pessoal da estrutura apontada por ptrCliente. (k) Campo cidade do campo pessoal da estrutura regCliente. (l) Campo cidade do campo pessoal da estrutura apontada por ptrCliente.
(m) Campo estado do campo pessoal da estrutura regCliente. (n) Campo estado do campo pessoal da estrutura apontada por ptrCliente. (o) Campo cep do campo pessoal da estrutura regCliente. 
(p) Campo cep do campo pessoal da estrutura apontada por ptrCliente.*/
#include <stdio.h>
#include <string.h>
main ()
{
struct cliente {
    char nome[15];
    char sobrenome[15];
    int numCliente;
    struct {
        int telefone;
        char endereco[50];
        char cidade[25];
        char estado[2];
        int cep;
        }pessoal;
    }regCliente,*ptrCliente;
ptrCliente = &regCliente;

    strcpy(regCliente.nome,"Alessandro");
    strcpy(regCliente.sobrenome,"Ferreira");
    regCliente.numCliente = 01;
    regCliente.pessoal.telefone = 993751934;
    strcpy(regCliente.pessoal.endereco,"Rua marcilio dias");
    strcpy(regCliente.pessoal.cidade,"Piacabucu");
    strcpy(regCliente.pessoal.estado,"AL");
    regCliente.pessoal.cep = 57210000;

printf(" o sobrenome do cliente : %s \n", regCliente.sobrenome);// letra a)
printf("sobrenome pelo ponteiro:-> %s <-\n", ptrCliente->sobrenome);//b)
printf(" o nome do cliente : %s \n", regCliente.nome);// letra c)
printf("nome pelo poonteiro:-> %s <-\n", ptrCliente->nome);//letra d)
printf(" o numero do cliente : %d \n", regCliente.numCliente);// letra e)
printf("numero pelo poonteiro:-> %d <-\n", ptrCliente->numCliente);// letra f)
printf(" o numero de telefone do cliente : %d  \n",regCliente.pessoal.telefone);//letra g)
printf(" o numero de telefone do cliente :-> %d <- \n",ptrCliente->pessoal.telefone);// letra h)
printf(" o endereço do cliente : %s  \n",regCliente.pessoal.endereco);// letra i)
printf("endereço pelo ponteiro :-> %s <-\n", ptrCliente->pessoal.endereco);// letra j)
printf(" a cidade que o cliente mora : %s  \n",regCliente.pessoal.cidade);// letra k)
printf(" cidade que o cliente mora pelo ponteiro:-> %s  <-\n",ptrCliente->pessoal.cidade);// letra l)
printf(" o estado  : %s  \n",regCliente.pessoal.estado);// letra m)
printf(" estado pelo ponteiro  :-> %s <- \n",ptrCliente->pessoal.estado);// letra n)
printf(" o cep da cidade : %d  \n",regCliente.pessoal.cep);// letra o)
printf(" cep da cidade pelo ponteiro :-> %d  <-\n",ptrCliente->pessoal.cep);// letra p)


}
